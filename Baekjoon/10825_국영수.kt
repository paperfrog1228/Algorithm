import java.io.*
class Student(val name:String,val a:Int, val b:Int,val c:Int)
fun main(args: Array<String>) = with (BufferedReader(InputStreamReader(System.`in`))) {
    val l:MutableList<Student> = ArrayList()
    var n=readLine().toInt()
    for (i in 1..n) {
        var (name,a,b,c)=readLine().split(' ')
        l.add(Student(name,a.toInt(),b.toInt(),c.toInt()))
    }
    var ans=l.sortedWith(compareByDescending(Student::a).
                    thenBy(Student::b).
                    thenByDescending(Student::c).
                    thenBy(Student::name))
    for (i in 0..ans.size-1)
        println(ans[i].name)
    // list.sortWith(compareBy({ -it.kor }, { it.eng }, { -it.math }, { it.name }))
    // 이거 개쩌네.. 
}