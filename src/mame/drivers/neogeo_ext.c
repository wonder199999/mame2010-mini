
ROM_START( kof97hfa )		/* kof97, hacked by FlanagAnagency */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "232-p1.p1", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "232-p2.sp2", 0x100000, 0x400000, NO_DUMP )

	NEO_SFIX_128K( "232-s1.s1", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "232-m1.m1", NO_DUMP )

	ROM_REGION( 0xc00000, "ymsnd", 0 )
	ROM_LOAD( "232-v1.v1", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD( "232-v2.v2", 0x400000, 0x400000, NO_DUMP )
	ROM_LOAD( "232-v3.v3", 0x800000, 0x400000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x2800000, "sprites", 0 )
	ROM_LOAD16_BYTE( "232-c1.c1", 0x0000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "232-c2.c2", 0x0000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "232-c3.c3", 0x1000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "232-c4.c4", 0x1000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "232-c5.c5", 0x2000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "232-c6.c6", 0x2000001, 0x400000, NO_DUMP )
ROM_END

ROM_START( ss2hfa )		/* samsho2, hacked by FlanagAnagency */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "063-p1.p1", 0x100000, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "063-s1.s1", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "063-m1.m1", NO_DUMP )

	ROM_REGION( 0x700000, "ymsnd", 0 )
	ROM_LOAD( "063-v1.v1", 0x000000, 0x200000, NO_DUMP )
	ROM_LOAD( "063-v2.v2", 0x200000, 0x200000, NO_DUMP )
	ROM_LOAD( "063-v3.v3", 0x400000, 0x200000, NO_DUMP )
	ROM_LOAD( "063-v4.v4", 0x600000, 0x100000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x1000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "063-c1.c1", 0x000000, 0x200000, NO_DUMP )
	ROM_LOAD16_BYTE( "063-c2.c2", 0x000001, 0x200000, NO_DUMP )
	ROM_LOAD16_BYTE( "063-c3.c3", 0x400000, 0x200000, NO_DUMP )
	ROM_LOAD16_BYTE( "063-c4.c4", 0x400001, 0x200000, NO_DUMP )
	ROM_LOAD16_BYTE( "063-c5.c5", 0x800000, 0x200000, NO_DUMP )
	ROM_LOAD16_BYTE( "063-c6.c6", 0x800001, 0x200000, NO_DUMP )
	ROM_LOAD16_BYTE( "063-c7.c7", 0xc00000, 0x200000, NO_DUMP )
	ROM_LOAD16_BYTE( "063-c8.c8", 0xc00001, 0x200000, NO_DUMP )
ROM_END

ROM_START( sokhfa )		/* ragnagrd, hacked by FlanagAnagency */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "218-p1.p1", 0x100000, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "218-s1.s1", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "218-m1.m1", NO_DUMP )

	ROM_REGION( 0x800000, "ymsnd", 0 )
	ROM_LOAD( "218-v1.v1", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD( "218-v2.v2", 0x400000, 0x400000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "218-c1.c1", 0x0000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "218-c2.c2", 0x0000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "218-c3.c3", 0x0800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "218-c4.c4", 0x0800001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "218-c5.c5", 0x1000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "218-c6.c6", 0x1000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "218-c7.c7", 0x1800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "218-c8.c8", 0x1800001, 0x400000, NO_DUMP )
ROM_END

ROM_START( crswd2bl )		/* Crossed Sword 2, bootleg of NGCD version */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "054-p1.p1", 0x100000, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "054-s1.s1", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "054-m1.m1", NO_DUMP )

	ROM_REGION( 0x200000, "ymsnd", 0 )
	ROM_LOAD( "054-v1.v1", 0x000000, 0x200000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x800000, "sprites", 0 )
	ROM_LOAD16_BYTE( "054-c1.c1", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "054-c2.c2", 0x000001, 0x400000, NO_DUMP )
ROM_END

ROM_START( 3countba )		/* 3 Count Bout / Fire Suplex (NGM-043) */
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "043-epr.ep1", 0x00000, 0x80000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "043-epr.ep2", 0x80000, 0x80000, NO_DUMP )

	NEO_SFIX_128K( "043-s1.bin", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "043-m1.bin", NO_DUMP )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "043-v1.bin", 0x000000, 0x200000, NO_DUMP )
	ROM_LOAD( "043-v2.bin", 0x200000, 0x200000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x0800000, "sprites", 0 )
	ROM_LOAD16_BYTE( "043-c1.bin", 0x000000, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x400000, 0x100000 )
	ROM_LOAD16_BYTE( "043-c2.bin", 0x000001, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x400001, 0x100000 )
	ROM_LOAD16_BYTE( "043-c3.bin", 0x200000, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x600000, 0x100000 )
	ROM_LOAD16_BYTE( "043-c4.bin", 0x200001, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x600001, 0x100000 )
ROM_END

ROM_START( fatfury2a )		/* Fatal Fury 2 (NGM-047) */
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "047-epr.ep1", 0x00000, 0x80000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "047-epr.ep2", 0x80000, 0x80000, NO_DUMP )

	NEO_SFIX_128K( "047-s1.bin", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "047-m1.bin", NO_DUMP )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "047-v1.bin", 0x000000, 0x200000, NO_DUMP )
	ROM_LOAD( "047-v2.bin", 0x200000, 0x200000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x0800000, "sprites", 0 )
	ROM_LOAD16_BYTE( "047-c1.bin", 0x000000, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x400000, 0x100000 )
	ROM_LOAD16_BYTE( "047-c2.bin", 0x000001, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x400001, 0x100000 )
	ROM_LOAD16_BYTE( "047-c3.bin", 0x200000, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x600000, 0x100000 )
	ROM_LOAD16_BYTE( "047-c4.bin", 0x200001, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x600001, 0x100000 )
