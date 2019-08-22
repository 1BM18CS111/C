class point
{
	int x;
	int y;
	point()
	{
		x=10;
		y=20;
	}
	point(int a, int b)
	{
		x=a;
		y=b;
	}
	void setdata(int c, int d)
	{
		x=c;
		y=d;
	}
	void printdata()
	{
		System.out.println(x + " " + y);
	}
	void distance(point p)
	{
		double p1=Math.sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
		System.out.println("The distance is" + p1);	
	}

}
class pointmain
{
	public static void main(String arg[])
	{
		point o1=new point();
		point o2=new point(10,20);
		o1.setdata(15,35);
		o2.setdata(100,200);
		o1.printdata();
		o2.printdata();
		o1.distance(o2);
	}
}

