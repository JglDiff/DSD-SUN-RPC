union calc_res switch (int errnum) {
    case 0:
      double res; /* sin error: listado del directorio */
    default:
      void;          /* con error: nada                   */
  };

program CALCBIN{
    version PRIMERA{
        calc_res BIN(double,char,double) = 1;
    } = 1;
} = 0x20000001;

program CALCUN{
    version PRIMERA{
        calc_res UN(char, double) = 1;
    } = 1;
} = 0x20000002;




