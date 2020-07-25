package com.company.decorator.toys;

public class Main {

    public static void main(String[] args) {
        Doll doll; // declaring a variable
        doll = new BarbieDoll(); // instantiation
        System.out.println(doll);

        // doll with one hat
        Doll beachDoll = new BeachGear(new BarbieDoll());
        System.out.println(beachDoll);

        // doll with hiking gear
        Doll hikingDoll = new HikingBoots(new BarbieDoll());
        System.out.println(hikingDoll);

        // doll with both beach and hiking gear
        Doll hikingAndBeachDoll = new BeachGear(new HikingBoots(new BarbieDoll()));
        System.out.println(hikingAndBeachDoll);

        // doll with both beach and hiking gear
        Doll dollWithManyHats = new BeachGear(new BeachGear(new BeachGear(new BeachGear(new BeachGear(new BeachGear(new HikingBoots(new BarbieDoll())))))));
        System.out.println(dollWithManyHats);
    }
}

