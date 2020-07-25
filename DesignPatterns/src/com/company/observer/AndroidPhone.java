package com.company.observer;

import java.util.Observable;
import java.util.Observer;

public class AndroidPhone implements Observer {

    private String notification;

    @Override
    public void update(Observable o, Object notification) {
        this.setNotification((String) notification);
    }

    public String getNotification() {
        return notification;
    }

    public void setNotification(String notification) {
        this.notification = notification;
    }
}
