package WeatherStation;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLEncoder;
import java.time.LocalDateTime;

import Datas.WeatherInfo;

import org.json.JSONArray;
import org.json.JSONObject;


public class WeatherInfoCollector {
    public static WeatherInfo getWeatherInfo() throws IOException{
        LocalDateTime now = LocalDateTime.now();
        StringBuilder date = new StringBuilder(Integer.toString(now.getYear()));
        if(now.getMonthValue() < 10){
            date.append("0");
        }
        date.append(Integer.toString(now.getMonthValue()));
        if(now.getDayOfMonth() < 10){
            date.append("0");
        }
        date.append(Integer.toString(now.getDayOfMonth()));

        StringBuilder time = new StringBuilder();
        if(now.getHour() < 10){
            time.append("0");
        }
        time.append(now.getHour());
        time.append("00");
        // if(now.getMinute() < 10){
        //     time.append("0");
        // }
        // time.append(now.getMinute());

        StringBuilder urlBuilder = new StringBuilder("http://apis.data.go.kr/1360000/VilageFcstInfoService_2.0/getVilageFcst"); /*URL*/
        urlBuilder.append("?" + URLEncoder.encode("serviceKey","UTF-8") + "=ZP0tEXf4q7H6APdYuSARCn360NS5Ft%2ByN%2BSKsSVuqF%2FPOVVHZrIrnSHu3L7KBjMsC3pDcDyk9ZP7907%2FcRN64w%3D%3D"); /*Service Key*/
        urlBuilder.append("&" + URLEncoder.encode("pageNo","UTF-8") + "=" + URLEncoder.encode("1", "UTF-8")); /*페이지번호*/
        urlBuilder.append("&" + URLEncoder.encode("numOfRows","UTF-8") + "=" + URLEncoder.encode("8", "UTF-8")); /*한 페이지 결과 수*/
        urlBuilder.append("&" + URLEncoder.encode("dataType","UTF-8") + "=" + URLEncoder.encode("JSON", "UTF-8")); /*요청자료형식(XML/JSON) Default: XML*/
        urlBuilder.append("&" + URLEncoder.encode("base_date","UTF-8") + "=" + URLEncoder.encode("20231227", "UTF-8")); /*‘21년 6월 28일발표*/
        urlBuilder.append("&" + URLEncoder.encode("base_time","UTF-8") + "=" + URLEncoder.encode("0500", "UTF-8")); /*05시 발표*/
        // urlBuilder.append("&" + URLEncoder.encode("base_time","UTF-8") + "=" + URLEncoder.encode(time.toString(), "UTF-8")); /*05시 발표*/
        urlBuilder.append("&" + URLEncoder.encode("nx","UTF-8") + "=" + URLEncoder.encode("55", "UTF-8")); /*예보지점의 X 좌표값*/
        urlBuilder.append("&" + URLEncoder.encode("ny","UTF-8") + "=" + URLEncoder.encode("127", "UTF-8")); /*예보지점의 Y 좌표값*/
        URL url = new URL(urlBuilder.toString());

        HttpURLConnection connection = (HttpURLConnection) url.openConnection();
        connection.setRequestMethod("GET");
        connection.setRequestProperty("Content-type", "application/json");

        System.out.println("Response Code : " + connection.getResponseCode());
        BufferedReader reader;
        if(connection.getResponseCode() >= 200 && connection.getResponseCode() <= 300){
            reader = new BufferedReader(new InputStreamReader(connection.getInputStream()));
        }
        else{
            reader = new BufferedReader(new InputStreamReader(connection.getErrorStream()));
        }

        StringBuilder sb = new StringBuilder();
        String line;
        while((line = reader.readLine()) != null){
            sb.append(line);
        }
        reader.close();
        connection.disconnect();
        
        JSONObject jsonObject = new JSONObject(sb.toString());
        WeatherInfo weatherInfo = new WeatherInfo();
       
        JSONArray JSONWeatherInfo = jsonObject.getJSONObject("response").getJSONObject("body").getJSONObject("items").getJSONArray("item");
        
        
        for(int i=0; i<JSONWeatherInfo.length(); ++i){
            JSONObject info = JSONWeatherInfo.getJSONObject(i);
            if(info.getString("category").equals("TMP")){
                weatherInfo.setTemp(Float.parseFloat(info.getString("fcstValue")));
            }
            else if(info.getString("category").equals("UUU")){
                weatherInfo.setHumidity(Float.parseFloat(info.getString("fcstValue")));
            }
            else if(info.getString("category").equals("VVV")){
                weatherInfo.setPressure(Float.parseFloat(info.getString("fcstValue")));
            }
        }
        return weatherInfo;
    }

    public static void main(String[] args) {
        try {
            getWeatherInfo();
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}
