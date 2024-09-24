package Grammar;

public class Lambda {

    // 주어진 코드를 람다식으로 변환하기

    // 문제 1.
    interface Greeting {
        void sayHello();
    }

    public static class Main1 {
        public static void main(String[] args) {
//            Greeting greeting = new Greeting() {
//                @Override
//                public void sayHello() {
//                    System.out.println("Hello, world!");
//                }
//            };

            Greeting greeting = () -> System.out.println("Hello, World!");
            greeting.sayHello();
        }
    }
    // -------------------------------------------------------------------------------------------
    // 문제 2.
    interface Comparator {
        int compare(int a, int b);
    }

    public static class Main2 {
        public static void main(String[] args) {
//            Comparator comparator = new Comparator() {
//                @Override
//                public int compare(int a, int b) {
//                    if (a > b) {
//                        return a;
//                    } else {
//                        return b;
//                    }
//                }
//            };
            Comparator comparator = (a,b) -> {
                if (a > b) {
                    return a;
                } else {
                    return b;
                }
            };

            int result = comparator.compare(5, 10);
            System.out.println("더 큰 수는: " + result);
        }
    }

    // -------------------------------------------------------------------------------------------

    // 문제 3.
    interface StringOperation {
        String toUpperCase(String str);
    }

    public static class Main3 {
        public static void main(String[] args) {
//            StringOperation stringOperation = new StringOperation() {
//                @Override
//                public String toUpperCase(String str) {
//                    return str.toUpperCase();
//                }
//            };
            StringOperation stringOperation = (str) -> str.toUpperCase();

            String result = stringOperation.toUpperCase("hello");
            System.out.println("대문자로 변환된 문자열: " + result);
        }
    }

    // -------------------------------------------------------------------------------------------
}
