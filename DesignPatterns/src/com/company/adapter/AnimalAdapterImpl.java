package com.company.adapter;

public class AnimalAdapterImpl implements AnimalAdapter {
    private Animal animal; // old implementation of the class
    
    public AnimalAdapterImpl(Animal animal) {
        this.animal = animal;
    }

    @Override
    public double getSpeed() {
        double mph = animal.getSpeed(); // in miles per hour
        return convertMPHtoKMPH(mph);
    }

    // adaptor implements new method however that needs to be done
//    boolean isNative() {
//        if (animal.getName().equals("Cheetah")) {
//            return animal.getCountry() == AFRICA;
//        }
//    }
//
//    String getName() {
//        // get the old animal name and convert it to french name
//        frenchTranslation.translate(animal.getName());
//    }


    // Note: this is private. External classes do not need to now how this adaption from one class to another is done.
    private double convertMPHtoKMPH(double mph) {
        return mph * 1.60934;
    }
}
