package com.company.observer;

import java.beans.PropertyChangeEvent;
import java.beans.PropertyChangeListener;

public class NokiaPhone implements PropertyChangeListener {

    private String notification;

    public void propertyChange(PropertyChangeEvent evt) {
        // this is where the magic happens. we get the event and can do what we need to
        this.setNotification((String) evt.getNewValue());
    }

    public String getNotification() {
        return notification;
    }

    public void setNotification(String notification) {
        this.notification = notification;
    }
}
