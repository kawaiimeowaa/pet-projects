public class Main {
    public static void main(String[] args) {
        ClimateControl cl = new ClimateControl();
        cl.checkFreon(29.9, "jjj", "156");
    }
}

class ClimateControl {
    double freonlevel;
    String model;
    String number;

    void checkFreon(double freonlevel,String model,String number) {
        if (freonlevel > 30) {
            System.out.println("Автобус " + model + " " + number + " Требуется дозаправка хладогена");
        }
    }
}