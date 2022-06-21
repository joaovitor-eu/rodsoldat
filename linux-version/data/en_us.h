void static en_us()
{
    system("sudo mkdir -p /mnt/device/ && sudo mount /dev/sdb1 /mnt/device/");
    system("clear");
    system("sudo mkdir -p /mnt/device/ && sudo mount /dev/sdc1 /mnt/device/");
    system("clear");
    system("echo l o a d i n g . . .");
    system("sudo cp -r ~/Downloads/ /mnt/device");
    system("clear");
}