ROM_END

ROM_START( fatfury3a )		/* Fatal Fury 3 (NGM-069) */
	ROM_REGION( 0x300000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "069-p1.bin", 0x00000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "069-sp2.bin", 0x100000, 0x200000, NO_DUMP )

	NEO_SFIX_128K( "069-s1.bin", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "069-m1.bin", NO_DUMP )

	ROM_REGION( 0xa00000, "ymsnd", 0 )
	ROM_LOAD( "069-v1.bin", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD( "069-v2.bin", 0x400000, 0x400000, NO_DUMP )
	ROM_LOAD( "069-v3.bin", 0x800000, 0x200000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x1400000, "sprites", 0 )
	ROM_LOAD16_BYTE( "069-c1.bin", 0x0000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "069-c2.bin", 0x0000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "069-c3.bin", 0x0800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "069-c4.bin", 0x0800001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "069-c5.bin", 0x1000000, 0x200000, NO_DUMP )
	ROM_LOAD16_BYTE( "069-c6.bin", 0x1000001, 0x200000, NO_DUMP )
ROM_END

ROM_START( alpham2p )		/* ASO II - Last Guardian / Alpha Mission II (prototype) */
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "007_p1_faac.p1", 0x000001, 0x080000, NO_DUMP )
	ROM_LOAD16_BYTE( "007_p2_1813.p2", 0x000000, 0x080000, NO_DUMP )

	NEO_SFIX_128K( "007_s1_36f1.s1", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "007_m1_9384.m1", NO_DUMP )

	ROM_REGION( 0x200000, "ymsnd", 0 )
	ROM_LOAD( "007_v11_1bb4.v11", 0x000000, 0x080000, NO_DUMP )
	ROM_LOAD( "007_v12_c8e8.v12", 0x080000, 0x080000, NO_DUMP )
	ROM_LOAD( "007_v13_09fa.v13", 0x100000, 0x080000, NO_DUMP )
	ROM_LOAD( "007_v21_28c2.v21", 0x180000, 0x080000, NO_DUMP )

	ROM_REGION( 0x80000, "ymsnd.deltat", 0 )
	ROM_COPY( "ymsnd", 0x180000, 0x00000, 0x080000 )

	ROM_REGION( 0x400000, "sprites", 0 )
	ROM_LOAD32_BYTE( "007_c1_210e.c11", 0x000000, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "007_c2_29ae.c12", 0x000002, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "007_c3_c873.c13", 0x000001, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "007_c4_2462.c14", 0x000003, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "007_c5_5f16.c15", 0x200000, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "007_c6_8abc.c16", 0x200002, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "007_c7_c983.c17", 0x200001, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "007_c8_b599.c18", 0x200003, 0x80000, NO_DUMP )
ROM_END

ROM_START( b2b )		/* Bang Bang Busters (2010 NCI release) */
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "071.p1", 0x00000, 0x80000, NO_DUMP )

	NEO_SFIX_128K( "071.s1", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "071.m1", NO_DUMP )

	ROM_REGION( 0x100000, "ymsnd", 0 )
	ROM_LOAD( "071.v1", 0x000000, 0x100000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x400000, "sprites", 0 )
	ROM_LOAD16_BYTE( "071.c1", 0x000000, 0x200000, NO_DUMP )
	ROM_LOAD16_BYTE( "071.c2", 0x000001, 0x200000, NO_DUMP )
ROM_END

ROM_START( bangbedp )		/* Bang Bead (prototype) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "259-p1.bin", 0x100000, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "259-s1p.bin", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "259-m1.bin", NO_DUMP )

	ROM_REGION( 0x500000, "ymsnd", 0 )
	ROM_LOAD( "259-v1p.bin", 0x000000, 0x200000, NO_DUMP )
	ROM_LOAD( "259-v2p.bin", 0x200000, 0x200000, NO_DUMP )
	ROM_LOAD( "259-v3p.bin", 0x400000, 0x100000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x600000, "sprites", 0 )
	ROM_LOAD16_BYTE( "259-c1p.bin", 0x000000, 0x200000, NO_DUMP )
	ROM_LOAD16_BYTE( "259-c2p.bin", 0x000001, 0x200000, NO_DUMP )
	ROM_LOAD16_BYTE( "259-c3p.bin", 0x400000, 0x100000, NO_DUMP )
	ROM_LOAD16_BYTE( "259-c4p.bin", 0x400001, 0x100000, NO_DUMP )
ROM_END

ROM_START( burningfp )		/* Burning Fight (prototype) */
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "018_p1_9397.p1", 0x000001, 0x080000, NO_DUMP )
	ROM_LOAD16_BYTE( "018_p2_e335.p2", 0x000000, 0x080000, NO_DUMP )

	NEO_SFIX_128K( "018_s1_9899.s1", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "018_m1_4586.m1", NO_DUMP )

	ROM_REGION( 0x200000, "ymsnd", 0 )
	ROM_LOAD( "018_v11_56ac.v11", 0x000000, 0x080000, NO_DUMP )
	ROM_LOAD( "018_v12_db95.v12", 0x080000, 0x080000, NO_DUMP )
	ROM_LOAD( "018_v21_98dd.v21", 0x100000, 0x080000, NO_DUMP )

	ROM_REGION( 0x80000, "ymsnd.deltat", 0 )
	ROM_COPY( "ymsnd", 0x100000, 0x00000, 0x080000 )

	ROM_REGION( 0x400000, "sprites", 0 )
	ROM_LOAD32_BYTE( "018_c1_ba06.c11", 0x000000, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "018_c2_d534.c12", 0x000002, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "018_c3_9d70.c13", 0x000001, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "018_c4_bf9d.c14", 0x000003, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "018_c5_ac9d.c15", 0x200000, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "018_c6_d2a5.c16", 0x200002, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "018_c7_d568.c17", 0x200001, 0x80000, NO_DUMP )
	ROM_LOAD32_BYTE( "018_c8_d256.c18", 0x200003, 0x80000, NO_DUMP )
