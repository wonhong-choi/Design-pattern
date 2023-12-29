package Observers;


import Subjects.ISubject;

public interface IObserver {
    public abstract void update(ISubject subject);
}
