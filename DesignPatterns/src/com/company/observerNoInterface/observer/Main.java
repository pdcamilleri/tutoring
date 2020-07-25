package com.company.observerNoInterface.observer;

import java.util.*;

public class Main {
    public static void main(String args[]) {
        implementationFromScratch();
    }

    public static void implementationFromScratch() {
        // subject
        SecurityCenter securityCenter = new SecurityCenter();

        RegularPhone samsungPhone = new RegularPhone();
        RegularPhone iPhone = new RegularPhone();
//        OnePlusPhone onePlusPhone = new OnePlusPhone();

        securityCenter.addObserver(samsungPhone);
        securityCenter.addObserver(iPhone);
//        securityCenter.addObserver(onePlusPhone);

        securityCenter.setNotification("hey, your phone needs a security update");
        System.out.println("samsung phone received notification: " + samsungPhone.getNotification());
        System.out.println("iPhone received notification: " + iPhone.getNotification());
        System.out.println();


        {
            List<String> names = new LinkedList<>();
            names.add("alice");
            names.add("bob");
            printNames(names);
        }

        {
            ArrayList<String> names = new ArrayList<>();
            names.add("alice");
            names.add("bob");
            printNames(names);
        }


        {
            Set<String> names = new HashSet<>();
            names.add("alice");
            names.add("alice");
            names.add("bob");
            printNames(names);
        }

        {
            Map<String, String> names = new HashMap();
        }

    }

    public static void printNames(Collection<String> names) {
        for (String name : names) {
            System.out.println(name);
        }
    }
}