ROM_END

ROM_START( jockeygpa )		/* Jockey Grand Prix (set 2) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "008-epr_a.p1", 0x000000, 0x100000, NO_DUMP )
	ROM_FILL( 0x100000, 0x100000, 0xff )

	ROM_Y_ZOOM

	ROM_REGION( 0x20000, "fixed", 0 )
	ROM_FILL( 0x000000, 0x20000, 0 )
	ROM_REGION( 0x20000, "fixedbios", 0 )
	ROM_LOAD( "sfix.sfix", 0x000000, 0x20000, CRC(c2ea0cfd) SHA1(fd4a618cdcdbf849374f0a50dd8efe9dbab706c3) )

	NEO_BIOS_AUDIO_ENCRYPTED_512K( "008-mg1.bin", CRC(d163c690) SHA1(1dfd04d20c5985037f07cd01000d0b04f3a8f4f4) )

	ROM_REGION( 0x0200000, "ymsnd", 0 )
	ROM_LOAD( "008-v1.bin", 0x000000, 0x200000, CRC(443eadba) SHA1(3def3c22f0e276bc4c2fc7ff70ce473c08b0d2df) )

	NO_DELTAT_REGION

	ROM_REGION( 0x1000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "008-c1.bin", 0x0000000, 0x800000, CRC(a9acbf18) SHA1(d55122c70cbe78c2679598dc07863e1d1d1a31df) ) /* Plane 0,1 */
	ROM_LOAD16_BYTE( "008-c2.bin", 0x0000001, 0x800000, CRC(6289eef9) SHA1(a2ede77bb2468a2e1486d74745a22a5451026039) ) /* Plane 2,3 */
ROM_END

ROM_START( garouh )		/* Garou - Mark of the Wolves (NGM-2530 ~ NGH-2530) */
	ROM_REGION( 0x900000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "ke.neo-sma", 0x0c0000, 0x040000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "253-p1.p1",  0x100000, 0x400000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "253-p2.p2",  0x500000, 0x400000, NO_DUMP )

	ROM_Y_ZOOM

	ROM_REGION( 0x80000, "fixed", 0 )
	ROM_FILL( 0x00000, 0x20000, 0x00000 )
	ROM_REGION( 0x20000, "fixedbios", 0 )
	ROM_LOAD( "sfix.sfix", 0x000000, 0x20000, CRC(c2ea0cfd) SHA1(fd4a618cdcdbf849374f0a50dd8efe9dbab706c3) )

	NEO_BIOS_AUDIO_256K( "253-m1.bin", CRC(36a806be) SHA1(90fb44dc0c3fb57946a0f35716056abb84a0f191) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "253-v1.bin", 0x000000, 0x400000, CRC(263e388c) SHA1(11f05feee170370c4bfc5053af79246a6e3de5dc) )
	ROM_LOAD( "253-v2.bin", 0x400000, 0x400000, CRC(2c6bc7be) SHA1(c9c61054ce1a47bf1bf77a31117726b499df24a4) )
	ROM_LOAD( "253-v3.bin", 0x800000, 0x400000, CRC(0425b27d) SHA1(986863c98fc3445487242dcf2ea75b075e7f33ee) )
	ROM_LOAD( "253-v4.bin", 0xc00000, 0x400000, CRC(a54be8a9) SHA1(d7123e79b43e8adfaa5ecadbfcbeb6be890ec311) )

	NO_DELTAT_REGION

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "253-c1.bin", 0x0000000, 0x800000, CRC(0603e046) SHA1(5ef4557ce90ba65d36129de97be1fdc049c4a3d0) ) /* Plane 0,1 */
	ROM_LOAD16_BYTE( "253-c2.bin", 0x0000001, 0x800000, CRC(0917d2a4) SHA1(d4ed3a13ae22f880fb399671c1752f1a0283f316) ) /* Plane 2,3 */
	ROM_LOAD16_BYTE( "253-c3.bin", 0x1000000, 0x800000, CRC(6737c92d) SHA1(678f0c9cc1267bd131546981b9989bfb7289d8ba) ) /* Plane 0,1 */
	ROM_LOAD16_BYTE( "253-c4.bin", 0x1000001, 0x800000, CRC(5ba92ec6) SHA1(aae36b050a3a0321026a96eba06dd184c0e2acca) ) /* Plane 2,3 */
	ROM_LOAD16_BYTE( "253-c5.bin", 0x2000000, 0x800000, CRC(3eab5557) SHA1(47c433015aa81a0b0a1d3ee51382c4948b80c023) ) /* Plane 0,1 */
	ROM_LOAD16_BYTE( "253-c6.bin", 0x2000001, 0x800000, CRC(308d098b) SHA1(b052f1fa9fbc69606004c250e2505360eaa24949) ) /* Plane 2,3 */
	ROM_LOAD16_BYTE( "253-c7.bin", 0x3000000, 0x800000, CRC(c0e995ae) SHA1(8675ca787d28246174c313167f82557f021366fc) ) /* Plane 0,1 */
	ROM_LOAD16_BYTE( "253-c8.bin", 0x3000001, 0x800000, CRC(21a11303) SHA1(fd61221ad257c185ef5c1f9694bd6b840b591af3) ) /* Plane 2,3 */
