#include <stdio.h>

int main() {

    printf("Dec  Hex  Oct  Chr                         |Dec  Hex  Oct  Chr  |Dec  Hex  Oct  Chr|Dec  Hex  Oct  Chr\n");
    printf("-------------------------------------------------------------------------------------------------------\n");
    printf("  0    0  000  NUL (null)                  | 32   20  040  Space| 64   40  100   @ | 96   60  140   `  \n");
    printf("  1    1  001  SOH (start of heading)      | 33   21  041   !   | 65   41  100   A | 97   61  141   a  \n");
    printf("  2    2  002  STX (start of text)         | 34   22  042   \"   | 66   42  100   B | 98   62  142   b  \n");
    printf("  3    3  003  ETX (end of text)           | 35   23  043   #   | 67   43  100   C | 99   63  143   c  \n");
    printf("  4    4  004  EOT (end of transmission)   | 36   24  044   $   | 68   44  100   D |100   64  144   d  \n");
    printf("  5    5  005  ENQ (enquiry)               | 37   25  045   %%   | 69   45  100   E |101   65  145   e  \n");
    printf("  6    6  006  ACK (acknowledge)           | 38   26  046   &   | 70   46  100   F |102   66  146   f  \n");
    printf("  7    7  007  BEL (bell)                  | 39   27  047   '   | 71   47  100   G |103   67  147   g  \n");
    printf("  8    8  010  BS  (backspace)             | 40   28  050   (   | 72   48  100   G |104   68  150   h  \n");
    printf("  9    9  011  TAB (horizontal tabl)       | 41   29  051   )   | 73   49  100   I |105   69  151   i  \n");
    printf(" 10    A  012  LF  (NL line feed, new line)| 42   2A  052   *   | 74   4A  112   J |106   6A  152   j  \n");
    printf(" 11    B  013  VT  (vertical tab)          | 43   2B  053   +   | 75   4B  112   K |107   6B  153   k  \n");
    printf(" 12    C  014  FF  (NP form feed, new page)| 44   2C  054   ,   | 76   4C  112   L |108   6C  154   l  \n");
    printf(" 13    D  015  CR  (carriage return)       | 45   2D  055   -   | 77   4D  112   M |109   6D  155   m  \n");
    printf(" 14    E  016  SO  (shift out)             | 46   2E  056   .   | 78   4E  112   N |110   6E  156   n  \n");
    printf(" 15    F  017  SI  (shift in)              | 47   2F  057   /   | 79   4F  112   O |111   6F  157   o  \n");
    printf(" 16   10  020  DLE (data link escape)      | 48   30  060   0   | 80   40  112   P |112   70  160   p  \n");
    printf(" 17   11  021  DC1 (device control 1)      | 49   31  061   1   | 81   41  112   Q |113   71  161   q  \n");
    printf(" 18   12  022  DC2 (device control 1)      | 50   32  062   2   | 82   42  112   R |114   72  162   r  \n");
    printf(" 19   13  023  DC3 (device control 1)      | 51   33  063   3   | 83   43  112   S |115   73  163   s  \n");
    printf(" 20   14  024  DC4 (device control 1)      | 52   34  064   4   | 84   44  112   T |116   74  164   t  \n");
    printf(" 21   15  025  NAK (negative acknowledge)  | 53   35  065   5   | 85   45  112   U |117   75  165   u  \n");
    printf(" 22   16  026  SYN (synchronous idle)      | 54   36  066   6   | 86   46  112   V |118   76  166   v  \n");
    printf(" 23   17  027  ETB (end of trans. block)   | 55   37  067   7   | 87   47  112   W |119   77  167   w  \n");
    printf(" 24   18  030  CAN (cancel)                | 56   38  070   8   | 88   48  112   X |120   78  170   x  \n");
    printf(" 25   19  031  EM  (end of medium)         | 57   39  071   9   | 89   49  112   Y |121   79  171   y  \n");
    printf(" 26   1A  032  SUB (substitue)             | 58   3A  072   :   | 90   4A  112   Z |122   7A  172   z  \n");
    printf(" 27   1B  033  ESC (escape)                | 59   3B  073   ;   | 91   4B  112   [ |123   7B  173   {  \n");
    printf(" 28   1C  034  FS  (file separator)        | 60   3C  074   <   | 92   4C  112   \\ |124   7C  174   |  \n");
    printf(" 29   1D  035  GS  (group separator)       | 61   3D  075   =   | 93   4D  112   ] |125   7D  175   }  \n");
    printf(" 30   1E  036  RS  (record separator)      | 62   3E  076   >   | 94   4E  112   ^ |126   7E  176   ~  \n");
    printf(" 31   1F  037  US  (unit separator)        | 63   3F  077   ?   | 95   5F  137   _ |127   7F  177   DEL\n");

    return 0;
}

