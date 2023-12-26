package Subjects;

import java.util.List;

import Datas.WeatherInfo;
import Observers.Observer;

public class WeatherData implements Subject{
    private List<Observer> observers;
    private WeatherInfo weatherInfo;
    
    @Override
    public void registerObserver(Observer o) {
        this.observers.add(o);
    }

    @Override
    public void removeObserver(Observer o) {
        this.observers.remove(o);
    }

    @Override
    public void notifyObservers() {
        for(Observer observer : observers){
            observer.update(weatherInfo);
        }
    }

    public void measurementChanged(){
        this.notifyObservers();
    }

    public void setWeatherInfo(float temp, float humidity, float pressure){
        this.weatherInfo.setWeatherInfo(temp, humidity, pressure);
    }
}
