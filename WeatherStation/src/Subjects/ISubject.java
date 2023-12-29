package Subjects;

import Observers.IObserver;

public interface ISubject {
    public abstract void registerObserver(IObserver o);
    public abstract void removeObserver(IObserver o);
    public abstract void notifyObservers();
}
