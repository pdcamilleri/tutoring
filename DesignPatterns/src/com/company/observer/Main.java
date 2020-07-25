package com.company.observer;

public class Main {
    public static void main(String args[]) {
        implementationFromScratch();
        usingObserverCoreLibraryDeprecated();
        usingAddPropertyChangeListener();
    }

    public static void implementationFromScratch() {
        // subject
        SecurityCenter securityCenter = new SecurityCenter();

        RegularPhone samsungPhone = new RegularPhone();
        RegularPhone iPhone = new RegularPhone();
        OnePlusPhone onePlus8 = new OnePlusPhone();

        securityCenter.addObserver(samsungPhone);
        securityCenter.addObserver(iPhone);
        securityCenter.addObserver(onePlus8);

        securityCenter.setNotification("hey, your phone needs a security update");
        System.out.println("samsung phone received notification: " + samsungPhone.getNotification());
        System.out.println("iPhone received notification: " + iPhone.getNotification());
        System.out.println();
    }

    public static void usingObserverCoreLibraryDeprecated() {

        YouTubeChannel channel = new YouTubeChannel();
        AndroidPhone phone = new AndroidPhone();

        channel.addObserver(phone);

        channel.setNotification("hey, checkout my new video");
        System.out.println("android phone received notification: " + phone.getNotification());
        System.out.println();
    }

    public static void usingAddPropertyChangeListener() {

        TwitterUser twitterUser = new TwitterUser();
        NokiaPhone phone = new NokiaPhone();

        twitterUser.addPropertyChangeListener(phone);

        twitterUser.setNotification("someone you are following just tweeted: hi mom, i'm on twitter");
        System.out.println("received notification: " + phone.getNotification());
        System.out.println();
    }
}
