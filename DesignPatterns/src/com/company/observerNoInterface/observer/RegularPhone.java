package com.company.observerNoInterface.observer;

public class RegularPhone{

    private String notification;

    public void update(Object notification) {
        this.setNotification((String) notification);
    }

    public String getNotification() {
        return notification;
    }

    public void setNotification(String notification) {
        this.notification = notification;
    }

}
