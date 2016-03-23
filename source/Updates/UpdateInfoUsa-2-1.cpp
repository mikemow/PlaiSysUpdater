//
// Created by cpasjuste on 11/01/16.
//

#include "UpdateInfoUsa-2-1.h"

UpdateInfoUsa21::UpdateInfoUsa21(int deviceType) {

    this->region = "USA";
    this->version = "2.1.0-4";

    if(deviceType == 2  || deviceType == 4) {

        this->model = "n3DS";

        items.push_back(UpdateItem("6C7CC287E275685B55A93163877E8D3B", "/updates/0004001000021000.cia"));
        items.push_back(UpdateItem("6982CA66D12082926E10389320C47D67", "/updates/0004001000021100.cia"));
        items.push_back(UpdateItem("4035240C03D338A5AB8A56B362021F3D", "/updates/0004001000021200.cia"));
        items.push_back(UpdateItem("852658F8F0DC9433BFAFD8D75BD2124E", "/updates/0004001000021300.cia"));
        items.push_back(UpdateItem("C7F03403D433EE3C61DE8058425F2B49", "/updates/0004001000021400.cia"));
        items.push_back(UpdateItem("492D5EB92842F69AB06A85FBCF9557BF", "/updates/0004001000021500.cia"));
        items.push_back(UpdateItem("9A2EBA16C191BCD441C68575ADA89CE1", "/updates/0004001000021700.cia"));
        items.push_back(UpdateItem("ABA2D55DCA45B385891D83DFEFCAD214", "/updates/0004001000021900.cia"));
        items.push_back(UpdateItem("97A352CDB0D8A7ABFB6F88F8CA1B16C6", "/updates/0004001000021A00.cia"));
        items.push_back(UpdateItem("399844E76B67EC55F4EBF7D292C9A5E7", "/updates/0004001000021B00.cia"));
        items.push_back(UpdateItem("FCDC2B0C3970F7FDD43BE1423AF87102", "/updates/0004001000021D00.cia"));
        items.push_back(UpdateItem("E0AE6172D77BEA6F994B0C225DE51C50", "/updates/0004001000021E00.cia"));
        items.push_back(UpdateItem("204B98384131DA64DA401B41849752DF", "/updates/0004001000021F00.cia"));
        items.push_back(UpdateItem("2BF41B5290AF22CF8D51D92D2FDCC973", "/updates/0004001000024000.cia"));
        items.push_back(UpdateItem("E8CAE7DD5C8C4D5A7D453F1A1E806AB1", "/updates/0004001B00010002.cia"));
        items.push_back(UpdateItem("BB801599797B606F7E06FF135A3F41DE", "/updates/0004003000008A02.cia"));
        items.push_back(UpdateItem("4302C1686DA2314EE370BE48FBB8BA97", "/updates/0004003000008A03.cia"));
        items.push_back(UpdateItem("1AC2A457D2C3BCB2BA96C5BDBBD33E25", "/updates/0004003000008F02.cia"));
        items.push_back(UpdateItem("59C5EF92FAD1F9393B11531E755CAC56", "/updates/0004003000009002.cia"));
        items.push_back(UpdateItem("3E921F659BE7E5B1DA54D6B74F18C1E1", "/updates/0004003000009202.cia"));
        items.push_back(UpdateItem("2100CE9D72CC1EBF446D6E539F171AB7", "/updates/0004003000009302.cia"));
        items.push_back(UpdateItem("EE689D90F71A445DF11E8795013E6FD8", "/updates/0004003000009402.cia"));
        items.push_back(UpdateItem("E68A55D776A1C1AE296FD1AD72347D89", "/updates/0004003000009602.cia"));
        items.push_back(UpdateItem("D052602F67872008184B43B6925D36E3", "/updates/0004003000009702.cia"));
        items.push_back(UpdateItem("48DFAD4D2A5370A4C61054106110DD63", "/updates/000400300000C502.cia"));
        items.push_back(UpdateItem("6E06F9F68B216866DE6110883FD5B6AF", "/updates/000400300000C503.cia"));
        items.push_back(UpdateItem("B4B2F1626330FBF4FDC36706EB5D8178", "/updates/000400300000C802.cia"));
        items.push_back(UpdateItem("9E301E8BF640D5CD2AF1456AF05ABE82", "/updates/000400300000C803.cia"));
        items.push_back(UpdateItem("2AC7CD845AB4BE745C7E7166AE67155D", "/updates/000400300000C902.cia"));
        items.push_back(UpdateItem("23F7B4B03C2E298976F2F32EA666DD6E", "/updates/000400300000CB02.cia"));
        items.push_back(UpdateItem("0DAA6D1633ED645BAB786C56B8C0C8B8", "/updates/000400300000CC02.cia"));
        items.push_back(UpdateItem("B36876609C4362AE28211C0C3DA46045", "/updates/0004009B00010202.cia"));
        items.push_back(UpdateItem("86377211D8425336D87E0233C47E74BC", "/updates/0004009B00010402.cia"));
        items.push_back(UpdateItem("6D7673C8487DC231002F1DDC6EE79BF3", "/updates/0004009B00010602.cia"));
        items.push_back(UpdateItem("2B01FA9E03AE3501650888601E595185", "/updates/0004009B00011402.cia"));
        items.push_back(UpdateItem("5BA95BEC565DD58FB5142E136A40D710", "/updates/0004009B00011602.cia"));
        items.push_back(UpdateItem("039260BC53AB2A6FF11F3725501A1446", "/updates/0004009B00011D02.cia"));
        items.push_back(UpdateItem("C2A3E5EA45D75B76C057400F1612B779", "/updates/0004009B00011E02.cia"));
        items.push_back(UpdateItem("D60BB083705695A05CF8E111069EE0C6", "/updates/0004009B00012302.cia"));
        items.push_back(UpdateItem("B82DC21B3C7CDBAEB82F0F4DDAD43259", "/updates/0004009B00013302.cia"));
        items.push_back(UpdateItem("7970C352474532E7B1738E9988B5F09A", "/updates/0004009B00014002.cia"));
        items.push_back(UpdateItem("C11CCD5C2045BFD8785F05AC7B63EAC5", "/updates/0004009B00014102.cia"));
        items.push_back(UpdateItem("B47DFA2283CB3ECE2B65E39D23CACC2A", "/updates/0004009B00014202.cia"));
        items.push_back(UpdateItem("35426B2868AD37C5AA70B269756D1D38", "/updates/0004009B00014302.cia"));
        items.push_back(UpdateItem("EFB44F93F4053040B45848F93E338F14", "/updates/0004009B00015302.cia"));
        items.push_back(UpdateItem("19F63A2994A8B140D2E05E2E29246E9A", "/updates/000400DB00010302.cia"));
        items.push_back(UpdateItem("D3BC5134A0D81096EC98156CD9FADDEF", "/updates/000400DB00010502.cia"));
        items.push_back(UpdateItem("3F8279E513EA58F987DE0437A7E73476", "/updates/000400DB00016302.cia"));
        items.push_back(UpdateItem("01B323BE440583FA3FCB9A6C299C34D7", "/updates/000400DB00017302.cia"));
        items.push_back(UpdateItem("1B47F3425ABD5C7B6C520CC2457521AC", "/updates/0004013000001502.cia"));
        items.push_back(UpdateItem("69D36484AD3B32EA6179CBE00423B937", "/updates/0004013000001503.cia"));
        items.push_back(UpdateItem("C51856EC56A1521965813293ABA7B8AB", "/updates/0004013000001602.cia"));
        items.push_back(UpdateItem("445D1A888D992A20AAA0BDD7882446F0", "/updates/0004013000001702.cia"));
        items.push_back(UpdateItem("D091987ACD5BFEB60778E1A1F36AC07D", "/updates/0004013000001703.cia"));
        items.push_back(UpdateItem("07E6545BA8961509EA24B97A20A19D06", "/updates/0004013000001802.cia"));
        items.push_back(UpdateItem("7D9B40BDFDB0E21CB920DF026C560C3F", "/updates/0004013000001803.cia"));
        items.push_back(UpdateItem("648EC2148FAA77DBDA1F0C56DFA83329", "/updates/0004013000001A02.cia"));
        items.push_back(UpdateItem("94CD6BB6EFB2CE35F279FA5C3AF0F4CA", "/updates/0004013000001A03.cia"));
        items.push_back(UpdateItem("B0BEFB8D1000FD0D39347A365FC9AAF8", "/updates/0004013000001B02.cia"));
        items.push_back(UpdateItem("9FB5C904CAD65A87FB6720BF4730AF8B", "/updates/0004013000001B03.cia"));
        items.push_back(UpdateItem("3F9836DE937D195EAAB058712284A8CC", "/updates/0004013000001C02.cia"));
        items.push_back(UpdateItem("1CD5C8BB84097198EE83B832B14CCC99", "/updates/0004013000001C03.cia"));
        items.push_back(UpdateItem("59778C9884A7BC20921614AEC0F95DB9", "/updates/0004013000001D02.cia"));
        items.push_back(UpdateItem("6E4DC80CBF34824B584208B57C97D3CC", "/updates/0004013000001D03.cia"));
        items.push_back(UpdateItem("E2CEF3EB4E4D74713828E75914D32A35", "/updates/0004013000001E02.cia"));
        items.push_back(UpdateItem("5B41FFC08DAC696AA7BDDE15485F9067", "/updates/0004013000001E03.cia"));
        items.push_back(UpdateItem("01718E0D787853AF02C6232165A97D7E", "/updates/0004013000001F02.cia"));
        items.push_back(UpdateItem("9C98936D8BA02DB18FEA0A4CFE203220", "/updates/0004013000001F03.cia"));
        items.push_back(UpdateItem("C0F8D036B0FE7457470A194B9D9EADED", "/updates/0004013000002002.cia"));
        items.push_back(UpdateItem("111BBD681F0950206A9FCC21E25BAB89", "/updates/0004013000002102.cia"));
        items.push_back(UpdateItem("22DB18022CD83F0696BB8EC594EB9958", "/updates/0004013000002103.cia"));
        items.push_back(UpdateItem("28F07576789B44713BB646E5B04F2FFD", "/updates/0004013000002202.cia"));
        items.push_back(UpdateItem("370090EF93B810585F20D6FB57EC6D9D", "/updates/0004013000002203.cia"));
        items.push_back(UpdateItem("B3527B5626AFAF2F265916CFB010DA5D", "/updates/0004013000002302.cia"));
        items.push_back(UpdateItem("88E8D05C03C8ABE7F90488FFCDC4542C", "/updates/0004013000002303.cia"));
        items.push_back(UpdateItem("4F9F66934955A7ADBD93E97EDADC1BB5", "/updates/0004013000002402.cia"));
        items.push_back(UpdateItem("51FDB8536EB83762B4DD57800CDE08A0", "/updates/0004013000002403.cia"));
        items.push_back(UpdateItem("49BDAB680C5EF513FD1CE51628C799BA", "/updates/0004013000002602.cia"));
        items.push_back(UpdateItem("7309A0B3377BA1369B5ED88E0814307C", "/updates/0004013000002702.cia"));
        items.push_back(UpdateItem("F4992A20462A4A41AEF37D897AEA9B08", "/updates/0004013000002703.cia"));
        items.push_back(UpdateItem("A3F0BD4280F0AE7CFA3CF6747F9DB3C7", "/updates/0004013000002802.cia"));
        items.push_back(UpdateItem("BD042AEDF12EBA60471276E7EA9C3AEE", "/updates/0004013000002902.cia"));
        items.push_back(UpdateItem("FCA89DDC17E3E892516B0F81B8958743", "/updates/0004013000002903.cia"));
        items.push_back(UpdateItem("56DF1365F74AB590E01998B59B8F3D6E", "/updates/0004013000002A02.cia"));
        items.push_back(UpdateItem("65B0A9AE7D7B27BDEEBB6433B6B838F4", "/updates/0004013000002A03.cia"));
        items.push_back(UpdateItem("AA084ADE84FBA71754D2F400080461E4", "/updates/0004013000002B02.cia"));
        items.push_back(UpdateItem("076F92EAB88AA7FE8B15CE214B3DC9D7", "/updates/0004013000002C02.cia"));
        items.push_back(UpdateItem("0616E72CCC3132A6B78BCA6356CAAFC5", "/updates/0004013000002C03.cia"));
        items.push_back(UpdateItem("8B8B762282FA11064DBBDF62C955B5D7", "/updates/0004013000002D02.cia"));
        items.push_back(UpdateItem("E4241DB05B381A418C9946CCB6544880", "/updates/0004013000002D03.cia"));
        items.push_back(UpdateItem("64B50BE151513052186A6E9B5D33E09E", "/updates/0004013000002E02.cia"));
        items.push_back(UpdateItem("14F24E1BA6F840680CA4FA7D9B69B6F1", "/updates/0004013000002E03.cia"));
        items.push_back(UpdateItem("A1634C4EBDE169C55C976670899A5792", "/updates/0004013000002F02.cia"));
        items.push_back(UpdateItem("14D067ECB8FA9180E59EE839A1FB83B0", "/updates/0004013000002F03.cia"));
        items.push_back(UpdateItem("8288B9DFFD5094A15EA30B572ED3514E", "/updates/0004013000003102.cia"));
        items.push_back(UpdateItem("D85788AEFB07B6C07B1DA9B84EE017B1", "/updates/0004013000003103.cia"));
        items.push_back(UpdateItem("152DC04C6818B7015080FED4FF764996", "/updates/0004013000003202.cia"));
        items.push_back(UpdateItem("69E1981ACEA2949DA61EC2612EF5A6C8", "/updates/0004013000003203.cia"));
        items.push_back(UpdateItem("77BC88BF4920AB2A3374DAE426F95DA4", "/updates/0004013000003302.cia"));
        items.push_back(UpdateItem("59050620268E9409D8678AB04B366288", "/updates/0004013000003303.cia"));
        items.push_back(UpdateItem("8677D5ABB45DD8DC6363084A0D122355", "/updates/0004013000003402.cia"));
        items.push_back(UpdateItem("91C5EE12C288575E1BEDBA509B241EB7", "/updates/0004013000003502.cia"));
        items.push_back(UpdateItem("3FAC9782CC5BF6C53059EDD6BE4F0F97", "/updates/0004013000003702.cia"));
        items.push_back(UpdateItem("5BCAEBCB270EE7DAE91031D64F8D1313", "/updates/0004013000008002.cia"));
        items.push_back(UpdateItem("A020ED9D40DD8B592551CE98EDEFAC9F", "/updates/0004013000008003.cia"));
        items.push_back(UpdateItem("0C87B77FFD56A21C09EFE8E510966D17", "/updates/0004013800000002.cia"));
        items.push_back(UpdateItem("CBE759D0FE2407E821CF16ACF00D012D", "/updates/0004013800000003.cia"));
        items.push_back(UpdateItem("066A5CE2DB86494A078B4820A0D94A9B", "/updates/0004013800000102.cia"));
        items.push_back(UpdateItem("19D1B2369C1DE20EE46C12D7F1F7677B", "/updates/0004800542383841.cia"));
        items.push_back(UpdateItem("488F4EC7D3686042DE8D3537D24F8EC1", "/updates/00048005484E4441.cia"));
        items.push_back(UpdateItem("E639DFC1F1B6BE51A6467B0E2E281E54", "/updates/0004800F484E4841.cia"));
        items.push_back(UpdateItem("19208AD79EC6C262573448E10A754E5E", "/updates/0004800F484E4C41.cia"));

    } else {

        this->model = "o3DS";

        items.push_back(UpdateItem("6C7CC287E275685B55A93163877E8D3B", "/updates/0004001000021000.cia"));
        items.push_back(UpdateItem("6982CA66D12082926E10389320C47D67", "/updates/0004001000021100.cia"));
        items.push_back(UpdateItem("4035240C03D338A5AB8A56B362021F3D", "/updates/0004001000021200.cia"));
        items.push_back(UpdateItem("852658F8F0DC9433BFAFD8D75BD2124E", "/updates/0004001000021300.cia"));
        items.push_back(UpdateItem("C7F03403D433EE3C61DE8058425F2B49", "/updates/0004001000021400.cia"));
        items.push_back(UpdateItem("492D5EB92842F69AB06A85FBCF9557BF", "/updates/0004001000021500.cia"));
        items.push_back(UpdateItem("9A2EBA16C191BCD441C68575ADA89CE1", "/updates/0004001000021700.cia"));
        items.push_back(UpdateItem("ABA2D55DCA45B385891D83DFEFCAD214", "/updates/0004001000021900.cia"));
        items.push_back(UpdateItem("97A352CDB0D8A7ABFB6F88F8CA1B16C6", "/updates/0004001000021A00.cia"));
        items.push_back(UpdateItem("399844E76B67EC55F4EBF7D292C9A5E7", "/updates/0004001000021B00.cia"));
        items.push_back(UpdateItem("FCDC2B0C3970F7FDD43BE1423AF87102", "/updates/0004001000021D00.cia"));
        items.push_back(UpdateItem("E0AE6172D77BEA6F994B0C225DE51C50", "/updates/0004001000021E00.cia"));
        items.push_back(UpdateItem("204B98384131DA64DA401B41849752DF", "/updates/0004001000021F00.cia"));
        items.push_back(UpdateItem("2BF41B5290AF22CF8D51D92D2FDCC973", "/updates/0004001000024000.cia"));
        items.push_back(UpdateItem("E8CAE7DD5C8C4D5A7D453F1A1E806AB1", "/updates/0004001B00010002.cia"));
        items.push_back(UpdateItem("BB801599797B606F7E06FF135A3F41DE", "/updates/0004003000008A02.cia"));
        items.push_back(UpdateItem("4302C1686DA2314EE370BE48FBB8BA97", "/updates/0004003000008A03.cia"));
        items.push_back(UpdateItem("1AC2A457D2C3BCB2BA96C5BDBBD33E25", "/updates/0004003000008F02.cia"));
        items.push_back(UpdateItem("59C5EF92FAD1F9393B11531E755CAC56", "/updates/0004003000009002.cia"));
        items.push_back(UpdateItem("3E921F659BE7E5B1DA54D6B74F18C1E1", "/updates/0004003000009202.cia"));
        items.push_back(UpdateItem("2100CE9D72CC1EBF446D6E539F171AB7", "/updates/0004003000009302.cia"));
        items.push_back(UpdateItem("EE689D90F71A445DF11E8795013E6FD8", "/updates/0004003000009402.cia"));
        items.push_back(UpdateItem("E68A55D776A1C1AE296FD1AD72347D89", "/updates/0004003000009602.cia"));
        items.push_back(UpdateItem("D052602F67872008184B43B6925D36E3", "/updates/0004003000009702.cia"));
        items.push_back(UpdateItem("48DFAD4D2A5370A4C61054106110DD63", "/updates/000400300000C502.cia"));
        items.push_back(UpdateItem("6E06F9F68B216866DE6110883FD5B6AF", "/updates/000400300000C503.cia"));
        items.push_back(UpdateItem("B4B2F1626330FBF4FDC36706EB5D8178", "/updates/000400300000C802.cia"));
        items.push_back(UpdateItem("9E301E8BF640D5CD2AF1456AF05ABE82", "/updates/000400300000C803.cia"));
        items.push_back(UpdateItem("2AC7CD845AB4BE745C7E7166AE67155D", "/updates/000400300000C902.cia"));
        items.push_back(UpdateItem("23F7B4B03C2E298976F2F32EA666DD6E", "/updates/000400300000CB02.cia"));
        items.push_back(UpdateItem("0DAA6D1633ED645BAB786C56B8C0C8B8", "/updates/000400300000CC02.cia"));
        items.push_back(UpdateItem("B36876609C4362AE28211C0C3DA46045", "/updates/0004009B00010202.cia"));
        items.push_back(UpdateItem("86377211D8425336D87E0233C47E74BC", "/updates/0004009B00010402.cia"));
        items.push_back(UpdateItem("6D7673C8487DC231002F1DDC6EE79BF3", "/updates/0004009B00010602.cia"));
        items.push_back(UpdateItem("2B01FA9E03AE3501650888601E595185", "/updates/0004009B00011402.cia"));
        items.push_back(UpdateItem("5BA95BEC565DD58FB5142E136A40D710", "/updates/0004009B00011602.cia"));
        items.push_back(UpdateItem("039260BC53AB2A6FF11F3725501A1446", "/updates/0004009B00011D02.cia"));
        items.push_back(UpdateItem("C2A3E5EA45D75B76C057400F1612B779", "/updates/0004009B00011E02.cia"));
        items.push_back(UpdateItem("D60BB083705695A05CF8E111069EE0C6", "/updates/0004009B00012302.cia"));
        items.push_back(UpdateItem("B82DC21B3C7CDBAEB82F0F4DDAD43259", "/updates/0004009B00013302.cia"));
        items.push_back(UpdateItem("7970C352474532E7B1738E9988B5F09A", "/updates/0004009B00014002.cia"));
        items.push_back(UpdateItem("C11CCD5C2045BFD8785F05AC7B63EAC5", "/updates/0004009B00014102.cia"));
        items.push_back(UpdateItem("B47DFA2283CB3ECE2B65E39D23CACC2A", "/updates/0004009B00014202.cia"));
        items.push_back(UpdateItem("35426B2868AD37C5AA70B269756D1D38", "/updates/0004009B00014302.cia"));
        items.push_back(UpdateItem("EFB44F93F4053040B45848F93E338F14", "/updates/0004009B00015302.cia"));
        items.push_back(UpdateItem("19F63A2994A8B140D2E05E2E29246E9A", "/updates/000400DB00010302.cia"));
        items.push_back(UpdateItem("D3BC5134A0D81096EC98156CD9FADDEF", "/updates/000400DB00010502.cia"));
        items.push_back(UpdateItem("3F8279E513EA58F987DE0437A7E73476", "/updates/000400DB00016302.cia"));
        items.push_back(UpdateItem("01B323BE440583FA3FCB9A6C299C34D7", "/updates/000400DB00017302.cia"));
        items.push_back(UpdateItem("1B47F3425ABD5C7B6C520CC2457521AC", "/updates/0004013000001502.cia"));
        items.push_back(UpdateItem("69D36484AD3B32EA6179CBE00423B937", "/updates/0004013000001503.cia"));
        items.push_back(UpdateItem("C51856EC56A1521965813293ABA7B8AB", "/updates/0004013000001602.cia"));
        items.push_back(UpdateItem("445D1A888D992A20AAA0BDD7882446F0", "/updates/0004013000001702.cia"));
        items.push_back(UpdateItem("D091987ACD5BFEB60778E1A1F36AC07D", "/updates/0004013000001703.cia"));
        items.push_back(UpdateItem("07E6545BA8961509EA24B97A20A19D06", "/updates/0004013000001802.cia"));
        items.push_back(UpdateItem("7D9B40BDFDB0E21CB920DF026C560C3F", "/updates/0004013000001803.cia"));
        items.push_back(UpdateItem("648EC2148FAA77DBDA1F0C56DFA83329", "/updates/0004013000001A02.cia"));
        items.push_back(UpdateItem("94CD6BB6EFB2CE35F279FA5C3AF0F4CA", "/updates/0004013000001A03.cia"));
        items.push_back(UpdateItem("B0BEFB8D1000FD0D39347A365FC9AAF8", "/updates/0004013000001B02.cia"));
        items.push_back(UpdateItem("9FB5C904CAD65A87FB6720BF4730AF8B", "/updates/0004013000001B03.cia"));
        items.push_back(UpdateItem("3F9836DE937D195EAAB058712284A8CC", "/updates/0004013000001C02.cia"));
        items.push_back(UpdateItem("1CD5C8BB84097198EE83B832B14CCC99", "/updates/0004013000001C03.cia"));
        items.push_back(UpdateItem("59778C9884A7BC20921614AEC0F95DB9", "/updates/0004013000001D02.cia"));
        items.push_back(UpdateItem("6E4DC80CBF34824B584208B57C97D3CC", "/updates/0004013000001D03.cia"));
        items.push_back(UpdateItem("E2CEF3EB4E4D74713828E75914D32A35", "/updates/0004013000001E02.cia"));
        items.push_back(UpdateItem("5B41FFC08DAC696AA7BDDE15485F9067", "/updates/0004013000001E03.cia"));
        items.push_back(UpdateItem("01718E0D787853AF02C6232165A97D7E", "/updates/0004013000001F02.cia"));
        items.push_back(UpdateItem("9C98936D8BA02DB18FEA0A4CFE203220", "/updates/0004013000001F03.cia"));
        items.push_back(UpdateItem("C0F8D036B0FE7457470A194B9D9EADED", "/updates/0004013000002002.cia"));
        items.push_back(UpdateItem("111BBD681F0950206A9FCC21E25BAB89", "/updates/0004013000002102.cia"));
        items.push_back(UpdateItem("22DB18022CD83F0696BB8EC594EB9958", "/updates/0004013000002103.cia"));
        items.push_back(UpdateItem("28F07576789B44713BB646E5B04F2FFD", "/updates/0004013000002202.cia"));
        items.push_back(UpdateItem("370090EF93B810585F20D6FB57EC6D9D", "/updates/0004013000002203.cia"));
        items.push_back(UpdateItem("B3527B5626AFAF2F265916CFB010DA5D", "/updates/0004013000002302.cia"));
        items.push_back(UpdateItem("88E8D05C03C8ABE7F90488FFCDC4542C", "/updates/0004013000002303.cia"));
        items.push_back(UpdateItem("4F9F66934955A7ADBD93E97EDADC1BB5", "/updates/0004013000002402.cia"));
        items.push_back(UpdateItem("51FDB8536EB83762B4DD57800CDE08A0", "/updates/0004013000002403.cia"));
        items.push_back(UpdateItem("49BDAB680C5EF513FD1CE51628C799BA", "/updates/0004013000002602.cia"));
        items.push_back(UpdateItem("7309A0B3377BA1369B5ED88E0814307C", "/updates/0004013000002702.cia"));
        items.push_back(UpdateItem("F4992A20462A4A41AEF37D897AEA9B08", "/updates/0004013000002703.cia"));
        items.push_back(UpdateItem("A3F0BD4280F0AE7CFA3CF6747F9DB3C7", "/updates/0004013000002802.cia"));
        items.push_back(UpdateItem("BD042AEDF12EBA60471276E7EA9C3AEE", "/updates/0004013000002902.cia"));
        items.push_back(UpdateItem("FCA89DDC17E3E892516B0F81B8958743", "/updates/0004013000002903.cia"));
        items.push_back(UpdateItem("56DF1365F74AB590E01998B59B8F3D6E", "/updates/0004013000002A02.cia"));
        items.push_back(UpdateItem("65B0A9AE7D7B27BDEEBB6433B6B838F4", "/updates/0004013000002A03.cia"));
        items.push_back(UpdateItem("AA084ADE84FBA71754D2F400080461E4", "/updates/0004013000002B02.cia"));
        items.push_back(UpdateItem("076F92EAB88AA7FE8B15CE214B3DC9D7", "/updates/0004013000002C02.cia"));
        items.push_back(UpdateItem("0616E72CCC3132A6B78BCA6356CAAFC5", "/updates/0004013000002C03.cia"));
        items.push_back(UpdateItem("8B8B762282FA11064DBBDF62C955B5D7", "/updates/0004013000002D02.cia"));
        items.push_back(UpdateItem("E4241DB05B381A418C9946CCB6544880", "/updates/0004013000002D03.cia"));
        items.push_back(UpdateItem("64B50BE151513052186A6E9B5D33E09E", "/updates/0004013000002E02.cia"));
        items.push_back(UpdateItem("14F24E1BA6F840680CA4FA7D9B69B6F1", "/updates/0004013000002E03.cia"));
        items.push_back(UpdateItem("A1634C4EBDE169C55C976670899A5792", "/updates/0004013000002F02.cia"));
        items.push_back(UpdateItem("14D067ECB8FA9180E59EE839A1FB83B0", "/updates/0004013000002F03.cia"));
        items.push_back(UpdateItem("8288B9DFFD5094A15EA30B572ED3514E", "/updates/0004013000003102.cia"));
        items.push_back(UpdateItem("D85788AEFB07B6C07B1DA9B84EE017B1", "/updates/0004013000003103.cia"));
        items.push_back(UpdateItem("152DC04C6818B7015080FED4FF764996", "/updates/0004013000003202.cia"));
        items.push_back(UpdateItem("69E1981ACEA2949DA61EC2612EF5A6C8", "/updates/0004013000003203.cia"));
        items.push_back(UpdateItem("77BC88BF4920AB2A3374DAE426F95DA4", "/updates/0004013000003302.cia"));
        items.push_back(UpdateItem("59050620268E9409D8678AB04B366288", "/updates/0004013000003303.cia"));
        items.push_back(UpdateItem("8677D5ABB45DD8DC6363084A0D122355", "/updates/0004013000003402.cia"));
        items.push_back(UpdateItem("91C5EE12C288575E1BEDBA509B241EB7", "/updates/0004013000003502.cia"));
        items.push_back(UpdateItem("3FAC9782CC5BF6C53059EDD6BE4F0F97", "/updates/0004013000003702.cia"));
        items.push_back(UpdateItem("5BCAEBCB270EE7DAE91031D64F8D1313", "/updates/0004013000008002.cia"));
        items.push_back(UpdateItem("A020ED9D40DD8B592551CE98EDEFAC9F", "/updates/0004013000008003.cia"));
        items.push_back(UpdateItem("0C87B77FFD56A21C09EFE8E510966D17", "/updates/0004013800000002.cia"));
        items.push_back(UpdateItem("CBE759D0FE2407E821CF16ACF00D012D", "/updates/0004013800000003.cia"));
        items.push_back(UpdateItem("066A5CE2DB86494A078B4820A0D94A9B", "/updates/0004013800000102.cia"));
        items.push_back(UpdateItem("19D1B2369C1DE20EE46C12D7F1F7677B", "/updates/0004800542383841.cia"));
        items.push_back(UpdateItem("488F4EC7D3686042DE8D3537D24F8EC1", "/updates/00048005484E4441.cia"));
        items.push_back(UpdateItem("E639DFC1F1B6BE51A6467B0E2E281E54", "/updates/0004800F484E4841.cia"));
        items.push_back(UpdateItem("19208AD79EC6C262573448E10A754E5E", "/updates/0004800F484E4C41.cia"));
    }
}