ROM_END

ROM_START( ironclad )		/* Choutetsu Brikin'ger - Iron clad (prototype) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "proto_220-p1.p1", 0x100000, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "proto_220-s1.s1", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "proto_220-m1.m1", NO_DUMP )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "proto_220-v1.v1", 0x000000, 0x400000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x1000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "proto_220-c1.c1", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "proto_220-c2.c2", 0x000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "proto_220-c3.c3", 0x800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "proto_220-c4.c4", 0x800001, 0x400000, NO_DUMP )
ROM_END

ROM_START( ironclado )		/* bootleg, Choutetsu Brikin'ger - Iron clad (prototype) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "proto_220-p1o.p1", 0x100000, 0x100000, NO_DUMP )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "proto_220-s1.s1", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "proto_220-m1.m1", NO_DUMP )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "proto_220-v1.v1", 0x000000, 0x400000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x1000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "proto_220-c1.c1", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "proto_220-c2.c2", 0x000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "proto_220-c3.c3", 0x800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "proto_220-c4.c4", 0x800001, 0x400000, NO_DUMP )
ROM_END

ROM_START( fr2ch )	/* Idol Mahjong - final romance 2 (bootleg of NGCD) */
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "098-p1ch.bin", 0x000000, 0x080000, NO_DUMP )

	NEO_SFIX_128K( "098-s1ch.bin", NO_DUMP )

	NEO_BIOS_AUDIO_128K( "098-m1ch.bin", NO_DUMP )

	ROM_REGION( 0x100000, "ymsnd", 0 )
	ROM_LOAD( "098-v1ch.bin", 0x000000, 0x100000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x800000, "sprites", 0 )
	ROM_LOAD16_BYTE( "098-c1ch.bin", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "098-c2ch.bin", 0x000001, 0x400000, NO_DUMP )
ROM_END

