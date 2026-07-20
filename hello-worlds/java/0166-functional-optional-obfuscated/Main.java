import java.util.Optional;
public class Main {
    public static void main(String[] args) {
        Optional<char[]> opt = Optional.of(new char[]{72,101,108,108,111,44,32,87,111,114,108,100,33});
        String result = opt.map(String::new).orElse("");
        System.out.println(result);
    }
}
