char* timeConversion(char* s) {
    char* result = malloc(9 * sizeof(char));
    char periodoDoDia[3];
    
    
    periodoDoDia[0] = s[8];
    periodoDoDia[1] = s[9];
    periodoDoDia[2] = '\0';
    
    int hora;
    int minutos;
    int segundos;
    
    hora = ((s[0] - '0')*10) + (s[1] - '0');
    minutos = ((s[3] - '0')*10) + (s[4] - '0');
    segundos = ((s[6] - '0')*10) + (s[7] - '0');
    
    if  (strcmp(periodoDoDia, "AM") == 0) {
        if (hora == 12) {
        hora = 00;
        }
    }
    if (strcmp(periodoDoDia, "PM") == 0) {
        if (hora != 12) {
        hora = hora + 12;
        }
    }
    sprintf(result,"%02d:%02d:%02d",hora,minutos,segundos);
    return result;
    
}