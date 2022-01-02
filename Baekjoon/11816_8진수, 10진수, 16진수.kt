import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val x=readLine()
    if(x[0]=='0'&&x[1]=='x'){
        var n=x.substring(2,x.length)
        print(Integer.parseInt(n,16))
    }
    else if(x[0]=='0'){
        var n=x.substring(1,x.length)
        print(Integer.parseInt(n,8))
    }
    else
        print(x)
}