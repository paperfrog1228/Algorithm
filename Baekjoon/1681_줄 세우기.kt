import java.io.*
fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val (n,l)=readLine().split(' ').map { it.toInt() }
    var c=0
    var a=0
    while(c<n){
        a+=1
        if(a.toString().contains(l.toString()))
            continue
        c+=1
    }
    print(a)
}