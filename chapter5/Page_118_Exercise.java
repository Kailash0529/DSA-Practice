class Output {
    void go() {
        int value = 7;
        for (int i=1; i < 8; i++) {
            value++;
            if(i>4) {
                System.out.print(++value + " ");
            }
            if(value > 14) {
                System.out.print("i = " + i);
                break;
            }
        }
    }
}

/*      value = 7, i = 1, output:
*       value = 9, i = 1, output:
*       value = 11, i = 1, output:
*       value = 13, i = 1, output: 13
*       value = 15, i = 1, output: 13 15 i = 6
* */

public class Page_118_Exercise {
    public static void main(String[] args) {
        Output output = new Output();
        output.go();
    }
}