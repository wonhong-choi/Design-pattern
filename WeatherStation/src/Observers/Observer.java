package Observers;

import Datas.WeatherInfo;

public interface Observer {
    public abstract void update(WeatherInfo weatherInfo);
}
