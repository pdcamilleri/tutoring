package com.company.observer;

import java.util.ArrayList;
import java.util.List;

public class SecurityCenter {
    private String notification;
    // list of objects that want to receive notifications
    private List<Phone> phones = new ArrayList<>();

    public void addObserver(Phone phone) {
        this.phones.add(phone);
    }

    public void removeObserver(Phone phone) {
        this.phones.remove(phone);
    }

    public void setNotification(String notification) {
        this.notification = notification;
        for (Phone phone : this.phones) {
            phone.update(this.notification);
        }
    }
}
