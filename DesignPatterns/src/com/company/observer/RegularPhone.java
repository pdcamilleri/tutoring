package com.company.observer;

public class RegularPhone implements Phone {

    private String notification;

    @Override
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
