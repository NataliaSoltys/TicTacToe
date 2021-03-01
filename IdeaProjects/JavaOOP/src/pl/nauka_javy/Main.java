package pl.nauka_javy;

public class Main {

    public static void main(String[] args) {

        Garnek garnek = new Garnek(7, 5, "srebrny");

        String wiadomosc = garnek.gotuj();

        System.out.println(wiadomosc);

        System.out.println(garnek.gotuj(true));
        System.out.println(garnek.zwrocTemperatureWrzeniaWody());

        garnek.gotujBezInformacji();

    }
}
