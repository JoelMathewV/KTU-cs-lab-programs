import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/*<applet code="Signals" width=400 height=250></applet>*/
public class Signals extends Applet implements ItemListener {
    String msg = "";
    Checkbox stop, ready, go;
    CheckboxGroup cbg;

    public void init() {
        cbg = new CheckboxGroup();
        stop = new Checkbox("Stop", cbg, false);
        ready = new Checkbox("Ready", cbg, false);
        go = new Checkbox("Go", cbg, false);
        add(stop);
        add(ready);
        add(go);
        stop.addItemListener(this);
        ready.addItemListener(this);
        go.addItemListener(this);
    }

    public void itemStateChanged(ItemEvent ie) {
        repaint();
    }

    public void paint(Graphics g) {
        msg = cbg.getSelectedCheckbox().getLabel();
        g.drawOval(165, 40, 50, 50);
        g.drawOval(165, 100, 50, 50);
        g.drawOval(165, 160, 50, 50);

        if (msg.equals("Stop")) {
            g.setColor(Color.red);
            g.fillOval(165, 40, 50, 50);
        } else if (msg.equals("Ready")) {
            g.setColor(Color.yellow);
            g.fillOval(165, 100, 50, 50);
        } else {
            g.setColor(Color.green);
            g.fillOval(165, 160, 50, 50);
        }
    }
}