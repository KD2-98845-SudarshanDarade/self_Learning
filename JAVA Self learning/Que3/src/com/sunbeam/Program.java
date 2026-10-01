package com.sunbeam;

class Animal {
    String name;

    Animal(String name) {
        this.name = name;
    }

    void eat() {
        System.out.println(name + " is eating");
    }
}

class Lion extends Animal {
    Lion(String name) {
        super(name);
    }

    void roar() {
        System.out.println(name + " is roaring");
    }
}

class Elephant extends Animal {
    Elephant(String name) {
        super(name);
    }

    void trumpet() {
        System.out.println(name + " is trumpeting");
    }
}

class Zoo {
    String zooName;
    Lion lion;
    Elephant elephant;

    Zoo(String zooName) {
        this.zooName = zooName;
        lion = new Lion("Simba");
        elephant = new Elephant("Raja");
    }

    void showAnimals() {
        System.out.println("Zoo: " + zooName);

        lion.eat();
        lion.roar();

        elephant.eat();
        elephant.trumpet();
    }
}

public class Program {
    public static void main(String[] args) {
        Zoo zoo = new Zoo("City Zoo");
        zoo.showAnimals();
    }
}
