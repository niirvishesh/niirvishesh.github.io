import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JFrame;

public class Tutorial extends JFrame
{
	public Tutorial()
	{
		setTitle("Tutorial");
		setSize(960, 960);
		setVisible(true);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}

	public void paint(Graphics g)
	{
		g.setColor(Color.GREEN);
		g.drawOval(480, 480, 200, 200);
		g.setColor(Color.ORANGE);
		g.fillOval(240, 240, 200, 100);
	}

public static void main(String args[])
{
	Tutorial t = new Tutorial();
	t.paint(null);
}
}
		