ROM_START( kof2000ps2 )		/* The King of Fighters 2000 (Playstation 2 ver. , EGHT hack) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "257ps2-p1.bin", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "257ps2-p2.bin", 0x100000, 0x400000, NO_DUMP )

	ROM_Y_ZOOM

	ROM_REGION( 0x80000, "fixed", 0 )
	ROM_FILL( 0x00000, 0x20000, 0 )
	ROM_REGION( 0x20000, "fixedbios", 0 )
	ROM_LOAD( "sfix.sfix", 0x00000, 0x20000, CRC(c2ea0cfd) SHA1(fd4a618cdcdbf849374f0a50dd8efe9dbab706c3) )

	NEO_BIOS_AUDIO_ENCRYPTED_256K( "257-m1.bin", CRC(4b749113) SHA1(2af2361146edd0ce3966614d90165a5c1afb8de4) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "257-v1.bin", 0x000000, 0x400000, CRC(17cde847) SHA1(4bcc0205b70dc6d9216b29025450c9c5b08cb65d) )
	ROM_LOAD( "257-v2.bin", 0x400000, 0x400000, CRC(1afb20ff) SHA1(57dfd2de058139345ff2b744a225790baaecd5a2) )
	ROM_LOAD( "257-v3.bin", 0x800000, 0x400000, CRC(4605036a) SHA1(51b228a0600d38a6ec37aec4822879ec3b0ee106) )
	ROM_LOAD( "257-v4.bin", 0xc00000, 0x400000, CRC(764bbd6b) SHA1(df23c09ca6cf7d0ae5e11ff16e30c159725106b3) )

	NO_DELTAT_REGION

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "257-c1_decrypted.bin", 0x0000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "257-c2_decrypted.bin", 0x0000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "257-c3_decrypted.bin", 0x1000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "257-c4_decrypted.bin", 0x1000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "257-c5_decrypted.bin", 0x2000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "257-c6_decrypted.bin", 0x2000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "257-c7_decrypted.bin", 0x3000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "257-c8_decrypted.bin", 0x3000001, 0x800000, NO_DUMP )
ROM_END

ROM_START( kf2k1pls )		/* The King of Fighters 2001 Plus (bootleg set 1) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "2k1-p1p.bin", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "262-pg2.bin", 0x100000, 0x400000, NO_DUMP )

	NEO_SFIX_128K( "2k1-s1p.bin", NO_DUMP )
	NEO_BIOS_AUDIO_ENCRYPTED_256K( "265-262-m1.bin", NO_DUMP )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "262-v1-08-e0.bin", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD( "262-v2-08-e0.bin", 0x400000, 0x400000, NO_DUMP )
	ROM_LOAD( "262-v3-08-e0.bin", 0x800000, 0x400000, NO_DUMP )
	ROM_LOAD( "262-v4-08-e0.bin", 0xc00000, 0x400000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "262-c1-08-e0.bin", 0x0000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c2-08-e0.bin", 0x0000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c3-08-e0.bin", 0x1000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c4-08-e0.bin", 0x1000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c5-08-e0.bin", 0x2000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c6-08-e0.bin", 0x2000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c7-08-e0.bin", 0x3000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c8-08-e0.bin", 0x3000001, 0x800000, NO_DUMP )
ROM_END

ROM_START( kf2k1pa )		/* The King of Fighters 2001 Plus (bootleg set 2) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "2k1-p1a.bin", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "262-pg2.bin", 0x100000, 0x400000, NO_DUMP )

	NEO_SFIX_128K( "2k1-s1a.bin", NO_DUMP )
	NEO_BIOS_AUDIO_ENCRYPTED_256K( "265-262-m1.bin", NO_DUMP )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "262-v1-08-e0.bin", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD( "262-v2-08-e0.bin", 0x400000, 0x400000, NO_DUMP )
	ROM_LOAD( "262-v3-08-e0.bin", 0x800000, 0x400000, NO_DUMP )
	ROM_LOAD( "262-v4-08-e0.bin", 0xc00000, 0x400000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "262-c1-08-e0.bin", 0x0000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c2-08-e0.bin", 0x0000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c3-08-e0.bin", 0x1000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c4-08-e0.bin", 0x1000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c5-08-e0.bin", 0x2000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c6-08-e0.bin", 0x2000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c7-08-e0.bin", 0x3000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "262-c8-08-e0.bin", 0x3000001, 0x800000, NO_DUMP )
ROM_END

ROM_START( cthd2k3a )		/* Crouching Tiger Hidden Dragon 2003 (alternate set) (Protected hack/bootleg of kof2001, Phenixsoft) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "5003-p1a.bin", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "5003-p2a.bin", 0x100000, 0x400000, NO_DUMP )

	NEO_SFIX_128K( "5003-s1a.bin", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "5003-m1a.bin", NO_DUMP )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "262-v1-08-e0.bin", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD( "5003-v2a.bin",     0x400000, 0x400000, NO_DUMP )
	ROM_LOAD( "262-v3-08-e0.bin", 0x800000, 0x400000, NO_DUMP )
	ROM_LOAD( "262-v4-08-e0.bin", 0xc00000, 0x400000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "5003-c1a.bin", 0x0000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "5003-c2a.bin", 0x0000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "5003-c3.bin",  0x1000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "5003-c4.bin",  0x1000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "5003-c5.bin",  0x2000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "5003-c6.bin",  0x2000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "5003-c7a.bin", 0x3000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "5003-c8a.bin", 0x3000001, 0x800000, NO_DUMP )
ROM_END

ROM_START( kf2k2plb )		/* The King of Fighters 2002 Plus (set 3) (bootleg of kof2002) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "2k2-p1p.bin", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "265-p2.bin",  0x100000, 0x400000, NO_DUMP )

	NEO_SFIX_128K( "2k2-s1pb.bin", NO_DUMP )
	NEO_BIOS_AUDIO_ENCRYPTED_128K( "265-m1.bin", NO_DUMP )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "265-v1.bin", 0x000000, 0x800000, NO_DUMP )
	ROM_LOAD( "265-v2.bin", 0x800000, 0x800000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "265-c1.bin", 0x0000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c2.bin", 0x0000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c3.bin", 0x1000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c4.bin", 0x1000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c5.bin", 0x2000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c6.bin", 0x2000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c7.bin", 0x3000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c8.bin", 0x3000001, 0x800000, NO_DUMP )
ROM_END

ROM_START( kf2k2plc )		/* The King of Fighters 2002 Plus (set 4) (bootleg of kof2002) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "2k2-p1pc.bin", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "265-p2.bin",  0x100000, 0x400000, NO_DUMP )

	NEO_SFIX_128K( "2k2-s1pc.bin", NO_DUMP )
	NEO_BIOS_AUDIO_ENCRYPTED_128K( "265-m1.bin", NO_DUMP )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "265-v1.bin", 0x000000, 0x800000, NO_DUMP )
	ROM_LOAD( "265-v2.bin", 0x800000, 0x800000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "265-c1.bin", 0x0000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c2.bin", 0x0000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c3.bin", 0x1000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c4.bin", 0x1000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c5.bin", 0x2000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c6.bin", 0x2000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c7.bin", 0x3000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c8.bin", 0x3000001, 0x800000, NO_DUMP )
ROM_END

ROM_START( kf2k2ps2 )		/* The King of Fighters 2002 (Playstation 2 ver. 0.4, EGHT hack) */
	ROM_REGION( 0x600000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "265ps2-p1.bin", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "265ps2-p2.bin", 0x100000, 0x500000, NO_DUMP )

	NEO_SFIX_128K( "265ps2-s1.bin", NO_DUMP )
	NEO_BIOS_AUDIO_ENCRYPTED_128K( "265-m1.bin", NO_DUMP )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "265-v1.bin", 0x000000, 0x800000, NO_DUMP )
	ROM_LOAD( "265-v2.bin", 0x800000, 0x800000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x5000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "265-c1_decrypted.bin", 0x0000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c2_decrypted.bin", 0x0000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c3_decrypted.bin", 0x1000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c4_decrypted.bin", 0x1000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c5_decrypted.bin", 0x2000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265-c6_decrypted.bin", 0x2000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265ps2-c7.bin",	 0x3000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265ps2-c8.bin",	 0x3000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265ps2-c9.bin",	 0x4000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "265ps2-c10.bin",	 0x4000001, 0x800000, NO_DUMP )
