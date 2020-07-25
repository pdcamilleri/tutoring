package com.company.observer;

import java.beans.PropertyChangeListener;
import java.beans.PropertyChangeSupport;

public class TwitterUser {
    private String notification;

    private PropertyChangeSupport support;

    public TwitterUser() {
        support = new PropertyChangeSupport(this);
    }

    public void addPropertyChangeListener(PropertyChangeListener pcl) {
        support.addPropertyChangeListener(pcl);
    }

    public void removePropertyChangeListener(PropertyChangeListener pcl) {
        support.removePropertyChangeListener(pcl);
    }

    public void setNotification(String value) {
        support.firePropertyChange("notification", this.notification, value);
        this.notification = value;

    }
}
