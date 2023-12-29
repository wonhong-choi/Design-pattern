package Observers;

import Datas.WeatherInfo;
import DisplayElements.IDisplayElement;
import Subjects.ISubject;
import Subjects.WeatherData;

public class ForecastDisplay implements IObserver, IDisplayElement{
    private float temp;
    private float humidity;
    private float pressure;
    private WeatherData weatherData;

    public ForecastDisplay(WeatherData weatherData){
        this.weatherData = weatherData;
        weatherData.registerObserver(this);
    }

    @Override
    public void update(ISubject weatherData) {
        WeatherInfo weatherinfo = ((WeatherData)weatherData).getWeahterInfo();
        this.temp = weatherinfo.getTemp();
        this.humidity = weatherinfo.getHumidity();
        this.pressure = weatherinfo.getPressure();

        this.display();
    }

    @Override
    public void display() {
        System.out.println("FORECAST DISPLAY");
        System.out.println("TEMP : " + temp);
        System.out.println("HUMIDITY : " + humidity);
        System.out.println("PRESSURE : " + pressure);
        System.out.println();
    }
}
