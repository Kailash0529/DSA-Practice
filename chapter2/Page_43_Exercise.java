// Heres the arranged code for desired output.

class Drumkit {
    boolean topHat = true;
    boolean snare = true;

    void playtopHat () {
        System.out.println("Ding ding da-ding");
    }

    void playSnare () {
        System.out.println("Bang bang ba-bang");
    }
}

public class Pg_43_Exercise {
    public static void main(String[] args) {
        Drumkit d = new Drumkit();
        d.playSnare();
        d.playtopHat();
        d.snare = false;
        if (d.snare) {
            d.playSnare();
        }
    }
}