ROM_END

ROM_START( kf2k4pls )		/* The King of Fighters Special Edition 2004 Plus (bootleg of kof2002) */
	ROM_REGION( 0x600000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "k2k4s-p1p.bin",  0x000000, 0x100000, NO_DUMP )
	ROM_CONTINUE(				0x500000, 0x100000 )
	ROM_LOAD16_WORD_SWAP( "k2k4s-p1.bin",   0x400000, 0x100000, NO_DUMP )
	ROM_CONTINUE(				0x300000, 0x100000 )
	ROM_CONTINUE(				0x200000, 0x100000 )
	ROM_CONTINUE(				0x100000, 0x100000 )

	NEO_SFIX_128K( "k2k4s-s1p.bin", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "k2k4s-m1.bin", NO_DUMP )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "k2k4s-v2.bin", 0x000000, 0x800000, NO_DUMP )
	ROM_LOAD( "k2k4s-v1.bin", 0x800000, 0x800000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "k2k4s-c4.bin", 0x0000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "k2k4s-c8.bin", 0x0000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "k2k4s-c3.bin", 0x1000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "k2k4s-c7.bin", 0x1000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "k2k4s-c2.bin", 0x2000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "k2k4s-c6.bin", 0x2000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "k2k4s-c1.bin", 0x3000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "k2k4s-c5.bin", 0x3000001, 0x800000, NO_DUMP )
ROM_END

ROM_START( kof95a )		/* The King of Fighters' 95 (NGM-084) (alternate board) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "084-epr.ep1", 0x000000, 0x080000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "084-epr.ep2", 0x080000, 0x080000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "084-epr.ep3", 0x100000, 0x080000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "084-epr.ep4", 0x180000, 0x080000, NO_DUMP )

	NEO_SFIX_128K( "084-s1.bin", CRC(de716f8a) SHA1(f7386454a943ed5caf625f67ee1d0197b1c6fa13) )

	NEO_BIOS_AUDIO_128K( "084-m1.bin", CRC(6f2d7429) SHA1(6f8462e4f07af82a5ca3197895d5dcbb67bdaa61) )

	ROM_REGION( 0x900000, "ymsnd", 0 )
	ROM_LOAD( "084-v1.bin", 0x000000, 0x400000, CRC(84861b56) SHA1(1b6c91ddaed01f45eb9b7e49d9c2b9b479d50da6) )
	ROM_LOAD( "084-v2.bin", 0x400000, 0x200000, CRC(b38a2803) SHA1(dbc2c8606ca09ed7ff20906b022da3cf053b2f09) )
	ROM_LOAD( "084-v3.bin", 0x800000, 0x100000, CRC(d683a338) SHA1(eb9866b4b286edc09963cb96c43ce0a8fb09adbb) )

	NO_DELTAT_REGION

	ROM_REGION( 0x1a00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "084-c1.bin", 0x0000000, 0x400000, CRC(fe087e32) SHA1(e8e89faa616027e4fb9b8a865c1a67f409c93bdf) )
	ROM_LOAD16_BYTE( "084-c2.bin", 0x0000001, 0x400000, CRC(07864e09) SHA1(0817fcfd75d0735fd8ff27561eaec371e4ff5829) )
	ROM_LOAD16_BYTE( "084-c3.bin", 0x0800000, 0x400000, CRC(a4e65d1b) SHA1(740a405b40b3a4b324697d2652cae29ffe0ac0bd) )
	ROM_LOAD16_BYTE( "084-c4.bin", 0x0800001, 0x400000, CRC(c1ace468) SHA1(74ea2a3cfd7b744f0988a05baaff10016ca8f625) )
	ROM_LOAD16_BYTE( "084-c5.bin", 0x1000000, 0x200000, CRC(8a2c1edc) SHA1(67866651bc0ce27122285a66b0aab108acf3d065) )
	ROM_LOAD16_BYTE( "084-c6.bin", 0x1000001, 0x200000, CRC(f593ac35) SHA1(302c92c63f092a8d49429c3331e5e5678f0ea48d) )
	ROM_LOAD16_BYTE( "084-c7.bin", 0x1800000, 0x100000, CRC(9904025f) SHA1(eec770746a0ad073f7d353ab16a2cc3a5278d307) )
	ROM_LOAD16_BYTE( "084-c8.bin", 0x1800001, 0x100000, CRC(78eb0f9b) SHA1(2925ea21ed2ce167f08a25589e94f28643379034) )
ROM_END

ROM_START( kof96a )		/* The King of Fighters' 96 (NGM-214) (alternate board) */
	ROM_REGION( 0x400000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "214-epr.ep1", 0x000000, 0x080000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "214-epr.ep2", 0x080000, 0x080000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "214-epr.ep3", 0x100000, 0x080000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "214-epr.ep4", 0x180000, 0x080000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "214-p5.p5",   0x200000, 0x200000, NO_DUMP )

	NEO_SFIX_128K( "214-s1.bin", CRC(1254cbdb) SHA1(fce5cf42588298711a3633e9c9c1d4dcb723ac76) )
	NEO_BIOS_AUDIO_128K( "214-m1.bin", CRC(dabc427c) SHA1(b76722ed142ee7addceb4757424870dbd003e8b3) )

	ROM_REGION( 0xa00000, "ymsnd", 0 )
	ROM_LOAD( "214-v1.bin", 0x000000, 0x400000, CRC(63f7b045) SHA1(1353715f1a8476dca6f8031d9e7a401eacab8159) )
	ROM_LOAD( "214-v2.bin", 0x400000, 0x400000, CRC(25929059) SHA1(6a721c4cb8f8dc772774023877d4a9f50d5a9e31) )
	ROM_LOAD( "214-v3.bin", 0x800000, 0x200000, CRC(92a2257d) SHA1(5064aec78fa0d104e5dd5869b95382aa170214ee) )

	NO_DELTAT_REGION

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "214-c1.bin", 0x0000000, 0x400000, CRC(7ecf4aa2) SHA1(f773c4c1f05d58dd37e7bb2ac1d1e0ec43998a71) )
	ROM_LOAD16_BYTE( "214-c2.bin", 0x0000001, 0x400000, CRC(05b54f37) SHA1(cc31653fe4cb05201fba234e080cb9c7a7592b1b) )
	ROM_LOAD16_BYTE( "214-c3.bin", 0x0800000, 0x400000, CRC(64989a65) SHA1(e6f3749d43be0afa9dad7b085cb782ba694252ca) )
	ROM_LOAD16_BYTE( "214-c4.bin", 0x0800001, 0x400000, CRC(afbea515) SHA1(ae875052728de33174827705646bd14cf3937b5c) )
	ROM_LOAD16_BYTE( "214-c5.bin", 0x1000000, 0x400000, CRC(2a3bbd26) SHA1(7c1a7e50a10a1b082e0d0d515c34135ee9f995ac) )
	ROM_LOAD16_BYTE( "214-c6.bin", 0x1000001, 0x400000, CRC(44d30dc7) SHA1(c8ae001e37224b55d9e4a4d99f6578b4f6eb055f) )
	ROM_LOAD16_BYTE( "214-c7.bin", 0x1800000, 0x400000, CRC(3687331b) SHA1(2be95caab76d7af51674f93884330ba73a6053e4) )
	ROM_LOAD16_BYTE( "214-c8.bin", 0x1800001, 0x400000, CRC(fa1461ad) SHA1(6c71a7f08e4044214223a6bf80984582ab5e0328) )
