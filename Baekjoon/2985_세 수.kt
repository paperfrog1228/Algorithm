import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val(a,b,c)=readLine().split(' ').map { it.toInt() }
    if(a+b==c)
        print("$a+$b=$c")
    else if(a-b==c)
        print("$a-$b=$c")
    else if(a*b==c)
        print("$a*$b=$c")
    else if(a.toDouble()/b.toDouble()==c.toDouble())
        print("$a/$b=$c")
    else if(a==b+c)
        print("$a=$b+$c")
    else if(a==b-c)
        print("$a=$b-$c")
    else if(a==b*c)
        print("$a=$b*$c")
    else if(a.toDouble()==b.toDouble()/c.toDouble())
        print("$a=$b/$c")
}
