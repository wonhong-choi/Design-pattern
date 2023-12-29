package Datas;

public class WeatherInfo {
    private float temp;
    public float getTemp() {
        return temp;
    }

    private float humidity;
    public float getHumidity() {
        return humidity;
    }

    private float pressure;
    
    public float getPressure() {
        return pressure;
    }

    public void setHumidity(float humidity) {
        this.humidity = humidity;
    }
    
    public void setTemp(float temp){
        this.temp = temp;
    }

    public void setPressure(float pressure) {
        this.pressure = pressure;
    }

    

}
