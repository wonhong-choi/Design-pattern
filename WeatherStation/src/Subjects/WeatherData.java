package Subjects;

import java.util.ArrayList;
import java.util.List;

import Datas.WeatherInfo;
import Observers.IObserver;

public class WeatherData implements ISubject{
    private List<IObserver> observers;
    private WeatherInfo weatherInfo;

    public WeatherData(){
        observers = new ArrayList<IObserver>();
    }
    
    @Override
    public void registerObserver(IObserver o) {
        this.observers.add(o);
    }

    @Override
    public void removeObserver(IObserver o) {
        this.observers.remove(o);
    }

    @Override
    public void notifyObservers() {
        for(IObserver observer : observers){
            observer.update(this);
        }
    }

    public void measurementChanged(){
        this.notifyObservers();
    }

    public void setWeatherInfo(WeatherInfo weatherInfo){
        this.weatherInfo = weatherInfo;
        this.measurementChanged();
    }

    public WeatherInfo getWeahterInfo(){
        return this.weatherInfo;
    }
}
