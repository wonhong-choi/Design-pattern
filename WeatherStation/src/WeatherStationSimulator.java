import java.io.IOException;

import Datas.WeatherInfo;
import Observers.CurrentConditionDisplay;
import Observers.ForecastDisplay;
import Observers.StatisticsDisplay;
import Subjects.WeatherData;
import WeatherStation.WeatherInfoCollector;

public class WeatherStationSimulator {
    public static void main(String[] args) throws IOException{
        WeatherData wd = new WeatherData();

        CurrentConditionDisplay ccd = new CurrentConditionDisplay(wd);
        StatisticsDisplay sd = new StatisticsDisplay(wd);
        ForecastDisplay fd = new ForecastDisplay(wd);

        WeatherInfo weatherInfo = WeatherInfoCollector.getWeatherInfo();

        wd.setWeatherInfo(weatherInfo);
        
        weatherInfo = WeatherInfoCollector.getWeatherInfo();
        wd.setWeatherInfo(weatherInfo);
    }
}
