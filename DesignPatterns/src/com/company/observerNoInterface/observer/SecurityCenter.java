package com.company.observerNoInterface.observer;

import java.util.ArrayList;
import java.util.List;

public class SecurityCenter {
    private String notification;
    // list of objects that want to receive notifications
    private List<RegularPhone> RegularPhones = new ArrayList<>();

    public void addObserver(RegularPhone RegularPhone) {
        this.RegularPhones.add(RegularPhone);
    }

    public void removeObserver(RegularPhone RegularPhone) {
        this.RegularPhones.remove(RegularPhone);
    }

    public void setNotification(String notification) {
        this.notification = notification;
        for (RegularPhone RegularPhone : this.RegularPhones) {
            RegularPhone.update(this.notification);
        }
    }
}
