void player(int x)
{
   int y=270;
    basic_line(90,540,270);
     setcolor(RED);
    rectangle(x-5,y-15-5,x+5,y-10);
	   // Hands
     line(x-6,y-15-2,x-6-6,y-13);
     line(x+6,y-15-2,x+6+6,y-13);
	   // Legs
     line(x-2,y-9,x-6,y-1);
     line(x+2,y-9,x+6,y-1);
}
