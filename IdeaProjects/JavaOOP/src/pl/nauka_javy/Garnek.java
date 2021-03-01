package pl.nauka_javy;

public class Garnek
{
    int srednica;
    int wysokosc;
    String kolor;

    public Garnek()
    {

    }

    public Garnek(int srednica, int wysokosc, String kolor)
    {
        this.srednica = srednica;
        this.wysokosc = wysokosc;
        this.kolor = kolor;
    }

    public Garnek(int srednica, int wysokosc)
    {
        this.srednica = srednica;
        this.wysokosc = wysokosc;
    }

    public String gotuj()
    {
        return "Gotowanie w trakcie...";
    }

    public String gotuj(boolean czyDodalismySol)
    {
        if(czyDodalismySol)
            return "Gotowanie z solą.";
        else
            return "Gotowanie bez soli.";
    }

    public int zwrocTemperatureWrzeniaWody()
    {
        return 100;
    }

    public void gotujBezInformacji()
    {
        wlaczGarnek();
        gotujPrzezPolGodziny();
        wylaczGarnek();
    }

    public void wlaczGarnek()
    {
        System.out.println("Włączanie garnka.");
    }

    public void gotujPrzezPolGodziny()
    {
        System.out.println("Gotowanie przez pół godziny.");
    }

    public void wylaczGarnek()
    {
        System.out.println("Wyłącznie garnka.");
    }


}
