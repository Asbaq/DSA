import java.awt.*;
import java.awt.event.*;
class scrollbar extends Frame  implements AdjustmentListener
{
	Scrollbar s1;
	String msg="";
	scrollbar()
	{
		setLayout(null);
		s1=new Scrollbar(Scrollbar.VERTICAL,0,30,0,200);
		
		s1.setBounds(250,50,30,200);
		add(s1);
		s1.addAjustmentListener(this);
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
			System.exit(0);
			}
		});
	}
	public void addjustmentValueChanged(AdjustmentEvent ae)
	{
		repaint();
	}
	public void paint(Graphics g)
	{
		g.drawString("scrollbar position",10,100);
		msg=msg + s1.getValue();
		g.drawString(msg,10,150);
	}
	public static void main(String[] args)
	{
		scrollbar s=new scrollbar();
		s.setTitle("scrolling....");
		s.setSize(800,800);
		s.setVisible(true);
	}
}
	