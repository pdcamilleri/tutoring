package com.company.adapter;

public class Main {
    
    public static void main(String args[]) {
    	Animal cheetah = new Cheetah();
        System.out.println("cheetah");
        System.out.println(cheetah.getSpeed());
    	AnimalAdapter cheetahAdapter = new AnimalAdapterImpl(cheetah);
        System.out.println(cheetahAdapter.getSpeed());

        Animal lion = new Lion();
        AnimalAdapter lionAdapter = new AnimalAdapterImpl(lion);
        System.out.println("---\nlion");
        System.out.println(lion.getSpeed());
        System.out.println(lionAdapter.getSpeed());

        Animal turtle = new Turtle();
        AnimalAdapter turtleAdapter = new AnimalAdapterImpl(turtle);
        System.out.println("---\nturtle");
        System.out.println(turtle.getSpeed());
        System.out.println(turtleAdapter.getSpeed());
    }
}
