package Grammar;

public class For {

    // For문 이용해서 객체 옮기기
    public static void main(String[] args) {
        for(int i=1; i<6; i++) {
            for(int j=1; j<6; j++) {
                if(i-j == 0) {
                    System.out.print(">");
                } else {
                    System.out.print("-");
                }
            }
            System.out.println();
        }

        for(int i=1; i<6; i++) {
            for(int j=1; j<6; j++) {
                if(i+j == 6) {
                    System.out.print("<");
                } else {
                    System.out.print("-");
                }
            }
            System.out.println();
        }
    }
}