ROM_END

ROM_START( kof96ae )		/* The King of Fighters' 96 Anniversary Edition (bootleg of kof96, EGHT hack) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "214ae-p1.bin", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "214ae-p2.bin", 0x100000, 0x400000, NO_DUMP )

	NEO_SFIX_128K( "214ae-s1.bin", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "214ae-m1.bin", NO_DUMP )

	ROM_REGION( 0xc00000, "ymsnd", 0 )
	ROM_LOAD( "214-v1.bin",   0x000000, 0x400000, NO_DUMP )
	ROM_LOAD( "214-v2.bin",   0x400000, 0x400000, NO_DUMP )
	ROM_LOAD( "214ae-v3.bin", 0x800000, 0x400000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x3000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "214ae-c1.bin",  0x0000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c2.bin",  0x0000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c3.bin",    0x0800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c4.bin",    0x0800001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c5.bin",  0x1000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c6.bin",  0x1000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c7.bin",  0x1800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c8.bin",  0x1800001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c9.bin",  0x2000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c10.bin", 0x2000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c11.bin", 0x2800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c12.bin", 0x2800001, 0x400000, NO_DUMP )
ROM_END

ROM_START( kof96ae20 )		/* The King of Fighters' 96 Anniversary Edition 2.0 (bootleg of kof96, EGHT hack) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "214ae-p1.p1", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "214ae-p2.p2", 0x100000, 0x400000, NO_DUMP )

	NEO_SFIX_128K( "214ae-s1.s1", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "214ae-m1.m1", NO_DUMP )

	ROM_REGION( 0xc00000, "ymsnd", 0 )
	ROM_LOAD( "214-v1.bin",  0x000000, 0x400000, NO_DUMP )
	ROM_LOAD( "214-v2.bin",  0x400000, 0x400000, NO_DUMP )
	ROM_LOAD( "214ae-v3.v3", 0x800000, 0x400000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x3000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "214ae-c1.c1",   0x0000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c2.c2",   0x0000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c3.bin",    0x0800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c4.bin",    0x0800001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c5.c5",   0x1000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c6.c6",   0x1000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c7.c7",   0x1800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c8.c8",   0x1800001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c9.c9",   0x2000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c10.c10", 0x2000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c11.c11", 0x2800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214ae-c12.c12", 0x2800001, 0x400000, NO_DUMP )
ROM_END

ROM_START( kof96cn )		/* The King of Fighters' 96 (Chinese Edition ver 1.0, hack) */
	ROM_REGION( 0x800000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "214cn-p1.bin", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "214cn-p2.bin", 0x100000, 0x200000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "214cn-p3.bin", 0x300000, 0x500000, NO_DUMP )

	NEO_SFIX_128K( "214cn-s1.bin", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "214-m1.bin", NO_DUMP )

	ROM_REGION( 0xa00000, "ymsnd", 0 )
	ROM_LOAD( "214-v1.bin", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD( "214-v2.bin", 0x400000, 0x400000, NO_DUMP )
	ROM_LOAD( "214-v3.bin", 0x800000, 0x200000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x2800000, "sprites", 0 )
	ROM_LOAD16_BYTE( "214-c1.bin",    0x0000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c2.bin",    0x0000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c3.bin",    0x0800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c4.bin",    0x0800001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c5.bin",    0x1000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c6.bin",    0x1000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c7.bin",    0x1800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c8.bin",    0x1800001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214cn-c9.bin",  0x2000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214cn-c10.bin", 0x2000001, 0x400000, NO_DUMP )
ROM_END

ROM_START( kof96ep )		/* The King of Fighters' 96 (bootleg) */
	ROM_REGION( 0x380000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "214-p1.bin",	0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "214-p2.bin",	0x100000, 0x200000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "kof96m_ep1.rom", 0x300000, 0x080000, NO_DUMP )

	NEO_SFIX_128K( "214-s1.bin", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "214-m1.bin", NO_DUMP )

	ROM_REGION( 0xa00000, "ymsnd", 0 )
	ROM_LOAD( "214-v1.bin", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD( "214-v2.bin", 0x400000, 0x400000, NO_DUMP )
	ROM_LOAD( "214-v3.bin", 0x800000, 0x200000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "214-c1.bin", 0x0000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c2.bin", 0x0000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c3.bin", 0x0800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c4.bin", 0x0800001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c5.bin", 0x1000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c6.bin", 0x1000001, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c7.bin", 0x1800000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "214-c8.bin", 0x1800001, 0x400000, NO_DUMP )
ROM_END

ROM_START( kof97k )		/* The King of Fighters' 97 Korean release */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "232-p1.bin", 0x000000, 0x100000, CRC(7db81ad9) SHA1(8bc42be872fd497eb198ca13bf004852b88eb1dc) )
	ROM_LOAD16_WORD_SWAP( "232-p2.bin", 0x100000, 0x400000, CRC(158b23f6) SHA1(9744620a70513490aaf9c5eda33e5ec31222be19) )

	NEO_SFIX_128K( "232-s1.bin", CRC(8514ecf5) SHA1(18d8e7feb51ea88816f1c786932a53655b0de6a0) )

	NEO_BIOS_AUDIO_128K( "232-m1k.m1", NO_DUMP )

	ROM_REGION( 0xc00000, "ymsnd", 0 )
	ROM_LOAD( "232-v1.bin", 0x000000, 0x400000, CRC(22a2b5b5) SHA1(ebdbc977332e6d93e266755000b43857e0082965) )
	ROM_LOAD( "232-v2.bin", 0x400000, 0x400000, CRC(2304e744) SHA1(98d283e2bcc9291a53f52afd35ef76dfb0828432) )
	ROM_LOAD( "232-v3.bin", 0x800000, 0x400000, CRC(759eb954) SHA1(54e77c4e9e6b89458e59824e478ddc33a9c72655) )

	NO_DELTAT_REGION

	ROM_REGION( 0x2800000, "sprites", 0 )
	ROM_LOAD16_BYTE( "232-c1.bin", 0x0000000, 0x800000, CRC(5f8bf0a1) SHA1(e8b63bbc814de171fd18c5864a7fc639970c1ecf) )
	ROM_LOAD16_BYTE( "232-c2.bin", 0x0000001, 0x800000, CRC(e4d45c81) SHA1(fdb2b9326362e27b1c7a5beb977e0bc537488186) )
	ROM_LOAD16_BYTE( "232-c3.bin", 0x1000000, 0x800000, CRC(581d6618) SHA1(14d3124a08ded59f86932c6b28e1a4e48c564ccd) )
	ROM_LOAD16_BYTE( "232-c4.bin", 0x1000001, 0x800000, CRC(49bb1e68) SHA1(f769c1bd1b019521111ff3f0d22c63cb1f2640ef) )
	ROM_LOAD16_BYTE( "232-c5.bin", 0x2000000, 0x400000, CRC(34fc4e51) SHA1(b39c65f27873f71a6f5a5d1d04e5435f874472ee) )
	ROM_LOAD16_BYTE( "232-c6.bin", 0x2000001, 0x400000, CRC(4ff4d47b) SHA1(4d5689ede24a5fe4330bd85d4d3f4eb2795308bb) )
ROM_END

ROM_START( kof97cn )		/* The King of Fighters' 97 (10th Anniversary Chinese Edition, EGHT hack) */
	ROM_REGION( 0x700000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "232cn-p1.bin", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD16_WORD_SWAP( "232cn-p2.bin", 0x100000, 0x600000, NO_DUMP )

	NEO_SFIX_128K( "232cn-s1.bin", NO_DUMP )
	NEO_BIOS_AUDIO_128K( "232-m1.bin", NO_DUMP )

	ROM_REGION( 0xc00000, "ymsnd", 0 )
	ROM_LOAD( "232-v1.bin", 0x000000, 0x400000, NO_DUMP )
	ROM_LOAD( "232-v2.bin", 0x400000, 0x400000, NO_DUMP )
	ROM_LOAD( "232-v3.bin", 0x800000, 0x400000, NO_DUMP )

	NO_DELTAT_REGION

	ROM_REGION( 0x2800000, "sprites", 0 )
	ROM_LOAD16_BYTE( "232cn-c1.bin", 0x0000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "232cn-c2.bin", 0x0000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "232-c3.bin",   0x1000000, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "232-c4.bin",   0x1000001, 0x800000, NO_DUMP )
	ROM_LOAD16_BYTE( "232-c5.bin",   0x2000000, 0x400000, NO_DUMP )
	ROM_LOAD16_BYTE( "232-c6.bin",   0x2000001, 0x400000, NO_DUMP )
ROM_END
