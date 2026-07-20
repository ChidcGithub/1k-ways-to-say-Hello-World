public class Main {
    static class JFrame { void setTitle(String t){} void add(Object c){} void setVisible(boolean b){ System.out.println("[Swing JFrame]: Hello, World!"); } void setSize(int w,int h){} }
    static class JLabel { JLabel(String s){} }
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setTitle("Hello");
        frame.add(new JLabel("Hello, World!"));
        frame.setSize(300, 200);
        frame.setVisible(true);
    }
}
