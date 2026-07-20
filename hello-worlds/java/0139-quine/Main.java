public class Main{
    public static void main(String[]a){
        String s="public class Main{%c    public static void main(String[]a){%c        String s=%c%s%c;%c        System.out.printf(s,10,10,34,s,34,10,10,34,34,10,10);%c        System.out.println(%cHello, World!%c);%c    }%c}";
        System.out.printf(s,10,10,34,s,34,10,10,34,34,10,10);
        System.out.println("Hello, World!");
    }
}
