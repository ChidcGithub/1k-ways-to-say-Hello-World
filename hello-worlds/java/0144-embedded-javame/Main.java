// Mock J2ME / MIDP APIs so the file compiles with a standard JDK.
// On a real device these classes would come from javax.microedition.midlet / lcdui.
class MIDlet {
    protected void startApp() {}
    protected void pauseApp() {}
    protected void destroyApp(boolean unconditional) {}
}

class Display {
    static void getDisplay(MIDlet m) {}
}

class Form {
    Form(String title) {}
    void append(String s) {
        // Real MIDP would render this on the device screen; we mock-print to stdout.
        System.out.println("[MIDlet Display]: " + s);
    }
}

public class Main extends MIDlet {
    @Override
    protected void startApp() {
        Form f = new Form("Hello");
        f.append("Hello, World!");
    }

    public static void main(String[] args) {
        Main m = new Main();
        m.startApp();
    }
}
