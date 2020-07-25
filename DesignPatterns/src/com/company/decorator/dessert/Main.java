package com.company.decorator.dessert;

public class Main {

    public static void main(String[] args) {
        IceCream iceCream; // declaring a variable
        iceCream = new BarbieIceCream(); // instantiation
        System.out.println(iceCream);

        // doll with one hat
        IceCream beachIceCream = new BeachGear(new BarbieIceCream());
        System.out.println(beachIceCream);

        // doll with hiking gear
        IceCream hikingIceCream = new HikingBoots(new BarbieIceCream());
        System.out.println(hikingIceCream);

        // doll with both beach and hiking gear
        IceCream hikingAndBeachIceCream = new BeachGear(new HikingBoots(new BarbieIceCream()));
        System.out.println(hikingAndBeachIceCream);

        // doll with both beach and hiking gear
        IceCream iceCreamWithManyHats = new BeachGear(new BeachGear(new BeachGear(new BeachGear(new BeachGear(new BeachGear(new HikingBoots(new BarbieIceCream())))))));
        System.out.println(iceCreamWithManyHats);
    }
}

