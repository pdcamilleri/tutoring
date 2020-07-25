package com.company.observer;

import java.util.Observable;

public class YouTubeChannel extends Observable {
    private String notification;

    public void setNotification(String notification) {
        this.notification = notification;
        setChanged();
        notifyObservers(notification);
    }
}
