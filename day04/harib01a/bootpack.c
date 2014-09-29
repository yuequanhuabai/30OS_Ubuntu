
void _io_hlt(void);
void _write_mem8(int addr, int data);

void HariMain(void)
{
  int i;

  for(i = 0xa0000; i <= 0xaffff; i++) {
    _wirte_mem8(i, 15);
  }

  for(;;){
    _io_hlt();
  }
}
