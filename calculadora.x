union calc_res switch (int errnum) {
    case 0:
      double res; /* sin error: listado del directorio */
    default:
      void;          /* con error: nada                   */
  };

program CALCSIMP{
    version SIMPLE{
        calc_res SUMA(double,char,double) = 1;
    } = 1;
} = 0x20000001;

program CALCTRIG{
    version SIMPLE{
        calc_res TRIG(char, double) = 1;
    } = 1;
} = 0x20000002;


