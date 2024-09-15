def convertToIpv6(ipv4address):
    octets = ipv4address.split('.')
    if octets[0] == '127':
        print("::1")
        return
    hex_octets = [format(int(octet), '02X') for octet in octets]

    first_block = hex_octets[0] + hex_octets[1]
    second_block = hex_octets[2] + hex_octets[3]
    
    print(f"::FFFF:{first_block}:{second_block}")

convertToIpv6("192.168.10.92")