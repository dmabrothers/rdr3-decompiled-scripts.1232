#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42[3] = { 0, 0, 0 };
	var uLocal_46[2] = { 0, 0 };
	int iLocal_49 = 0;
	int iLocal_50[3] = { 0, 0, 0 };
	int iLocal_54[3] = { 0, 0, 0 };
	var uLocal_58[1] = { 0 };
	var uLocal_60[1] = { 0 };
	int iLocal_62[2] = { 0, 0 };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	vector3 vLocal_69 = { 0f, 0f, 0f };
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_93[71] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167[4] = { 0, 0, 0, 0 };
	int iLocal_172 = 7;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	int iLocal_180[1] = { 0 };
	int iLocal_182[2] = { 0, 0 };
	int iLocal_185[1] = { 0 };
	int iLocal_187 = 0;
	bool bLocal_188 = false;
	int iLocal_189 = 0;
	var uLocal_190 = 4;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195[2] = { 0, 0 };
	int iLocal_198[2] = { 0, 0 };
	int iLocal_201 = 0;
	var uLocal_202[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	vector3 vLocal_224[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_231[1] = {{ 0f, 0f, 0f } };
	var uLocal_235 = 1;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	vector3 vLocal_239[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262[2] = { 0, 0 };
	var uLocal_265[3] = { 0, 0, 0 };
	int iLocal_269 = 0;
	var uLocal_270[2] = { 0, 0 };
	var uLocal_273[2] = { 0, 0 };
	var uLocal_276[1] = { 0 };
	var uLocal_278 = 1;
	var uLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	struct<25> Local_283[2];
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	int iLocal_344 = 0;
	var uLocal_345[2] = { 0, 0 };
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	int iLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	float fLocal_366 = 0f;
	int iLocal_367 = 0;
	var uLocal_368 = 1;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 65;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 1097859072;
	var uLocal_1163 = 1101004800;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 4;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	int iLocal_1261 = 0;
	bool bLocal_1262 = false;
	int iLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	int iLocal_1267 = 0;
	struct<9> Local_1268 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	int iLocal_1284 = 0;
	int iLocal_1285 = 0;
	int iLocal_1286 = 0;
	int iLocal_1287 = 0;
	int iLocal_1288 = 0;
	int iLocal_1289 = 0;
	int iLocal_1290 = 0;
	var uLocal_1291 = -1;
	var uLocal_1292 = 0;
	var uLocal_1293 = -1;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = -1;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 1073741824;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 1;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	struct<17> Local_1311[1];
	int iLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	int iLocal_1333 = 0;
	int iLocal_1334 = 0;
	int iLocal_1335 = 0;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	struct<21> Local_1359[1];
	struct<17> Local_1381[2];
	int iLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	bool bLocal_1423 = false;
	int iLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	int iLocal_1428 = 0;
	int iLocal_1429 = 0;
	int iLocal_1430 = 0;
	int iLocal_1431 = 0;
	int iLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	int iLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 27;
	var uLocal_1439 = 8;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = -1;
	var uLocal_1461 = 8;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = -1;
	var uLocal_1483 = 8;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = -1;
	var uLocal_1505 = 8;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = -1;
	var uLocal_1527 = 8;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = -1;
	var uLocal_1549 = 8;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = -1;
	var uLocal_1571 = 8;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = -1;
	var uLocal_1593 = 8;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = -1;
	var uLocal_1615 = 8;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = -1;
	var uLocal_1637 = 8;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = -1;
	var uLocal_1659 = 8;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = -1;
	var uLocal_1681 = 8;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = -1;
	var uLocal_1703 = 8;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = -1;
	var uLocal_1725 = 8;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = -1;
	var uLocal_1747 = 8;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = -1;
	var uLocal_1769 = 8;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = -1;
	var uLocal_1791 = 8;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = -1;
	var uLocal_1813 = 8;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = -1;
	var uLocal_1835 = 8;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = -1;
	var uLocal_1857 = 8;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = -1;
	var uLocal_1879 = 8;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = -1;
	var uLocal_1901 = 8;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = -1;
	var uLocal_1923 = 8;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = -1;
	var uLocal_1945 = 8;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = -1;
	var uLocal_1967 = 8;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = -1;
	var uLocal_1989 = 8;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = -1;
	var uLocal_2011 = 8;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = -1;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 2;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 60;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 40;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 20;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 14;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 60;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 20;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 20;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 20;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 20;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 20;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 20;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 20;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 20;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 20;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 20;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 20;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 20;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 20;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 20;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 20;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 20;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 20;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 20;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 20;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 20;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 20;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 20;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 20;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 20;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 20;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 20;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 20;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 20;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 20;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 20;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 20;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 20;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 20;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 20;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 20;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 20;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 20;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 20;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 20;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 20;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 20;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 20;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 20;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 20;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 20;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 20;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 20;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 20;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 20;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 20;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 20;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 20;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 20;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 20;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 20;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 20;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 20;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 20;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 20;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 20;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = 0;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 10;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 0;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = 0;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 10;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	var uLocal_6652 = 0;
	var uLocal_6653 = 0;
	var uLocal_6654 = 0;
	var uLocal_6655 = 0;
	var uLocal_6656 = 0;
	var uLocal_6657 = 0;
	var uLocal_6658 = 0;
	var uLocal_6659 = 0;
	var uLocal_6660 = 0;
	var uLocal_6661 = 0;
	var uLocal_6662 = 0;
	var uLocal_6663 = 0;
	var uLocal_6664 = 0;
	var uLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 0;
	var uLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = 3;
	var uLocal_6677 = 0;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 5;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 5;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 0;
	var uLocal_6713 = 0;
	var uLocal_6714 = 0;
	var uLocal_6715 = 0;
	var uLocal_6716 = 0;
	var uLocal_6717 = 0;
	var uLocal_6718 = 0;
	var uLocal_6719 = 0;
	var uLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 5;
	var uLocal_6724 = 0;
	var uLocal_6725 = 0;
	var uLocal_6726 = 0;
	var uLocal_6727 = 0;
	var uLocal_6728 = 0;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = 0;
	var uLocal_6734 = 0;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 0;
	var uLocal_6743 = 0;
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 24;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 0;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
	var uLocal_6773 = 0;
	var uLocal_6774 = 0;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 0;
	var uLocal_6779 = 0;
	var uLocal_6780 = 0;
	var uLocal_6781 = 0;
	var uLocal_6782 = 0;
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 0;
	var uLocal_6789 = 0;
	var uLocal_6790 = 0;
	var uLocal_6791 = 0;
	var uLocal_6792 = 0;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 0;
	var uLocal_6796 = 0;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 0;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 0;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 0;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 0;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 0;
	var uLocal_6846 = 0;
	var uLocal_6847 = 0;
	var uLocal_6848 = 0;
	var uLocal_6849 = 0;
	var uLocal_6850 = 0;
	var uLocal_6851 = 0;
	var uLocal_6852 = 0;
	var uLocal_6853 = 0;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 30;
	var uLocal_6861 = 0;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 3;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = -1;
	var uLocal_6872 = 0;
	var uLocal_6873 = 5;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 10;
	var uLocal_6885 = 3;
	var uLocal_6886 = 500;
	var uLocal_6887 = 10000;
	var uLocal_6888 = 0;
	var uLocal_6889 = 3;
	var uLocal_6890 = 500;
	var uLocal_6891 = 10000;
	var uLocal_6892 = 0;
	var uLocal_6893 = 3;
	var uLocal_6894 = 500;
	var uLocal_6895 = 10000;
	var uLocal_6896 = 0;
	var uLocal_6897 = 3;
	var uLocal_6898 = 500;
	var uLocal_6899 = 10000;
	var uLocal_6900 = 0;
	var uLocal_6901 = 3;
	var uLocal_6902 = 500;
	var uLocal_6903 = 10000;
	var uLocal_6904 = 0;
	var uLocal_6905 = 3;
	var uLocal_6906 = 500;
	var uLocal_6907 = 10000;
	var uLocal_6908 = 0;
	var uLocal_6909 = 3;
	var uLocal_6910 = 500;
	var uLocal_6911 = 10000;
	var uLocal_6912 = 0;
	var uLocal_6913 = 3;
	var uLocal_6914 = 500;
	var uLocal_6915 = 10000;
	var uLocal_6916 = 0;
	var uLocal_6917 = 3;
	var uLocal_6918 = 500;
	var uLocal_6919 = 10000;
	var uLocal_6920 = 0;
	var uLocal_6921 = 3;
	var uLocal_6922 = 500;
	var uLocal_6923 = 10000;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
	var uLocal_6930 = 0;
	var uLocal_6931 = 3;
	var uLocal_6932 = 0;
	var uLocal_6933 = 0;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = -1;
	var uLocal_6937 = 0;
	var uLocal_6938 = 5;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 10;
	var uLocal_6950 = 3;
	var uLocal_6951 = 500;
	var uLocal_6952 = 10000;
	var uLocal_6953 = 0;
	var uLocal_6954 = 3;
	var uLocal_6955 = 500;
	var uLocal_6956 = 10000;
	var uLocal_6957 = 0;
	var uLocal_6958 = 3;
	var uLocal_6959 = 500;
	var uLocal_6960 = 10000;
	var uLocal_6961 = 0;
	var uLocal_6962 = 3;
	var uLocal_6963 = 500;
	var uLocal_6964 = 10000;
	var uLocal_6965 = 0;
	var uLocal_6966 = 3;
	var uLocal_6967 = 500;
	var uLocal_6968 = 10000;
	var uLocal_6969 = 0;
	var uLocal_6970 = 3;
	var uLocal_6971 = 500;
	var uLocal_6972 = 10000;
	var uLocal_6973 = 0;
	var uLocal_6974 = 3;
	var uLocal_6975 = 500;
	var uLocal_6976 = 10000;
	var uLocal_6977 = 0;
	var uLocal_6978 = 3;
	var uLocal_6979 = 500;
	var uLocal_6980 = 10000;
	var uLocal_6981 = 0;
	var uLocal_6982 = 3;
	var uLocal_6983 = 500;
	var uLocal_6984 = 10000;
	var uLocal_6985 = 0;
	var uLocal_6986 = 3;
	var uLocal_6987 = 500;
	var uLocal_6988 = 10000;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 0;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = 3;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = -1;
	var uLocal_7002 = 0;
	var uLocal_7003 = 5;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 10;
	var uLocal_7015 = 3;
	var uLocal_7016 = 500;
	var uLocal_7017 = 10000;
	var uLocal_7018 = 0;
	var uLocal_7019 = 3;
	var uLocal_7020 = 500;
	var uLocal_7021 = 10000;
	var uLocal_7022 = 0;
	var uLocal_7023 = 3;
	var uLocal_7024 = 500;
	var uLocal_7025 = 10000;
	var uLocal_7026 = 0;
	var uLocal_7027 = 3;
	var uLocal_7028 = 500;
	var uLocal_7029 = 10000;
	var uLocal_7030 = 0;
	var uLocal_7031 = 3;
	var uLocal_7032 = 500;
	var uLocal_7033 = 10000;
	var uLocal_7034 = 0;
	var uLocal_7035 = 3;
	var uLocal_7036 = 500;
	var uLocal_7037 = 10000;
	var uLocal_7038 = 0;
	var uLocal_7039 = 3;
	var uLocal_7040 = 500;
	var uLocal_7041 = 10000;
	var uLocal_7042 = 0;
	var uLocal_7043 = 3;
	var uLocal_7044 = 500;
	var uLocal_7045 = 10000;
	var uLocal_7046 = 0;
	var uLocal_7047 = 3;
	var uLocal_7048 = 500;
	var uLocal_7049 = 10000;
	var uLocal_7050 = 0;
	var uLocal_7051 = 3;
	var uLocal_7052 = 500;
	var uLocal_7053 = 10000;
	var uLocal_7054 = 0;
	var uLocal_7055 = 0;
	var uLocal_7056 = 0;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 0;
	var uLocal_7061 = 3;
	var uLocal_7062 = 0;
	var uLocal_7063 = 0;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = -1;
	var uLocal_7067 = 0;
	var uLocal_7068 = 5;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 10;
	var uLocal_7080 = 3;
	var uLocal_7081 = 500;
	var uLocal_7082 = 10000;
	var uLocal_7083 = 0;
	var uLocal_7084 = 3;
	var uLocal_7085 = 500;
	var uLocal_7086 = 10000;
	var uLocal_7087 = 0;
	var uLocal_7088 = 3;
	var uLocal_7089 = 500;
	var uLocal_7090 = 10000;
	var uLocal_7091 = 0;
	var uLocal_7092 = 3;
	var uLocal_7093 = 500;
	var uLocal_7094 = 10000;
	var uLocal_7095 = 0;
	var uLocal_7096 = 3;
	var uLocal_7097 = 500;
	var uLocal_7098 = 10000;
	var uLocal_7099 = 0;
	var uLocal_7100 = 3;
	var uLocal_7101 = 500;
	var uLocal_7102 = 10000;
	var uLocal_7103 = 0;
	var uLocal_7104 = 3;
	var uLocal_7105 = 500;
	var uLocal_7106 = 10000;
	var uLocal_7107 = 0;
	var uLocal_7108 = 3;
	var uLocal_7109 = 500;
	var uLocal_7110 = 10000;
	var uLocal_7111 = 0;
	var uLocal_7112 = 3;
	var uLocal_7113 = 500;
	var uLocal_7114 = 10000;
	var uLocal_7115 = 0;
	var uLocal_7116 = 3;
	var uLocal_7117 = 500;
	var uLocal_7118 = 10000;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 0;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 3;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = -1;
	var uLocal_7132 = 0;
	var uLocal_7133 = 5;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 10;
	var uLocal_7145 = 3;
	var uLocal_7146 = 500;
	var uLocal_7147 = 10000;
	var uLocal_7148 = 0;
	var uLocal_7149 = 3;
	var uLocal_7150 = 500;
	var uLocal_7151 = 10000;
	var uLocal_7152 = 0;
	var uLocal_7153 = 3;
	var uLocal_7154 = 500;
	var uLocal_7155 = 10000;
	var uLocal_7156 = 0;
	var uLocal_7157 = 3;
	var uLocal_7158 = 500;
	var uLocal_7159 = 10000;
	var uLocal_7160 = 0;
	var uLocal_7161 = 3;
	var uLocal_7162 = 500;
	var uLocal_7163 = 10000;
	var uLocal_7164 = 0;
	var uLocal_7165 = 3;
	var uLocal_7166 = 500;
	var uLocal_7167 = 10000;
	var uLocal_7168 = 0;
	var uLocal_7169 = 3;
	var uLocal_7170 = 500;
	var uLocal_7171 = 10000;
	var uLocal_7172 = 0;
	var uLocal_7173 = 3;
	var uLocal_7174 = 500;
	var uLocal_7175 = 10000;
	var uLocal_7176 = 0;
	var uLocal_7177 = 3;
	var uLocal_7178 = 500;
	var uLocal_7179 = 10000;
	var uLocal_7180 = 0;
	var uLocal_7181 = 3;
	var uLocal_7182 = 500;
	var uLocal_7183 = 10000;
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 3;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = -1;
	var uLocal_7197 = 0;
	var uLocal_7198 = 5;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 10;
	var uLocal_7210 = 3;
	var uLocal_7211 = 500;
	var uLocal_7212 = 10000;
	var uLocal_7213 = 0;
	var uLocal_7214 = 3;
	var uLocal_7215 = 500;
	var uLocal_7216 = 10000;
	var uLocal_7217 = 0;
	var uLocal_7218 = 3;
	var uLocal_7219 = 500;
	var uLocal_7220 = 10000;
	var uLocal_7221 = 0;
	var uLocal_7222 = 3;
	var uLocal_7223 = 500;
	var uLocal_7224 = 10000;
	var uLocal_7225 = 0;
	var uLocal_7226 = 3;
	var uLocal_7227 = 500;
	var uLocal_7228 = 10000;
	var uLocal_7229 = 0;
	var uLocal_7230 = 3;
	var uLocal_7231 = 500;
	var uLocal_7232 = 10000;
	var uLocal_7233 = 0;
	var uLocal_7234 = 3;
	var uLocal_7235 = 500;
	var uLocal_7236 = 10000;
	var uLocal_7237 = 0;
	var uLocal_7238 = 3;
	var uLocal_7239 = 500;
	var uLocal_7240 = 10000;
	var uLocal_7241 = 0;
	var uLocal_7242 = 3;
	var uLocal_7243 = 500;
	var uLocal_7244 = 10000;
	var uLocal_7245 = 0;
	var uLocal_7246 = 3;
	var uLocal_7247 = 500;
	var uLocal_7248 = 10000;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 3;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = -1;
	var uLocal_7262 = 0;
	var uLocal_7263 = 5;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
	var uLocal_7274 = 10;
	var uLocal_7275 = 3;
	var uLocal_7276 = 500;
	var uLocal_7277 = 10000;
	var uLocal_7278 = 0;
	var uLocal_7279 = 3;
	var uLocal_7280 = 500;
	var uLocal_7281 = 10000;
	var uLocal_7282 = 0;
	var uLocal_7283 = 3;
	var uLocal_7284 = 500;
	var uLocal_7285 = 10000;
	var uLocal_7286 = 0;
	var uLocal_7287 = 3;
	var uLocal_7288 = 500;
	var uLocal_7289 = 10000;
	var uLocal_7290 = 0;
	var uLocal_7291 = 3;
	var uLocal_7292 = 500;
	var uLocal_7293 = 10000;
	var uLocal_7294 = 0;
	var uLocal_7295 = 3;
	var uLocal_7296 = 500;
	var uLocal_7297 = 10000;
	var uLocal_7298 = 0;
	var uLocal_7299 = 3;
	var uLocal_7300 = 500;
	var uLocal_7301 = 10000;
	var uLocal_7302 = 0;
	var uLocal_7303 = 3;
	var uLocal_7304 = 500;
	var uLocal_7305 = 10000;
	var uLocal_7306 = 0;
	var uLocal_7307 = 3;
	var uLocal_7308 = 500;
	var uLocal_7309 = 10000;
	var uLocal_7310 = 0;
	var uLocal_7311 = 3;
	var uLocal_7312 = 500;
	var uLocal_7313 = 10000;
	var uLocal_7314 = 0;
	var uLocal_7315 = 0;
	var uLocal_7316 = 0;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = 3;
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = -1;
	var uLocal_7327 = 0;
	var uLocal_7328 = 5;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 0;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 10;
	var uLocal_7340 = 3;
	var uLocal_7341 = 500;
	var uLocal_7342 = 10000;
	var uLocal_7343 = 0;
	var uLocal_7344 = 3;
	var uLocal_7345 = 500;
	var uLocal_7346 = 10000;
	var uLocal_7347 = 0;
	var uLocal_7348 = 3;
	var uLocal_7349 = 500;
	var uLocal_7350 = 10000;
	var uLocal_7351 = 0;
	var uLocal_7352 = 3;
	var uLocal_7353 = 500;
	var uLocal_7354 = 10000;
	var uLocal_7355 = 0;
	var uLocal_7356 = 3;
	var uLocal_7357 = 500;
	var uLocal_7358 = 10000;
	var uLocal_7359 = 0;
	var uLocal_7360 = 3;
	var uLocal_7361 = 500;
	var uLocal_7362 = 10000;
	var uLocal_7363 = 0;
	var uLocal_7364 = 3;
	var uLocal_7365 = 500;
	var uLocal_7366 = 10000;
	var uLocal_7367 = 0;
	var uLocal_7368 = 3;
	var uLocal_7369 = 500;
	var uLocal_7370 = 10000;
	var uLocal_7371 = 0;
	var uLocal_7372 = 3;
	var uLocal_7373 = 500;
	var uLocal_7374 = 10000;
	var uLocal_7375 = 0;
	var uLocal_7376 = 3;
	var uLocal_7377 = 500;
	var uLocal_7378 = 10000;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 0;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 3;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = -1;
	var uLocal_7392 = 0;
	var uLocal_7393 = 5;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 10;
	var uLocal_7405 = 3;
	var uLocal_7406 = 500;
	var uLocal_7407 = 10000;
	var uLocal_7408 = 0;
	var uLocal_7409 = 3;
	var uLocal_7410 = 500;
	var uLocal_7411 = 10000;
	var uLocal_7412 = 0;
	var uLocal_7413 = 3;
	var uLocal_7414 = 500;
	var uLocal_7415 = 10000;
	var uLocal_7416 = 0;
	var uLocal_7417 = 3;
	var uLocal_7418 = 500;
	var uLocal_7419 = 10000;
	var uLocal_7420 = 0;
	var uLocal_7421 = 3;
	var uLocal_7422 = 500;
	var uLocal_7423 = 10000;
	var uLocal_7424 = 0;
	var uLocal_7425 = 3;
	var uLocal_7426 = 500;
	var uLocal_7427 = 10000;
	var uLocal_7428 = 0;
	var uLocal_7429 = 3;
	var uLocal_7430 = 500;
	var uLocal_7431 = 10000;
	var uLocal_7432 = 0;
	var uLocal_7433 = 3;
	var uLocal_7434 = 500;
	var uLocal_7435 = 10000;
	var uLocal_7436 = 0;
	var uLocal_7437 = 3;
	var uLocal_7438 = 500;
	var uLocal_7439 = 10000;
	var uLocal_7440 = 0;
	var uLocal_7441 = 3;
	var uLocal_7442 = 500;
	var uLocal_7443 = 10000;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 0;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 3;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = -1;
	var uLocal_7457 = 0;
	var uLocal_7458 = 5;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 10;
	var uLocal_7470 = 3;
	var uLocal_7471 = 500;
	var uLocal_7472 = 10000;
	var uLocal_7473 = 0;
	var uLocal_7474 = 3;
	var uLocal_7475 = 500;
	var uLocal_7476 = 10000;
	var uLocal_7477 = 0;
	var uLocal_7478 = 3;
	var uLocal_7479 = 500;
	var uLocal_7480 = 10000;
	var uLocal_7481 = 0;
	var uLocal_7482 = 3;
	var uLocal_7483 = 500;
	var uLocal_7484 = 10000;
	var uLocal_7485 = 0;
	var uLocal_7486 = 3;
	var uLocal_7487 = 500;
	var uLocal_7488 = 10000;
	var uLocal_7489 = 0;
	var uLocal_7490 = 3;
	var uLocal_7491 = 500;
	var uLocal_7492 = 10000;
	var uLocal_7493 = 0;
	var uLocal_7494 = 3;
	var uLocal_7495 = 500;
	var uLocal_7496 = 10000;
	var uLocal_7497 = 0;
	var uLocal_7498 = 3;
	var uLocal_7499 = 500;
	var uLocal_7500 = 10000;
	var uLocal_7501 = 0;
	var uLocal_7502 = 3;
	var uLocal_7503 = 500;
	var uLocal_7504 = 10000;
	var uLocal_7505 = 0;
	var uLocal_7506 = 3;
	var uLocal_7507 = 500;
	var uLocal_7508 = 10000;
	var uLocal_7509 = 0;
	var uLocal_7510 = 0;
	var uLocal_7511 = 0;
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = 3;
	var uLocal_7517 = 0;
	var uLocal_7518 = 0;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = -1;
	var uLocal_7522 = 0;
	var uLocal_7523 = 5;
	var uLocal_7524 = 0;
	var uLocal_7525 = 0;
	var uLocal_7526 = 0;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 0;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 0;
	var uLocal_7533 = 0;
	var uLocal_7534 = 10;
	var uLocal_7535 = 3;
	var uLocal_7536 = 500;
	var uLocal_7537 = 10000;
	var uLocal_7538 = 0;
	var uLocal_7539 = 3;
	var uLocal_7540 = 500;
	var uLocal_7541 = 10000;
	var uLocal_7542 = 0;
	var uLocal_7543 = 3;
	var uLocal_7544 = 500;
	var uLocal_7545 = 10000;
	var uLocal_7546 = 0;
	var uLocal_7547 = 3;
	var uLocal_7548 = 500;
	var uLocal_7549 = 10000;
	var uLocal_7550 = 0;
	var uLocal_7551 = 3;
	var uLocal_7552 = 500;
	var uLocal_7553 = 10000;
	var uLocal_7554 = 0;
	var uLocal_7555 = 3;
	var uLocal_7556 = 500;
	var uLocal_7557 = 10000;
	var uLocal_7558 = 0;
	var uLocal_7559 = 3;
	var uLocal_7560 = 500;
	var uLocal_7561 = 10000;
	var uLocal_7562 = 0;
	var uLocal_7563 = 3;
	var uLocal_7564 = 500;
	var uLocal_7565 = 10000;
	var uLocal_7566 = 0;
	var uLocal_7567 = 3;
	var uLocal_7568 = 500;
	var uLocal_7569 = 10000;
	var uLocal_7570 = 0;
	var uLocal_7571 = 3;
	var uLocal_7572 = 500;
	var uLocal_7573 = 10000;
	var uLocal_7574 = 0;
	var uLocal_7575 = 0;
	var uLocal_7576 = 0;
	var uLocal_7577 = 0;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 3;
	var uLocal_7582 = 0;
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = -1;
	var uLocal_7587 = 0;
	var uLocal_7588 = 5;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = 0;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 0;
	var uLocal_7598 = 0;
	var uLocal_7599 = 10;
	var uLocal_7600 = 3;
	var uLocal_7601 = 500;
	var uLocal_7602 = 10000;
	var uLocal_7603 = 0;
	var uLocal_7604 = 3;
	var uLocal_7605 = 500;
	var uLocal_7606 = 10000;
	var uLocal_7607 = 0;
	var uLocal_7608 = 3;
	var uLocal_7609 = 500;
	var uLocal_7610 = 10000;
	var uLocal_7611 = 0;
	var uLocal_7612 = 3;
	var uLocal_7613 = 500;
	var uLocal_7614 = 10000;
	var uLocal_7615 = 0;
	var uLocal_7616 = 3;
	var uLocal_7617 = 500;
	var uLocal_7618 = 10000;
	var uLocal_7619 = 0;
	var uLocal_7620 = 3;
	var uLocal_7621 = 500;
	var uLocal_7622 = 10000;
	var uLocal_7623 = 0;
	var uLocal_7624 = 3;
	var uLocal_7625 = 500;
	var uLocal_7626 = 10000;
	var uLocal_7627 = 0;
	var uLocal_7628 = 3;
	var uLocal_7629 = 500;
	var uLocal_7630 = 10000;
	var uLocal_7631 = 0;
	var uLocal_7632 = 3;
	var uLocal_7633 = 500;
	var uLocal_7634 = 10000;
	var uLocal_7635 = 0;
	var uLocal_7636 = 3;
	var uLocal_7637 = 500;
	var uLocal_7638 = 10000;
	var uLocal_7639 = 0;
	var uLocal_7640 = 0;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 3;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = -1;
	var uLocal_7652 = 0;
	var uLocal_7653 = 5;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 10;
	var uLocal_7665 = 3;
	var uLocal_7666 = 500;
	var uLocal_7667 = 10000;
	var uLocal_7668 = 0;
	var uLocal_7669 = 3;
	var uLocal_7670 = 500;
	var uLocal_7671 = 10000;
	var uLocal_7672 = 0;
	var uLocal_7673 = 3;
	var uLocal_7674 = 500;
	var uLocal_7675 = 10000;
	var uLocal_7676 = 0;
	var uLocal_7677 = 3;
	var uLocal_7678 = 500;
	var uLocal_7679 = 10000;
	var uLocal_7680 = 0;
	var uLocal_7681 = 3;
	var uLocal_7682 = 500;
	var uLocal_7683 = 10000;
	var uLocal_7684 = 0;
	var uLocal_7685 = 3;
	var uLocal_7686 = 500;
	var uLocal_7687 = 10000;
	var uLocal_7688 = 0;
	var uLocal_7689 = 3;
	var uLocal_7690 = 500;
	var uLocal_7691 = 10000;
	var uLocal_7692 = 0;
	var uLocal_7693 = 3;
	var uLocal_7694 = 500;
	var uLocal_7695 = 10000;
	var uLocal_7696 = 0;
	var uLocal_7697 = 3;
	var uLocal_7698 = 500;
	var uLocal_7699 = 10000;
	var uLocal_7700 = 0;
	var uLocal_7701 = 3;
	var uLocal_7702 = 500;
	var uLocal_7703 = 10000;
	var uLocal_7704 = 0;
	var uLocal_7705 = 0;
	var uLocal_7706 = 0;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = 3;
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = -1;
	var uLocal_7717 = 0;
	var uLocal_7718 = 5;
	var uLocal_7719 = 0;
	var uLocal_7720 = 0;
	var uLocal_7721 = 0;
	var uLocal_7722 = 0;
	var uLocal_7723 = 0;
	var uLocal_7724 = 0;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 10;
	var uLocal_7730 = 3;
	var uLocal_7731 = 500;
	var uLocal_7732 = 10000;
	var uLocal_7733 = 0;
	var uLocal_7734 = 3;
	var uLocal_7735 = 500;
	var uLocal_7736 = 10000;
	var uLocal_7737 = 0;
	var uLocal_7738 = 3;
	var uLocal_7739 = 500;
	var uLocal_7740 = 10000;
	var uLocal_7741 = 0;
	var uLocal_7742 = 3;
	var uLocal_7743 = 500;
	var uLocal_7744 = 10000;
	var uLocal_7745 = 0;
	var uLocal_7746 = 3;
	var uLocal_7747 = 500;
	var uLocal_7748 = 10000;
	var uLocal_7749 = 0;
	var uLocal_7750 = 3;
	var uLocal_7751 = 500;
	var uLocal_7752 = 10000;
	var uLocal_7753 = 0;
	var uLocal_7754 = 3;
	var uLocal_7755 = 500;
	var uLocal_7756 = 10000;
	var uLocal_7757 = 0;
	var uLocal_7758 = 3;
	var uLocal_7759 = 500;
	var uLocal_7760 = 10000;
	var uLocal_7761 = 0;
	var uLocal_7762 = 3;
	var uLocal_7763 = 500;
	var uLocal_7764 = 10000;
	var uLocal_7765 = 0;
	var uLocal_7766 = 3;
	var uLocal_7767 = 500;
	var uLocal_7768 = 10000;
	var uLocal_7769 = 0;
	var uLocal_7770 = 0;
	var uLocal_7771 = 0;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = 3;
	var uLocal_7777 = 0;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = -1;
	var uLocal_7782 = 0;
	var uLocal_7783 = 5;
	var uLocal_7784 = 0;
	var uLocal_7785 = 0;
	var uLocal_7786 = 0;
	var uLocal_7787 = 0;
	var uLocal_7788 = 0;
	var uLocal_7789 = 0;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 10;
	var uLocal_7795 = 3;
	var uLocal_7796 = 500;
	var uLocal_7797 = 10000;
	var uLocal_7798 = 0;
	var uLocal_7799 = 3;
	var uLocal_7800 = 500;
	var uLocal_7801 = 10000;
	var uLocal_7802 = 0;
	var uLocal_7803 = 3;
	var uLocal_7804 = 500;
	var uLocal_7805 = 10000;
	var uLocal_7806 = 0;
	var uLocal_7807 = 3;
	var uLocal_7808 = 500;
	var uLocal_7809 = 10000;
	var uLocal_7810 = 0;
	var uLocal_7811 = 3;
	var uLocal_7812 = 500;
	var uLocal_7813 = 10000;
	var uLocal_7814 = 0;
	var uLocal_7815 = 3;
	var uLocal_7816 = 500;
	var uLocal_7817 = 10000;
	var uLocal_7818 = 0;
	var uLocal_7819 = 3;
	var uLocal_7820 = 500;
	var uLocal_7821 = 10000;
	var uLocal_7822 = 0;
	var uLocal_7823 = 3;
	var uLocal_7824 = 500;
	var uLocal_7825 = 10000;
	var uLocal_7826 = 0;
	var uLocal_7827 = 3;
	var uLocal_7828 = 500;
	var uLocal_7829 = 10000;
	var uLocal_7830 = 0;
	var uLocal_7831 = 3;
	var uLocal_7832 = 500;
	var uLocal_7833 = 10000;
	var uLocal_7834 = 0;
	var uLocal_7835 = 0;
	var uLocal_7836 = 0;
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = 3;
	var uLocal_7842 = 0;
	var uLocal_7843 = 0;
	var uLocal_7844 = 0;
	var uLocal_7845 = 0;
	var uLocal_7846 = -1;
	var uLocal_7847 = 0;
	var uLocal_7848 = 5;
	var uLocal_7849 = 0;
	var uLocal_7850 = 0;
	var uLocal_7851 = 0;
	var uLocal_7852 = 0;
	var uLocal_7853 = 0;
	var uLocal_7854 = 0;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 0;
	var uLocal_7858 = 0;
	var uLocal_7859 = 10;
	var uLocal_7860 = 3;
	var uLocal_7861 = 500;
	var uLocal_7862 = 10000;
	var uLocal_7863 = 0;
	var uLocal_7864 = 3;
	var uLocal_7865 = 500;
	var uLocal_7866 = 10000;
	var uLocal_7867 = 0;
	var uLocal_7868 = 3;
	var uLocal_7869 = 500;
	var uLocal_7870 = 10000;
	var uLocal_7871 = 0;
	var uLocal_7872 = 3;
	var uLocal_7873 = 500;
	var uLocal_7874 = 10000;
	var uLocal_7875 = 0;
	var uLocal_7876 = 3;
	var uLocal_7877 = 500;
	var uLocal_7878 = 10000;
	var uLocal_7879 = 0;
	var uLocal_7880 = 3;
	var uLocal_7881 = 500;
	var uLocal_7882 = 10000;
	var uLocal_7883 = 0;
	var uLocal_7884 = 3;
	var uLocal_7885 = 500;
	var uLocal_7886 = 10000;
	var uLocal_7887 = 0;
	var uLocal_7888 = 3;
	var uLocal_7889 = 500;
	var uLocal_7890 = 10000;
	var uLocal_7891 = 0;
	var uLocal_7892 = 3;
	var uLocal_7893 = 500;
	var uLocal_7894 = 10000;
	var uLocal_7895 = 0;
	var uLocal_7896 = 3;
	var uLocal_7897 = 500;
	var uLocal_7898 = 10000;
	var uLocal_7899 = 0;
	var uLocal_7900 = 0;
	var uLocal_7901 = 0;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 3;
	var uLocal_7907 = 0;
	var uLocal_7908 = 0;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = -1;
	var uLocal_7912 = 0;
	var uLocal_7913 = 5;
	var uLocal_7914 = 0;
	var uLocal_7915 = 0;
	var uLocal_7916 = 0;
	var uLocal_7917 = 0;
	var uLocal_7918 = 0;
	var uLocal_7919 = 0;
	var uLocal_7920 = 0;
	var uLocal_7921 = 0;
	var uLocal_7922 = 0;
	var uLocal_7923 = 0;
	var uLocal_7924 = 10;
	var uLocal_7925 = 3;
	var uLocal_7926 = 500;
	var uLocal_7927 = 10000;
	var uLocal_7928 = 0;
	var uLocal_7929 = 3;
	var uLocal_7930 = 500;
	var uLocal_7931 = 10000;
	var uLocal_7932 = 0;
	var uLocal_7933 = 3;
	var uLocal_7934 = 500;
	var uLocal_7935 = 10000;
	var uLocal_7936 = 0;
	var uLocal_7937 = 3;
	var uLocal_7938 = 500;
	var uLocal_7939 = 10000;
	var uLocal_7940 = 0;
	var uLocal_7941 = 3;
	var uLocal_7942 = 500;
	var uLocal_7943 = 10000;
	var uLocal_7944 = 0;
	var uLocal_7945 = 3;
	var uLocal_7946 = 500;
	var uLocal_7947 = 10000;
	var uLocal_7948 = 0;
	var uLocal_7949 = 3;
	var uLocal_7950 = 500;
	var uLocal_7951 = 10000;
	var uLocal_7952 = 0;
	var uLocal_7953 = 3;
	var uLocal_7954 = 500;
	var uLocal_7955 = 10000;
	var uLocal_7956 = 0;
	var uLocal_7957 = 3;
	var uLocal_7958 = 500;
	var uLocal_7959 = 10000;
	var uLocal_7960 = 0;
	var uLocal_7961 = 3;
	var uLocal_7962 = 500;
	var uLocal_7963 = 10000;
	var uLocal_7964 = 0;
	var uLocal_7965 = 0;
	var uLocal_7966 = 0;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 3;
	var uLocal_7972 = 0;
	var uLocal_7973 = 0;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = -1;
	var uLocal_7977 = 0;
	var uLocal_7978 = 5;
	var uLocal_7979 = 0;
	var uLocal_7980 = 0;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 0;
	var uLocal_7989 = 10;
	var uLocal_7990 = 3;
	var uLocal_7991 = 500;
	var uLocal_7992 = 10000;
	var uLocal_7993 = 0;
	var uLocal_7994 = 3;
	var uLocal_7995 = 500;
	var uLocal_7996 = 10000;
	var uLocal_7997 = 0;
	var uLocal_7998 = 3;
	var uLocal_7999 = 500;
	var uLocal_8000 = 10000;
	var uLocal_8001 = 0;
	var uLocal_8002 = 3;
	var uLocal_8003 = 500;
	var uLocal_8004 = 10000;
	var uLocal_8005 = 0;
	var uLocal_8006 = 3;
	var uLocal_8007 = 500;
	var uLocal_8008 = 10000;
	var uLocal_8009 = 0;
	var uLocal_8010 = 3;
	var uLocal_8011 = 500;
	var uLocal_8012 = 10000;
	var uLocal_8013 = 0;
	var uLocal_8014 = 3;
	var uLocal_8015 = 500;
	var uLocal_8016 = 10000;
	var uLocal_8017 = 0;
	var uLocal_8018 = 3;
	var uLocal_8019 = 500;
	var uLocal_8020 = 10000;
	var uLocal_8021 = 0;
	var uLocal_8022 = 3;
	var uLocal_8023 = 500;
	var uLocal_8024 = 10000;
	var uLocal_8025 = 0;
	var uLocal_8026 = 3;
	var uLocal_8027 = 500;
	var uLocal_8028 = 10000;
	var uLocal_8029 = 0;
	var uLocal_8030 = 0;
	var uLocal_8031 = 0;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 3;
	var uLocal_8037 = 0;
	var uLocal_8038 = 0;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = -1;
	var uLocal_8042 = 0;
	var uLocal_8043 = 5;
	var uLocal_8044 = 0;
	var uLocal_8045 = 0;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 0;
	var uLocal_8049 = 0;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = 0;
	var uLocal_8054 = 10;
	var uLocal_8055 = 3;
	var uLocal_8056 = 500;
	var uLocal_8057 = 10000;
	var uLocal_8058 = 0;
	var uLocal_8059 = 3;
	var uLocal_8060 = 500;
	var uLocal_8061 = 10000;
	var uLocal_8062 = 0;
	var uLocal_8063 = 3;
	var uLocal_8064 = 500;
	var uLocal_8065 = 10000;
	var uLocal_8066 = 0;
	var uLocal_8067 = 3;
	var uLocal_8068 = 500;
	var uLocal_8069 = 10000;
	var uLocal_8070 = 0;
	var uLocal_8071 = 3;
	var uLocal_8072 = 500;
	var uLocal_8073 = 10000;
	var uLocal_8074 = 0;
	var uLocal_8075 = 3;
	var uLocal_8076 = 500;
	var uLocal_8077 = 10000;
	var uLocal_8078 = 0;
	var uLocal_8079 = 3;
	var uLocal_8080 = 500;
	var uLocal_8081 = 10000;
	var uLocal_8082 = 0;
	var uLocal_8083 = 3;
	var uLocal_8084 = 500;
	var uLocal_8085 = 10000;
	var uLocal_8086 = 0;
	var uLocal_8087 = 3;
	var uLocal_8088 = 500;
	var uLocal_8089 = 10000;
	var uLocal_8090 = 0;
	var uLocal_8091 = 3;
	var uLocal_8092 = 500;
	var uLocal_8093 = 10000;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 3;
	var uLocal_8102 = 0;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = -1;
	var uLocal_8107 = 0;
	var uLocal_8108 = 5;
	var uLocal_8109 = 0;
	var uLocal_8110 = 0;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
	var uLocal_8113 = 0;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 10;
	var uLocal_8120 = 3;
	var uLocal_8121 = 500;
	var uLocal_8122 = 10000;
	var uLocal_8123 = 0;
	var uLocal_8124 = 3;
	var uLocal_8125 = 500;
	var uLocal_8126 = 10000;
	var uLocal_8127 = 0;
	var uLocal_8128 = 3;
	var uLocal_8129 = 500;
	var uLocal_8130 = 10000;
	var uLocal_8131 = 0;
	var uLocal_8132 = 3;
	var uLocal_8133 = 500;
	var uLocal_8134 = 10000;
	var uLocal_8135 = 0;
	var uLocal_8136 = 3;
	var uLocal_8137 = 500;
	var uLocal_8138 = 10000;
	var uLocal_8139 = 0;
	var uLocal_8140 = 3;
	var uLocal_8141 = 500;
	var uLocal_8142 = 10000;
	var uLocal_8143 = 0;
	var uLocal_8144 = 3;
	var uLocal_8145 = 500;
	var uLocal_8146 = 10000;
	var uLocal_8147 = 0;
	var uLocal_8148 = 3;
	var uLocal_8149 = 500;
	var uLocal_8150 = 10000;
	var uLocal_8151 = 0;
	var uLocal_8152 = 3;
	var uLocal_8153 = 500;
	var uLocal_8154 = 10000;
	var uLocal_8155 = 0;
	var uLocal_8156 = 3;
	var uLocal_8157 = 500;
	var uLocal_8158 = 10000;
	var uLocal_8159 = 0;
	var uLocal_8160 = 0;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 3;
	var uLocal_8167 = 0;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = -1;
	var uLocal_8172 = 0;
	var uLocal_8173 = 5;
	var uLocal_8174 = 0;
	var uLocal_8175 = 0;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 0;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 10;
	var uLocal_8185 = 3;
	var uLocal_8186 = 500;
	var uLocal_8187 = 10000;
	var uLocal_8188 = 0;
	var uLocal_8189 = 3;
	var uLocal_8190 = 500;
	var uLocal_8191 = 10000;
	var uLocal_8192 = 0;
	var uLocal_8193 = 3;
	var uLocal_8194 = 500;
	var uLocal_8195 = 10000;
	var uLocal_8196 = 0;
	var uLocal_8197 = 3;
	var uLocal_8198 = 500;
	var uLocal_8199 = 10000;
	var uLocal_8200 = 0;
	var uLocal_8201 = 3;
	var uLocal_8202 = 500;
	var uLocal_8203 = 10000;
	var uLocal_8204 = 0;
	var uLocal_8205 = 3;
	var uLocal_8206 = 500;
	var uLocal_8207 = 10000;
	var uLocal_8208 = 0;
	var uLocal_8209 = 3;
	var uLocal_8210 = 500;
	var uLocal_8211 = 10000;
	var uLocal_8212 = 0;
	var uLocal_8213 = 3;
	var uLocal_8214 = 500;
	var uLocal_8215 = 10000;
	var uLocal_8216 = 0;
	var uLocal_8217 = 3;
	var uLocal_8218 = 500;
	var uLocal_8219 = 10000;
	var uLocal_8220 = 0;
	var uLocal_8221 = 3;
	var uLocal_8222 = 500;
	var uLocal_8223 = 10000;
	var uLocal_8224 = 0;
	var uLocal_8225 = 0;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 3;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = -1;
	var uLocal_8237 = 0;
	var uLocal_8238 = 5;
	var uLocal_8239 = 0;
	var uLocal_8240 = 0;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = 0;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 10;
	var uLocal_8250 = 3;
	var uLocal_8251 = 500;
	var uLocal_8252 = 10000;
	var uLocal_8253 = 0;
	var uLocal_8254 = 3;
	var uLocal_8255 = 500;
	var uLocal_8256 = 10000;
	var uLocal_8257 = 0;
	var uLocal_8258 = 3;
	var uLocal_8259 = 500;
	var uLocal_8260 = 10000;
	var uLocal_8261 = 0;
	var uLocal_8262 = 3;
	var uLocal_8263 = 500;
	var uLocal_8264 = 10000;
	var uLocal_8265 = 0;
	var uLocal_8266 = 3;
	var uLocal_8267 = 500;
	var uLocal_8268 = 10000;
	var uLocal_8269 = 0;
	var uLocal_8270 = 3;
	var uLocal_8271 = 500;
	var uLocal_8272 = 10000;
	var uLocal_8273 = 0;
	var uLocal_8274 = 3;
	var uLocal_8275 = 500;
	var uLocal_8276 = 10000;
	var uLocal_8277 = 0;
	var uLocal_8278 = 3;
	var uLocal_8279 = 500;
	var uLocal_8280 = 10000;
	var uLocal_8281 = 0;
	var uLocal_8282 = 3;
	var uLocal_8283 = 500;
	var uLocal_8284 = 10000;
	var uLocal_8285 = 0;
	var uLocal_8286 = 3;
	var uLocal_8287 = 500;
	var uLocal_8288 = 10000;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 3;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = -1;
	var uLocal_8302 = 0;
	var uLocal_8303 = 5;
	var uLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 10;
	var uLocal_8315 = 3;
	var uLocal_8316 = 500;
	var uLocal_8317 = 10000;
	var uLocal_8318 = 0;
	var uLocal_8319 = 3;
	var uLocal_8320 = 500;
	var uLocal_8321 = 10000;
	var uLocal_8322 = 0;
	var uLocal_8323 = 3;
	var uLocal_8324 = 500;
	var uLocal_8325 = 10000;
	var uLocal_8326 = 0;
	var uLocal_8327 = 3;
	var uLocal_8328 = 500;
	var uLocal_8329 = 10000;
	var uLocal_8330 = 0;
	var uLocal_8331 = 3;
	var uLocal_8332 = 500;
	var uLocal_8333 = 10000;
	var uLocal_8334 = 0;
	var uLocal_8335 = 3;
	var uLocal_8336 = 500;
	var uLocal_8337 = 10000;
	var uLocal_8338 = 0;
	var uLocal_8339 = 3;
	var uLocal_8340 = 500;
	var uLocal_8341 = 10000;
	var uLocal_8342 = 0;
	var uLocal_8343 = 3;
	var uLocal_8344 = 500;
	var uLocal_8345 = 10000;
	var uLocal_8346 = 0;
	var uLocal_8347 = 3;
	var uLocal_8348 = 500;
	var uLocal_8349 = 10000;
	var uLocal_8350 = 0;
	var uLocal_8351 = 3;
	var uLocal_8352 = 500;
	var uLocal_8353 = 10000;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 0;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 3;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = -1;
	var uLocal_8367 = 0;
	var uLocal_8368 = 5;
	var uLocal_8369 = 0;
	var uLocal_8370 = 0;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 0;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 10;
	var uLocal_8380 = 3;
	var uLocal_8381 = 500;
	var uLocal_8382 = 10000;
	var uLocal_8383 = 0;
	var uLocal_8384 = 3;
	var uLocal_8385 = 500;
	var uLocal_8386 = 10000;
	var uLocal_8387 = 0;
	var uLocal_8388 = 3;
	var uLocal_8389 = 500;
	var uLocal_8390 = 10000;
	var uLocal_8391 = 0;
	var uLocal_8392 = 3;
	var uLocal_8393 = 500;
	var uLocal_8394 = 10000;
	var uLocal_8395 = 0;
	var uLocal_8396 = 3;
	var uLocal_8397 = 500;
	var uLocal_8398 = 10000;
	var uLocal_8399 = 0;
	var uLocal_8400 = 3;
	var uLocal_8401 = 500;
	var uLocal_8402 = 10000;
	var uLocal_8403 = 0;
	var uLocal_8404 = 3;
	var uLocal_8405 = 500;
	var uLocal_8406 = 10000;
	var uLocal_8407 = 0;
	var uLocal_8408 = 3;
	var uLocal_8409 = 500;
	var uLocal_8410 = 10000;
	var uLocal_8411 = 0;
	var uLocal_8412 = 3;
	var uLocal_8413 = 500;
	var uLocal_8414 = 10000;
	var uLocal_8415 = 0;
	var uLocal_8416 = 3;
	var uLocal_8417 = 500;
	var uLocal_8418 = 10000;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 3;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = -1;
	var uLocal_8432 = 0;
	var uLocal_8433 = 5;
	var uLocal_8434 = 0;
	var uLocal_8435 = 0;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 0;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 10;
	var uLocal_8445 = 3;
	var uLocal_8446 = 500;
	var uLocal_8447 = 10000;
	var uLocal_8448 = 0;
	var uLocal_8449 = 3;
	var uLocal_8450 = 500;
	var uLocal_8451 = 10000;
	var uLocal_8452 = 0;
	var uLocal_8453 = 3;
	var uLocal_8454 = 500;
	var uLocal_8455 = 10000;
	var uLocal_8456 = 0;
	var uLocal_8457 = 3;
	var uLocal_8458 = 500;
	var uLocal_8459 = 10000;
	var uLocal_8460 = 0;
	var uLocal_8461 = 3;
	var uLocal_8462 = 500;
	var uLocal_8463 = 10000;
	var uLocal_8464 = 0;
	var uLocal_8465 = 3;
	var uLocal_8466 = 500;
	var uLocal_8467 = 10000;
	var uLocal_8468 = 0;
	var uLocal_8469 = 3;
	var uLocal_8470 = 500;
	var uLocal_8471 = 10000;
	var uLocal_8472 = 0;
	var uLocal_8473 = 3;
	var uLocal_8474 = 500;
	var uLocal_8475 = 10000;
	var uLocal_8476 = 0;
	var uLocal_8477 = 3;
	var uLocal_8478 = 500;
	var uLocal_8479 = 10000;
	var uLocal_8480 = 0;
	var uLocal_8481 = 3;
	var uLocal_8482 = 500;
	var uLocal_8483 = 10000;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 3;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = -1;
	var uLocal_8497 = 0;
	var uLocal_8498 = 5;
	var uLocal_8499 = 0;
	var uLocal_8500 = 0;
	var uLocal_8501 = 0;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = 10;
	var uLocal_8510 = 3;
	var uLocal_8511 = 500;
	var uLocal_8512 = 10000;
	var uLocal_8513 = 0;
	var uLocal_8514 = 3;
	var uLocal_8515 = 500;
	var uLocal_8516 = 10000;
	var uLocal_8517 = 0;
	var uLocal_8518 = 3;
	var uLocal_8519 = 500;
	var uLocal_8520 = 10000;
	var uLocal_8521 = 0;
	var uLocal_8522 = 3;
	var uLocal_8523 = 500;
	var uLocal_8524 = 10000;
	var uLocal_8525 = 0;
	var uLocal_8526 = 3;
	var uLocal_8527 = 500;
	var uLocal_8528 = 10000;
	var uLocal_8529 = 0;
	var uLocal_8530 = 3;
	var uLocal_8531 = 500;
	var uLocal_8532 = 10000;
	var uLocal_8533 = 0;
	var uLocal_8534 = 3;
	var uLocal_8535 = 500;
	var uLocal_8536 = 10000;
	var uLocal_8537 = 0;
	var uLocal_8538 = 3;
	var uLocal_8539 = 500;
	var uLocal_8540 = 10000;
	var uLocal_8541 = 0;
	var uLocal_8542 = 3;
	var uLocal_8543 = 500;
	var uLocal_8544 = 10000;
	var uLocal_8545 = 0;
	var uLocal_8546 = 3;
	var uLocal_8547 = 500;
	var uLocal_8548 = 10000;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 3;
	var uLocal_8557 = 0;
	var uLocal_8558 = 0;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = -1;
	var uLocal_8562 = 0;
	var uLocal_8563 = 5;
	var uLocal_8564 = 0;
	var uLocal_8565 = 0;
	var uLocal_8566 = 0;
	var uLocal_8567 = 0;
	var uLocal_8568 = 0;
	var uLocal_8569 = 0;
	var uLocal_8570 = 0;
	var uLocal_8571 = 0;
	var uLocal_8572 = 0;
	var uLocal_8573 = 0;
	var uLocal_8574 = 10;
	var uLocal_8575 = 3;
	var uLocal_8576 = 500;
	var uLocal_8577 = 10000;
	var uLocal_8578 = 0;
	var uLocal_8579 = 3;
	var uLocal_8580 = 500;
	var uLocal_8581 = 10000;
	var uLocal_8582 = 0;
	var uLocal_8583 = 3;
	var uLocal_8584 = 500;
	var uLocal_8585 = 10000;
	var uLocal_8586 = 0;
	var uLocal_8587 = 3;
	var uLocal_8588 = 500;
	var uLocal_8589 = 10000;
	var uLocal_8590 = 0;
	var uLocal_8591 = 3;
	var uLocal_8592 = 500;
	var uLocal_8593 = 10000;
	var uLocal_8594 = 0;
	var uLocal_8595 = 3;
	var uLocal_8596 = 500;
	var uLocal_8597 = 10000;
	var uLocal_8598 = 0;
	var uLocal_8599 = 3;
	var uLocal_8600 = 500;
	var uLocal_8601 = 10000;
	var uLocal_8602 = 0;
	var uLocal_8603 = 3;
	var uLocal_8604 = 500;
	var uLocal_8605 = 10000;
	var uLocal_8606 = 0;
	var uLocal_8607 = 3;
	var uLocal_8608 = 500;
	var uLocal_8609 = 10000;
	var uLocal_8610 = 0;
	var uLocal_8611 = 3;
	var uLocal_8612 = 500;
	var uLocal_8613 = 10000;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 3;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = -1;
	var uLocal_8627 = 0;
	var uLocal_8628 = 5;
	var uLocal_8629 = 0;
	var uLocal_8630 = 0;
	var uLocal_8631 = 0;
	var uLocal_8632 = 0;
	var uLocal_8633 = 0;
	var uLocal_8634 = 0;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 10;
	var uLocal_8640 = 3;
	var uLocal_8641 = 500;
	var uLocal_8642 = 10000;
	var uLocal_8643 = 0;
	var uLocal_8644 = 3;
	var uLocal_8645 = 500;
	var uLocal_8646 = 10000;
	var uLocal_8647 = 0;
	var uLocal_8648 = 3;
	var uLocal_8649 = 500;
	var uLocal_8650 = 10000;
	var uLocal_8651 = 0;
	var uLocal_8652 = 3;
	var uLocal_8653 = 500;
	var uLocal_8654 = 10000;
	var uLocal_8655 = 0;
	var uLocal_8656 = 3;
	var uLocal_8657 = 500;
	var uLocal_8658 = 10000;
	var uLocal_8659 = 0;
	var uLocal_8660 = 3;
	var uLocal_8661 = 500;
	var uLocal_8662 = 10000;
	var uLocal_8663 = 0;
	var uLocal_8664 = 3;
	var uLocal_8665 = 500;
	var uLocal_8666 = 10000;
	var uLocal_8667 = 0;
	var uLocal_8668 = 3;
	var uLocal_8669 = 500;
	var uLocal_8670 = 10000;
	var uLocal_8671 = 0;
	var uLocal_8672 = 3;
	var uLocal_8673 = 500;
	var uLocal_8674 = 10000;
	var uLocal_8675 = 0;
	var uLocal_8676 = 3;
	var uLocal_8677 = 500;
	var uLocal_8678 = 10000;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 3;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = -1;
	var uLocal_8692 = 0;
	var uLocal_8693 = 5;
	var uLocal_8694 = 0;
	var uLocal_8695 = 0;
	var uLocal_8696 = 0;
	var uLocal_8697 = 0;
	var uLocal_8698 = 0;
	var uLocal_8699 = 0;
	var uLocal_8700 = 0;
	var uLocal_8701 = 0;
	var uLocal_8702 = 0;
	var uLocal_8703 = 0;
	var uLocal_8704 = 10;
	var uLocal_8705 = 3;
	var uLocal_8706 = 500;
	var uLocal_8707 = 10000;
	var uLocal_8708 = 0;
	var uLocal_8709 = 3;
	var uLocal_8710 = 500;
	var uLocal_8711 = 10000;
	var uLocal_8712 = 0;
	var uLocal_8713 = 3;
	var uLocal_8714 = 500;
	var uLocal_8715 = 10000;
	var uLocal_8716 = 0;
	var uLocal_8717 = 3;
	var uLocal_8718 = 500;
	var uLocal_8719 = 10000;
	var uLocal_8720 = 0;
	var uLocal_8721 = 3;
	var uLocal_8722 = 500;
	var uLocal_8723 = 10000;
	var uLocal_8724 = 0;
	var uLocal_8725 = 3;
	var uLocal_8726 = 500;
	var uLocal_8727 = 10000;
	var uLocal_8728 = 0;
	var uLocal_8729 = 3;
	var uLocal_8730 = 500;
	var uLocal_8731 = 10000;
	var uLocal_8732 = 0;
	var uLocal_8733 = 3;
	var uLocal_8734 = 500;
	var uLocal_8735 = 10000;
	var uLocal_8736 = 0;
	var uLocal_8737 = 3;
	var uLocal_8738 = 500;
	var uLocal_8739 = 10000;
	var uLocal_8740 = 0;
	var uLocal_8741 = 3;
	var uLocal_8742 = 500;
	var uLocal_8743 = 10000;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 3;
	var uLocal_8752 = 0;
	var uLocal_8753 = 0;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = -1;
	var uLocal_8757 = 0;
	var uLocal_8758 = 5;
	var uLocal_8759 = 0;
	var uLocal_8760 = 0;
	var uLocal_8761 = 0;
	var uLocal_8762 = 0;
	var uLocal_8763 = 0;
	var uLocal_8764 = 0;
	var uLocal_8765 = 0;
	var uLocal_8766 = 0;
	var uLocal_8767 = 0;
	var uLocal_8768 = 0;
	var uLocal_8769 = 10;
	var uLocal_8770 = 3;
	var uLocal_8771 = 500;
	var uLocal_8772 = 10000;
	var uLocal_8773 = 0;
	var uLocal_8774 = 3;
	var uLocal_8775 = 500;
	var uLocal_8776 = 10000;
	var uLocal_8777 = 0;
	var uLocal_8778 = 3;
	var uLocal_8779 = 500;
	var uLocal_8780 = 10000;
	var uLocal_8781 = 0;
	var uLocal_8782 = 3;
	var uLocal_8783 = 500;
	var uLocal_8784 = 10000;
	var uLocal_8785 = 0;
	var uLocal_8786 = 3;
	var uLocal_8787 = 500;
	var uLocal_8788 = 10000;
	var uLocal_8789 = 0;
	var uLocal_8790 = 3;
	var uLocal_8791 = 500;
	var uLocal_8792 = 10000;
	var uLocal_8793 = 0;
	var uLocal_8794 = 3;
	var uLocal_8795 = 500;
	var uLocal_8796 = 10000;
	var uLocal_8797 = 0;
	var uLocal_8798 = 3;
	var uLocal_8799 = 500;
	var uLocal_8800 = 10000;
	var uLocal_8801 = 0;
	var uLocal_8802 = 3;
	var uLocal_8803 = 500;
	var uLocal_8804 = 10000;
	var uLocal_8805 = 0;
	var uLocal_8806 = 3;
	var uLocal_8807 = 500;
	var uLocal_8808 = 10000;
	var uLocal_8809 = 0;
	var uLocal_8810 = 0;
	var uLocal_8811 = 0;
	var uLocal_8812 = 1;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = 0;
	var uLocal_8817 = 0;
	var uLocal_8818 = 0;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = 0;
	var uLocal_8824 = 0;
	var uLocal_8825 = 65;
	var uLocal_8826 = 0;
	var uLocal_8827 = 0;
	var uLocal_8828 = 0;
	var uLocal_8829 = 0;
	var uLocal_8830 = 0;
	var uLocal_8831 = 0;
	var uLocal_8832 = 0;
	var uLocal_8833 = 0;
	var uLocal_8834 = 0;
	var uLocal_8835 = 0;
	var uLocal_8836 = 0;
	var uLocal_8837 = 0;
	var uLocal_8838 = 0;
	var uLocal_8839 = 0;
	var uLocal_8840 = 0;
	var uLocal_8841 = 0;
	var uLocal_8842 = 0;
	var uLocal_8843 = 0;
	var uLocal_8844 = 0;
	var uLocal_8845 = 0;
	var uLocal_8846 = 0;
	var uLocal_8847 = 0;
	var uLocal_8848 = 0;
	var uLocal_8849 = 0;
	var uLocal_8850 = 0;
	var uLocal_8851 = 0;
	var uLocal_8852 = 0;
	var uLocal_8853 = 0;
	var uLocal_8854 = 0;
	var uLocal_8855 = 0;
	var uLocal_8856 = 0;
	var uLocal_8857 = 0;
	var uLocal_8858 = 0;
	var uLocal_8859 = 0;
	var uLocal_8860 = 0;
	var uLocal_8861 = 0;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 0;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 0;
	var uLocal_8869 = 0;
	var uLocal_8870 = 0;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = 0;
	var uLocal_8874 = 0;
	var uLocal_8875 = 0;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
	var uLocal_8881 = 0;
	var uLocal_8882 = 0;
	var uLocal_8883 = 0;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 0;
	var uLocal_8887 = 0;
	var uLocal_8888 = 0;
	var uLocal_8889 = 0;
	var uLocal_8890 = 0;
	var uLocal_8891 = 0;
	var uLocal_8892 = 0;
	var uLocal_8893 = 0;
	var uLocal_8894 = 0;
	var uLocal_8895 = 0;
	var uLocal_8896 = 0;
	var uLocal_8897 = 0;
	var uLocal_8898 = 0;
	var uLocal_8899 = 0;
	var uLocal_8900 = 0;
	var uLocal_8901 = 0;
	var uLocal_8902 = 0;
	var uLocal_8903 = 0;
	var uLocal_8904 = 0;
	var uLocal_8905 = 0;
	var uLocal_8906 = 0;
	var uLocal_8907 = 0;
	var uLocal_8908 = 0;
	var uLocal_8909 = 0;
	var uLocal_8910 = 0;
	var uLocal_8911 = 0;
	var uLocal_8912 = 0;
	var uLocal_8913 = 0;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = 0;
	var uLocal_8918 = 0;
	var uLocal_8919 = 0;
	var uLocal_8920 = 0;
	var uLocal_8921 = 0;
	var uLocal_8922 = 0;
	var uLocal_8923 = 0;
	var uLocal_8924 = 0;
	var uLocal_8925 = 0;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 0;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 0;
	var uLocal_8933 = 0;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = 0;
	var uLocal_8939 = 0;
	var uLocal_8940 = 0;
	var uLocal_8941 = 0;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 0;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = 0;
	var uLocal_8954 = 0;
	var uLocal_8955 = 0;
	var uLocal_8956 = 0;
	var uLocal_8957 = 0;
	var uLocal_8958 = 0;
	var uLocal_8959 = 0;
	var uLocal_8960 = 0;
	var uLocal_8961 = 0;
	var uLocal_8962 = 0;
	var uLocal_8963 = 0;
	var uLocal_8964 = 0;
	var uLocal_8965 = 0;
	var uLocal_8966 = 0;
	var uLocal_8967 = 0;
	var uLocal_8968 = 0;
	var uLocal_8969 = 0;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = 0;
	var uLocal_8973 = 0;
	var uLocal_8974 = 0;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 0;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = 0;
	var uLocal_8983 = 0;
	var uLocal_8984 = 0;
	var uLocal_8985 = 0;
	var uLocal_8986 = 0;
	var uLocal_8987 = 0;
	var uLocal_8988 = 0;
	var uLocal_8989 = 0;
	var uLocal_8990 = 0;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 0;
	var uLocal_8995 = 0;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 0;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 0;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = 0;
	var uLocal_9023 = 0;
	var uLocal_9024 = 0;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 0;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 0;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 0;
	var uLocal_9047 = 0;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 0;
	var uLocal_9077 = 0;
	var uLocal_9078 = 0;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = 0;
	var uLocal_9084 = 0;
	var uLocal_9085 = 0;
	var uLocal_9086 = 0;
	var uLocal_9087 = 0;
	var uLocal_9088 = 0;
	var uLocal_9089 = 0;
	var uLocal_9090 = 0;
	var uLocal_9091 = 0;
	var uLocal_9092 = 0;
	var uLocal_9093 = 0;
	var uLocal_9094 = 0;
	var uLocal_9095 = 0;
	var uLocal_9096 = 0;
	var uLocal_9097 = 0;
	var uLocal_9098 = 0;
	var uLocal_9099 = 0;
	var uLocal_9100 = 0;
	var uLocal_9101 = 0;
	var uLocal_9102 = 0;
	var uLocal_9103 = 0;
	var uLocal_9104 = 0;
	var uLocal_9105 = 0;
	var uLocal_9106 = 0;
	var uLocal_9107 = 0;
	var uLocal_9108 = 0;
	var uLocal_9109 = 0;
	var uLocal_9110 = 0;
	var uLocal_9111 = 0;
	var uLocal_9112 = 0;
	var uLocal_9113 = 0;
	var uLocal_9114 = 0;
	var uLocal_9115 = 0;
	var uLocal_9116 = 0;
	var uLocal_9117 = 0;
	var uLocal_9118 = 0;
	var uLocal_9119 = 0;
	var uLocal_9120 = 0;
	var uLocal_9121 = 0;
	var uLocal_9122 = 0;
	var uLocal_9123 = 0;
	var uLocal_9124 = 0;
	var uLocal_9125 = 0;
	var uLocal_9126 = 0;
	var uLocal_9127 = 0;
	var uLocal_9128 = 0;
	var uLocal_9129 = 0;
	var uLocal_9130 = 0;
	var uLocal_9131 = 0;
	var uLocal_9132 = 0;
	var uLocal_9133 = 0;
	var uLocal_9134 = 0;
	var uLocal_9135 = 0;
	var uLocal_9136 = 0;
	var uLocal_9137 = 0;
	var uLocal_9138 = 0;
	var uLocal_9139 = 0;
	var uLocal_9140 = 0;
	var uLocal_9141 = 0;
	var uLocal_9142 = 0;
	var uLocal_9143 = 0;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = 0;
	var uLocal_9149 = 0;
	var uLocal_9150 = 0;
	var uLocal_9151 = 0;
	var uLocal_9152 = 0;
	var uLocal_9153 = 0;
	var uLocal_9154 = 0;
	var uLocal_9155 = 0;
	var uLocal_9156 = 0;
	var uLocal_9157 = 0;
	var uLocal_9158 = 0;
	var uLocal_9159 = 0;
	var uLocal_9160 = 0;
	var uLocal_9161 = 0;
	var uLocal_9162 = 0;
	var uLocal_9163 = 0;
	var uLocal_9164 = 0;
	var uLocal_9165 = 0;
	var uLocal_9166 = 0;
	var uLocal_9167 = 0;
	var uLocal_9168 = 0;
	var uLocal_9169 = 0;
	var uLocal_9170 = 0;
	var uLocal_9171 = 0;
	var uLocal_9172 = 0;
	var uLocal_9173 = 0;
	var uLocal_9174 = 0;
	var uLocal_9175 = 0;
	var uLocal_9176 = 0;
	var uLocal_9177 = 0;
	var uLocal_9178 = 0;
	var uLocal_9179 = 0;
	var uLocal_9180 = 0;
	var uLocal_9181 = 0;
	var uLocal_9182 = 0;
	var uLocal_9183 = 0;
	var uLocal_9184 = 0;
	var uLocal_9185 = 0;
	var uLocal_9186 = 0;
	var uLocal_9187 = 0;
	var uLocal_9188 = 0;
	var uLocal_9189 = 0;
	var uLocal_9190 = 0;
	var uLocal_9191 = 0;
	var uLocal_9192 = 0;
	var uLocal_9193 = 0;
	var uLocal_9194 = 0;
	var uLocal_9195 = 0;
	var uLocal_9196 = 0;
	var uLocal_9197 = 0;
	var uLocal_9198 = 0;
	var uLocal_9199 = 0;
	var uLocal_9200 = 0;
	var uLocal_9201 = 0;
	var uLocal_9202 = 0;
	var uLocal_9203 = 0;
	var uLocal_9204 = 0;
	var uLocal_9205 = 0;
	var uLocal_9206 = 0;
	var uLocal_9207 = 0;
	var uLocal_9208 = 0;
	var uLocal_9209 = 0;
	var uLocal_9210 = 0;
	var uLocal_9211 = 0;
	var uLocal_9212 = 0;
	var uLocal_9213 = 0;
	var uLocal_9214 = 0;
	var uLocal_9215 = 0;
	var uLocal_9216 = 0;
	var uLocal_9217 = 0;
	var uLocal_9218 = 0;
	var uLocal_9219 = 0;
	var uLocal_9220 = 0;
	var uLocal_9221 = 0;
	var uLocal_9222 = 0;
	var uLocal_9223 = 0;
	var uLocal_9224 = 0;
	var uLocal_9225 = 0;
	var uLocal_9226 = 0;
	var uLocal_9227 = 0;
	var uLocal_9228 = 0;
	var uLocal_9229 = 0;
	var uLocal_9230 = 0;
	var uLocal_9231 = 0;
	var uLocal_9232 = 0;
	var uLocal_9233 = 0;
	var uLocal_9234 = 0;
	var uLocal_9235 = 0;
	var uLocal_9236 = 0;
	var uLocal_9237 = 0;
	var uLocal_9238 = 0;
	var uLocal_9239 = 0;
	var uLocal_9240 = 0;
	var uLocal_9241 = 0;
	var uLocal_9242 = 0;
	var uLocal_9243 = 0;
	var uLocal_9244 = 0;
	var uLocal_9245 = 0;
	var uLocal_9246 = 0;
	var uLocal_9247 = 0;
	var uLocal_9248 = 0;
	var uLocal_9249 = 0;
	var uLocal_9250 = 0;
	var uLocal_9251 = 0;
	var uLocal_9252 = 0;
	var uLocal_9253 = 0;
	var uLocal_9254 = 0;
	var uLocal_9255 = 0;
	var uLocal_9256 = 0;
	var uLocal_9257 = 0;
	var uLocal_9258 = 0;
	var uLocal_9259 = 0;
	var uLocal_9260 = 0;
	var uLocal_9261 = 0;
	var uLocal_9262 = 0;
	var uLocal_9263 = 0;
	var uLocal_9264 = 0;
	var uLocal_9265 = 0;
	var uLocal_9266 = 0;
	var uLocal_9267 = 0;
	var uLocal_9268 = 0;
	var uLocal_9269 = 0;
	var uLocal_9270 = 0;
	var uLocal_9271 = 0;
	var uLocal_9272 = 0;
	var uLocal_9273 = 0;
	var uLocal_9274 = 0;
	var uLocal_9275 = 0;
	var uLocal_9276 = 0;
	var uLocal_9277 = 0;
	var uLocal_9278 = 0;
	var uLocal_9279 = 0;
	var uLocal_9280 = 0;
	var uLocal_9281 = 0;
	var uLocal_9282 = 0;
	var uLocal_9283 = 0;
	var uLocal_9284 = 0;
	var uLocal_9285 = 0;
	var uLocal_9286 = 0;
	var uLocal_9287 = 0;
	var uLocal_9288 = 0;
	var uLocal_9289 = 0;
	var uLocal_9290 = 0;
	var uLocal_9291 = 0;
	var uLocal_9292 = 0;
	var uLocal_9293 = 0;
	var uLocal_9294 = 0;
	var uLocal_9295 = 0;
	var uLocal_9296 = 0;
	var uLocal_9297 = 0;
	var uLocal_9298 = 0;
	var uLocal_9299 = 0;
	var uLocal_9300 = 0;
	var uLocal_9301 = 0;
	var uLocal_9302 = 0;
	var uLocal_9303 = 0;
	var uLocal_9304 = 0;
	var uLocal_9305 = 0;
	var uLocal_9306 = 0;
	var uLocal_9307 = 0;
	var uLocal_9308 = 0;
	var uLocal_9309 = 0;
	var uLocal_9310 = 0;
	var uLocal_9311 = 0;
	var uLocal_9312 = 0;
	var uLocal_9313 = 0;
	var uLocal_9314 = 0;
	var uLocal_9315 = 0;
	var uLocal_9316 = 0;
	var uLocal_9317 = 0;
	var uLocal_9318 = 0;
	var uLocal_9319 = 0;
	var uLocal_9320 = 0;
	var uLocal_9321 = 0;
	var uLocal_9322 = 0;
	var uLocal_9323 = 0;
	var uLocal_9324 = 0;
	var uLocal_9325 = 0;
	var uLocal_9326 = 0;
	var uLocal_9327 = 0;
	var uLocal_9328 = 0;
	var uLocal_9329 = 0;
	var uLocal_9330 = 0;
	var uLocal_9331 = 0;
	var uLocal_9332 = 0;
	var uLocal_9333 = 0;
	var uLocal_9334 = 0;
	var uLocal_9335 = 0;
	var uLocal_9336 = 0;
	var uLocal_9337 = 0;
	var uLocal_9338 = 0;
	var uLocal_9339 = 0;
	var uLocal_9340 = 0;
	var uLocal_9341 = 0;
	var uLocal_9342 = 0;
	var uLocal_9343 = 0;
	var uLocal_9344 = 0;
	var uLocal_9345 = 0;
	var uLocal_9346 = 0;
	var uLocal_9347 = 0;
	var uLocal_9348 = 0;
	var uLocal_9349 = 0;
	var uLocal_9350 = 0;
	var uLocal_9351 = 0;
	var uLocal_9352 = 0;
	var uLocal_9353 = 0;
	var uLocal_9354 = 0;
	var uLocal_9355 = 0;
	var uLocal_9356 = 0;
	var uLocal_9357 = 0;
	var uLocal_9358 = 0;
	var uLocal_9359 = 0;
	var uLocal_9360 = 0;
	var uLocal_9361 = 0;
	var uLocal_9362 = 0;
	var uLocal_9363 = 0;
	var uLocal_9364 = 0;
	var uLocal_9365 = 0;
	var uLocal_9366 = 0;
	var uLocal_9367 = 0;
	var uLocal_9368 = 0;
	var uLocal_9369 = 0;
	var uLocal_9370 = 0;
	var uLocal_9371 = 0;
	var uLocal_9372 = 0;
	var uLocal_9373 = 0;
	var uLocal_9374 = 0;
	var uLocal_9375 = 0;
	var uLocal_9376 = 0;
	var uLocal_9377 = 0;
	var uLocal_9378 = 0;
	var uLocal_9379 = 0;
	var uLocal_9380 = 0;
	var uLocal_9381 = 0;
	var uLocal_9382 = 0;
	var uLocal_9383 = 0;
	var uLocal_9384 = 0;
	var uLocal_9385 = 0;
	var uLocal_9386 = 0;
	var uLocal_9387 = 0;
	var uLocal_9388 = 0;
	var uLocal_9389 = 0;
	var uLocal_9390 = 0;
	var uLocal_9391 = 0;
	var uLocal_9392 = 0;
	var uLocal_9393 = 0;
	var uLocal_9394 = 0;
	var uLocal_9395 = 0;
	var uLocal_9396 = 0;
	var uLocal_9397 = 0;
	var uLocal_9398 = 0;
	var uLocal_9399 = 0;
	var uLocal_9400 = 0;
	var uLocal_9401 = 0;
	var uLocal_9402 = 0;
	var uLocal_9403 = 0;
	var uLocal_9404 = 0;
	var uLocal_9405 = 0;
	var uLocal_9406 = 0;
	var uLocal_9407 = 0;
	var uLocal_9408 = 0;
	var uLocal_9409 = 0;
	var uLocal_9410 = 0;
	var uLocal_9411 = 0;
	var uLocal_9412 = 0;
	var uLocal_9413 = 0;
	var uLocal_9414 = 0;
	var uLocal_9415 = 0;
	var uLocal_9416 = 0;
	var uLocal_9417 = 0;
	var uLocal_9418 = 0;
	var uLocal_9419 = 0;
	var uLocal_9420 = 0;
	var uLocal_9421 = 0;
	var uLocal_9422 = 0;
	var uLocal_9423 = 0;
	var uLocal_9424 = 0;
	var uLocal_9425 = 0;
	var uLocal_9426 = 0;
	var uLocal_9427 = 0;
	var uLocal_9428 = 0;
	var uLocal_9429 = 0;
	var uLocal_9430 = 0;
	var uLocal_9431 = 0;
	var uLocal_9432 = 0;
	var uLocal_9433 = 0;
	var uLocal_9434 = 0;
	var uLocal_9435 = 0;
	var uLocal_9436 = 0;
	var uLocal_9437 = 0;
	var uLocal_9438 = 0;
	var uLocal_9439 = 0;
	var uLocal_9440 = 0;
	var uLocal_9441 = 0;
	var uLocal_9442 = 0;
	var uLocal_9443 = 0;
	var uLocal_9444 = 0;
	var uLocal_9445 = 0;
	var uLocal_9446 = 0;
	var uLocal_9447 = 0;
	var uLocal_9448 = 0;
	var uLocal_9449 = 0;
	var uLocal_9450 = 0;
	var uLocal_9451 = 0;
	var uLocal_9452 = 0;
	var uLocal_9453 = 0;
	var uLocal_9454 = 0;
	var uLocal_9455 = 0;
	var uLocal_9456 = 0;
	var uLocal_9457 = 0;
	var uLocal_9458 = 0;
	var uLocal_9459 = 0;
	var uLocal_9460 = 0;
	var uLocal_9461 = 0;
	var uLocal_9462 = 0;
	var uLocal_9463 = 0;
	var uLocal_9464 = 0;
	var uLocal_9465 = 0;
	var uLocal_9466 = 0;
	var uLocal_9467 = 0;
	var uLocal_9468 = 0;
	var uLocal_9469 = 0;
	var uLocal_9470 = 0;
	var uLocal_9471 = 0;
	var uLocal_9472 = 0;
	var uLocal_9473 = 0;
	var uLocal_9474 = 0;
	var uLocal_9475 = 0;
	var uLocal_9476 = 0;
	var uLocal_9477 = 0;
	var uLocal_9478 = 0;
	var uLocal_9479 = 0;
	var uLocal_9480 = 0;
	var uLocal_9481 = 0;
	var uLocal_9482 = 0;
	var uLocal_9483 = 0;
	var uLocal_9484 = 0;
	var uLocal_9485 = 0;
	var uLocal_9486 = 0;
	var uLocal_9487 = 0;
	var uLocal_9488 = 0;
	var uLocal_9489 = 0;
	var uLocal_9490 = 0;
	var uLocal_9491 = 0;
	var uLocal_9492 = 0;
	var uLocal_9493 = 0;
	var uLocal_9494 = 0;
	var uLocal_9495 = 0;
	var uLocal_9496 = 0;
	var uLocal_9497 = 0;
	var uLocal_9498 = 0;
	var uLocal_9499 = 0;
	var uLocal_9500 = 0;
	var uLocal_9501 = 0;
	var uLocal_9502 = 0;
	var uLocal_9503 = 0;
	var uLocal_9504 = 0;
	var uLocal_9505 = 0;
	var uLocal_9506 = 0;
	var uLocal_9507 = 0;
	var uLocal_9508 = 0;
	var uLocal_9509 = 0;
	var uLocal_9510 = 0;
	var uLocal_9511 = 0;
	var uLocal_9512 = 0;
	var uLocal_9513 = 0;
	var uLocal_9514 = 0;
	var uLocal_9515 = 0;
	var uLocal_9516 = 0;
	var uLocal_9517 = 0;
	var uLocal_9518 = 0;
	var uLocal_9519 = 0;
	var uLocal_9520 = 0;
	var uLocal_9521 = 0;
	var uLocal_9522 = 0;
	var uLocal_9523 = 0;
	var uLocal_9524 = 0;
	var uLocal_9525 = 0;
	var uLocal_9526 = 0;
	var uLocal_9527 = 0;
	var uLocal_9528 = 0;
	var uLocal_9529 = 0;
	var uLocal_9530 = 0;
	var uLocal_9531 = 0;
	var uLocal_9532 = 0;
	var uLocal_9533 = 0;
	var uLocal_9534 = 0;
	var uLocal_9535 = 0;
	var uLocal_9536 = 0;
	var uLocal_9537 = 0;
	var uLocal_9538 = 0;
	var uLocal_9539 = 0;
	var uLocal_9540 = 0;
	var uLocal_9541 = 0;
	var uLocal_9542 = 0;
	var uLocal_9543 = 0;
	var uLocal_9544 = 0;
	var uLocal_9545 = 0;
	var uLocal_9546 = 0;
	var uLocal_9547 = 0;
	var uLocal_9548 = 0;
	var uLocal_9549 = 0;
	var uLocal_9550 = 0;
	var uLocal_9551 = 0;
	var uLocal_9552 = 0;
	var uLocal_9553 = 0;
	var uLocal_9554 = 0;
	var uLocal_9555 = 0;
	var uLocal_9556 = 0;
	var uLocal_9557 = 0;
	var uLocal_9558 = 0;
	var uLocal_9559 = 0;
	var uLocal_9560 = 0;
	var uLocal_9561 = 0;
	var uLocal_9562 = 0;
	var uLocal_9563 = 0;
	var uLocal_9564 = 0;
	var uLocal_9565 = 0;
	var uLocal_9566 = 0;
	var uLocal_9567 = 0;
	var uLocal_9568 = 0;
	var uLocal_9569 = 0;
	var uLocal_9570 = 0;
	var uLocal_9571 = 0;
	var uLocal_9572 = 0;
	var uLocal_9573 = 0;
	var uLocal_9574 = 0;
	var uLocal_9575 = 0;
	var uLocal_9576 = 0;
	var uLocal_9577 = 0;
	var uLocal_9578 = 0;
	var uLocal_9579 = 0;
	var uLocal_9580 = 0;
	var uLocal_9581 = 0;
	var uLocal_9582 = 0;
	var uLocal_9583 = 0;
	var uLocal_9584 = 0;
	var uLocal_9585 = 0;
	var uLocal_9586 = 0;
	var uLocal_9587 = 0;
	var uLocal_9588 = 0;
	var uLocal_9589 = 0;
	var uLocal_9590 = 0;
	var uLocal_9591 = 0;
	var uLocal_9592 = 0;
	var uLocal_9593 = 0;
	var uLocal_9594 = 0;
	var uLocal_9595 = 0;
	var uLocal_9596 = 0;
	var uLocal_9597 = 0;
	var uLocal_9598 = 0;
	var uLocal_9599 = 0;
	var uLocal_9600 = 0;
	var uLocal_9601 = 0;
	var uLocal_9602 = 0;
	var uLocal_9603 = 0;
	var uLocal_9604 = 0;
	var uLocal_9605 = 0;
	var uLocal_9606 = 1097859072;
	var uLocal_9607 = 1101004800;
	var uLocal_9608 = 0;
	var uLocal_9609 = 0;
	var uLocal_9610 = 0;
	var uLocal_9611 = 0;
	var uLocal_9612 = 0;
	var uLocal_9613 = 0;
	var uLocal_9614 = 0;
	var uLocal_9615 = 0;
	var uLocal_9616 = 0;
	var uLocal_9617 = 0;
	var uLocal_9618 = 0;
	var uLocal_9619 = 0;
	var uLocal_9620 = 0;
	var uLocal_9621 = 0;
	var uLocal_9622 = 0;
	var uLocal_9623 = 0;
	var uLocal_9624 = 0;
	var uLocal_9625 = 0;
	var uLocal_9626 = 0;
	var uLocal_9627 = 0;
	var uLocal_9628 = 0;
	var uLocal_9629 = 0;
	var uLocal_9630 = 0;
	var uLocal_9631 = 0;
	var uLocal_9632 = 0;
	var uLocal_9633 = 0;
	var uLocal_9634 = 4;
	var uLocal_9635 = 0;
	var uLocal_9636 = 0;
	var uLocal_9637 = 0;
	var uLocal_9638 = 0;
	var uLocal_9639 = 0;
	var uLocal_9640 = 0;
	var uLocal_9641 = 0;
	var uLocal_9642 = 0;
	var uLocal_9643 = 0;
	var uLocal_9644 = 0;
	var uLocal_9645 = 0;
	var uLocal_9646 = 0;
	var uLocal_9647 = 0;
	var uLocal_9648 = 0;
	var uLocal_9649 = 0;
	var uLocal_9650 = 0;
	var uLocal_9651 = 0;
	var uLocal_9652 = 0;
	var uLocal_9653 = 0;
	var uLocal_9654 = 0;
	var uLocal_9655 = 0;
	var uLocal_9656 = 0;
	var uLocal_9657 = 0;
	var uLocal_9658 = 0;
	var uLocal_9659 = 0;
	var uLocal_9660 = 0;
	var uLocal_9661 = 0;
	var uLocal_9662 = 0;
	var uLocal_9663 = 0;
	var uLocal_9664 = 0;
	var uLocal_9665 = 0;
	var uLocal_9666 = 0;
	var uLocal_9667 = 0;
	var uLocal_9668 = 0;
	var uLocal_9669 = 0;
	var uLocal_9670 = 0;
	var uLocal_9671 = 0;
	var uLocal_9672 = 0;
	var uLocal_9673 = 0;
	var uLocal_9674 = 0;
	var uLocal_9675 = 0;
	var uLocal_9676 = 0;
	var uLocal_9677 = 0;
	var uLocal_9678 = 0;
	var uLocal_9679 = 0;
	var uLocal_9680 = 0;
	var uLocal_9681 = 0;
	var uLocal_9682 = 0;
	var uLocal_9683 = 0;
	var uLocal_9684 = 0;
	var uLocal_9685 = 0;
	var uLocal_9686 = 0;
	var uLocal_9687 = 0;
	var uLocal_9688 = 0;
	var uLocal_9689 = 0;
	var uLocal_9690 = 0;
	var uLocal_9691 = 0;
	var uLocal_9692 = 0;
	var uLocal_9693 = 0;
	var uLocal_9694 = 0;
	var uLocal_9695 = 0;
	var uLocal_9696 = 0;
	var uLocal_9697 = 0;
	var uLocal_9698 = 0;
	var uLocal_9699 = 0;
	var uLocal_9700 = 0;
	var uLocal_9701 = 0;
	var uLocal_9702 = 0;
	var uLocal_9703 = 0;
	var uLocal_9704 = 0;
	var uLocal_9705 = 0;
	var uLocal_9706 = 40;
	var uLocal_9707 = 0;
	var uLocal_9708 = 0;
	var uLocal_9709 = 0;
	var uLocal_9710 = 0;
	var uLocal_9711 = 0;
	var uLocal_9712 = 0;
	var uLocal_9713 = 0;
	var uLocal_9714 = 0;
	var uLocal_9715 = 0;
	var uLocal_9716 = 0;
	var uLocal_9717 = 0;
	var uLocal_9718 = 0;
	var uLocal_9719 = 0;
	var uLocal_9720 = 0;
	var uLocal_9721 = 0;
	var uLocal_9722 = 0;
	var uLocal_9723 = 0;
	var uLocal_9724 = 0;
	var uLocal_9725 = 0;
	var uLocal_9726 = 0;
	var uLocal_9727 = 0;
	var uLocal_9728 = 0;
	var uLocal_9729 = 0;
	var uLocal_9730 = 0;
	var uLocal_9731 = 0;
	var uLocal_9732 = 0;
	var uLocal_9733 = 0;
	var uLocal_9734 = 0;
	var uLocal_9735 = 0;
	var uLocal_9736 = 0;
	var uLocal_9737 = 0;
	var uLocal_9738 = 0;
	var uLocal_9739 = 0;
	var uLocal_9740 = 0;
	var uLocal_9741 = 0;
	var uLocal_9742 = 0;
	var uLocal_9743 = 0;
	var uLocal_9744 = 0;
	var uLocal_9745 = 0;
	var uLocal_9746 = 0;
	var uLocal_9747 = 0;
	var uLocal_9748 = 0;
	var uLocal_9749 = 0;
	var uLocal_9750 = 0;
	var uLocal_9751 = 0;
	var uLocal_9752 = 0;
	var uLocal_9753 = 0;
	var uLocal_9754 = 0;
	var uLocal_9755 = 0;
	var uLocal_9756 = 0;
	var uLocal_9757 = 0;
	var uLocal_9758 = 0;
	var uLocal_9759 = 0;
	var uLocal_9760 = 0;
	var uLocal_9761 = 0;
	var uLocal_9762 = 0;
	var uLocal_9763 = 0;
	var uLocal_9764 = 0;
	var uLocal_9765 = 0;
	var uLocal_9766 = 0;
	var uLocal_9767 = 0;
	var uLocal_9768 = 0;
	var uLocal_9769 = 0;
	var uLocal_9770 = 0;
	var uLocal_9771 = 0;
	var uLocal_9772 = 0;
	var uLocal_9773 = 0;
	var uLocal_9774 = 0;
	var uLocal_9775 = 0;
	var uLocal_9776 = 0;
	var uLocal_9777 = 0;
	var uLocal_9778 = 0;
	var uLocal_9779 = 0;
	var uLocal_9780 = 0;
	var uLocal_9781 = 0;
	var uLocal_9782 = 0;
	var uLocal_9783 = 0;
	var uLocal_9784 = 0;
	var uLocal_9785 = 0;
	var uLocal_9786 = 0;
	var uLocal_9787 = 0;
	var uLocal_9788 = 0;
	var uLocal_9789 = 0;
	var uLocal_9790 = 0;
	var uLocal_9791 = 0;
	var uLocal_9792 = 0;
	var uLocal_9793 = 0;
	var uLocal_9794 = 0;
	var uLocal_9795 = 0;
	var uLocal_9796 = 0;
	var uLocal_9797 = 0;
	var uLocal_9798 = 0;
	var uLocal_9799 = 0;
	var uLocal_9800 = 0;
	var uLocal_9801 = 0;
	var uLocal_9802 = 0;
	var uLocal_9803 = 0;
	var uLocal_9804 = 0;
	var uLocal_9805 = 0;
	var uLocal_9806 = 0;
	var uLocal_9807 = 0;
	var uLocal_9808 = 0;
	var uLocal_9809 = 0;
	var uLocal_9810 = 0;
	var uLocal_9811 = 0;
	var uLocal_9812 = 0;
	var uLocal_9813 = 0;
	var uLocal_9814 = 0;
	var uLocal_9815 = 0;
	var uLocal_9816 = 0;
	var uLocal_9817 = 0;
	var uLocal_9818 = 0;
	var uLocal_9819 = 0;
	var uLocal_9820 = 0;
	var uLocal_9821 = 0;
	var uLocal_9822 = 0;
	var uLocal_9823 = 0;
	var uLocal_9824 = 0;
	var uLocal_9825 = 0;
	var uLocal_9826 = 0;
	var uLocal_9827 = 0;
	var uLocal_9828 = 0;
	var uLocal_9829 = 0;
	var uLocal_9830 = 0;
	var uLocal_9831 = 0;
	var uLocal_9832 = 0;
	var uLocal_9833 = 0;
	var uLocal_9834 = 0;
	var uLocal_9835 = 0;
	var uLocal_9836 = 0;
	var uLocal_9837 = 0;
	var uLocal_9838 = 0;
	var uLocal_9839 = 0;
	var uLocal_9840 = 0;
	var uLocal_9841 = 0;
	var uLocal_9842 = 0;
	var uLocal_9843 = 0;
	var uLocal_9844 = 0;
	var uLocal_9845 = 0;
	var uLocal_9846 = 0;
	var uLocal_9847 = 0;
	var uLocal_9848 = 0;
	var uLocal_9849 = 0;
	var uLocal_9850 = 0;
	var uLocal_9851 = 0;
	var uLocal_9852 = 0;
	var uLocal_9853 = 0;
	var uLocal_9854 = 0;
	var uLocal_9855 = 0;
	var uLocal_9856 = 0;
	var uLocal_9857 = 0;
	var uLocal_9858 = 0;
	var uLocal_9859 = 0;
	var uLocal_9860 = 0;
	var uLocal_9861 = 0;
	var uLocal_9862 = 0;
	var uLocal_9863 = 0;
	var uLocal_9864 = 0;
	var uLocal_9865 = 0;
	var uLocal_9866 = 0;
	var uLocal_9867 = 0;
	var uLocal_9868 = 0;
	var uLocal_9869 = 0;
	var uLocal_9870 = 0;
	var uLocal_9871 = 0;
	var uLocal_9872 = 0;
	var uLocal_9873 = 0;
	var uLocal_9874 = 0;
	var uLocal_9875 = 0;
	var uLocal_9876 = 0;
	var uLocal_9877 = 0;
	var uLocal_9878 = 0;
	var uLocal_9879 = 0;
	var uLocal_9880 = 0;
	var uLocal_9881 = 0;
	var uLocal_9882 = 0;
	var uLocal_9883 = 0;
	var uLocal_9884 = 0;
	var uLocal_9885 = 0;
	var uLocal_9886 = 0;
	var uLocal_9887 = 0;
	var uLocal_9888 = 0;
	var uLocal_9889 = 0;
	var uLocal_9890 = 0;
	var uLocal_9891 = 0;
	var uLocal_9892 = 0;
	var uLocal_9893 = 0;
	var uLocal_9894 = 0;
	var uLocal_9895 = 0;
	var uLocal_9896 = 0;
	var uLocal_9897 = 0;
	var uLocal_9898 = 0;
	var uLocal_9899 = 0;
	var uLocal_9900 = 0;
	var uLocal_9901 = 0;
	var uLocal_9902 = 0;
	var uLocal_9903 = 0;
	var uLocal_9904 = 0;
	var uLocal_9905 = 0;
	var uLocal_9906 = 0;
	var uLocal_9907 = 0;
	var uLocal_9908 = 0;
	var uLocal_9909 = 0;
	var uLocal_9910 = 0;
	var uLocal_9911 = 0;
	var uLocal_9912 = 0;
	var uLocal_9913 = 0;
	var uLocal_9914 = 0;
	var uLocal_9915 = 0;
	var uLocal_9916 = 0;
	var uLocal_9917 = 0;
	var uLocal_9918 = 0;
	var uLocal_9919 = 0;
	var uLocal_9920 = 0;
	var uLocal_9921 = 0;
	var uLocal_9922 = 0;
	var uLocal_9923 = 0;
	var uLocal_9924 = 0;
	var uLocal_9925 = 0;
	var uLocal_9926 = 0;
	var uLocal_9927 = 0;
	var uLocal_9928 = 0;
	var uLocal_9929 = 0;
	var uLocal_9930 = 0;
	var uLocal_9931 = 0;
	var uLocal_9932 = 0;
	var uLocal_9933 = 0;
	var uLocal_9934 = 0;
	var uLocal_9935 = 0;
	var uLocal_9936 = 0;
	var uLocal_9937 = 0;
	var uLocal_9938 = 0;
	var uLocal_9939 = 0;
	var uLocal_9940 = 0;
	var uLocal_9941 = 0;
	var uLocal_9942 = 0;
	var uLocal_9943 = 0;
	var uLocal_9944 = 0;
	var uLocal_9945 = 0;
	var uLocal_9946 = 0;
	var uLocal_9947 = 0;
	var uLocal_9948 = 0;
	var uLocal_9949 = 0;
	var uLocal_9950 = 0;
	var uLocal_9951 = 0;
	var uLocal_9952 = 0;
	var uLocal_9953 = 0;
	var uLocal_9954 = 0;
	var uLocal_9955 = 0;
	var uLocal_9956 = 0;
	var uLocal_9957 = 0;
	var uLocal_9958 = 0;
	var uLocal_9959 = 0;
	var uLocal_9960 = 0;
	var uLocal_9961 = 0;
	var uLocal_9962 = 0;
	var uLocal_9963 = 0;
	var uLocal_9964 = 0;
	var uLocal_9965 = 0;
	var uLocal_9966 = 0;
	var uLocal_9967 = 0;
	var uLocal_9968 = 0;
	var uLocal_9969 = 0;
	var uLocal_9970 = 0;
	var uLocal_9971 = 0;
	var uLocal_9972 = 0;
	var uLocal_9973 = 0;
	var uLocal_9974 = 0;
	var uLocal_9975 = 0;
	var uLocal_9976 = 0;
	var uLocal_9977 = 0;
	var uLocal_9978 = 0;
	var uLocal_9979 = 0;
	var uLocal_9980 = 0;
	var uLocal_9981 = 0;
	var uLocal_9982 = 0;
	var uLocal_9983 = 0;
	var uLocal_9984 = 0;
	var uLocal_9985 = 0;
	var uLocal_9986 = 0;
	var uLocal_9987 = 0;
	var uLocal_9988 = 0;
	var uLocal_9989 = 0;
	var uLocal_9990 = 0;
	var uLocal_9991 = 0;
	var uLocal_9992 = 0;
	var uLocal_9993 = 0;
	var uLocal_9994 = 0;
	var uLocal_9995 = 0;
	var uLocal_9996 = 0;
	var uLocal_9997 = 0;
	var uLocal_9998 = 0;
	var uLocal_9999 = 0;
	var uLocal_10000 = 0;
	var uLocal_10001 = 0;
	var uLocal_10002 = 0;
	var uLocal_10003 = 0;
	var uLocal_10004 = 0;
	var uLocal_10005 = 0;
	var uLocal_10006 = 0;
	var uLocal_10007 = 0;
	var uLocal_10008 = 0;
	var uLocal_10009 = 0;
	var uLocal_10010 = 0;
	var uLocal_10011 = 0;
	var uLocal_10012 = 0;
	var uLocal_10013 = 0;
	var uLocal_10014 = 0;
	var uLocal_10015 = 0;
	var uLocal_10016 = 0;
	var uLocal_10017 = 0;
	var uLocal_10018 = 0;
	var uLocal_10019 = 0;
	var uLocal_10020 = 0;
	var uLocal_10021 = 0;
	var uLocal_10022 = 0;
	var uLocal_10023 = 0;
	var uLocal_10024 = 0;
	var uLocal_10025 = 0;
	var uLocal_10026 = 0;
	var uLocal_10027 = 0;
	var uLocal_10028 = 0;
	var uLocal_10029 = 0;
	var uLocal_10030 = 0;
	var uLocal_10031 = 0;
	var uLocal_10032 = 0;
	var uLocal_10033 = 0;
	var uLocal_10034 = 0;
	var uLocal_10035 = 0;
	var uLocal_10036 = 0;
	var uLocal_10037 = 0;
	var uLocal_10038 = 0;
	var uLocal_10039 = 0;
	var uLocal_10040 = 0;
	var uLocal_10041 = 0;
	var uLocal_10042 = 0;
	var uLocal_10043 = 0;
	var uLocal_10044 = 0;
	var uLocal_10045 = 0;
	var uLocal_10046 = 0;
	var uLocal_10047 = 0;
	var uLocal_10048 = 0;
	var uLocal_10049 = 0;
	var uLocal_10050 = 0;
	var uLocal_10051 = 0;
	var uLocal_10052 = 0;
	var uLocal_10053 = 0;
	var uLocal_10054 = 0;
	var uLocal_10055 = 0;
	var uLocal_10056 = 0;
	var uLocal_10057 = 0;
	var uLocal_10058 = 0;
	var uLocal_10059 = 0;
	var uLocal_10060 = 0;
	var uLocal_10061 = 0;
	var uLocal_10062 = 0;
	var uLocal_10063 = 0;
	var uLocal_10064 = 0;
	var uLocal_10065 = 0;
	var uLocal_10066 = 0;
	var uLocal_10067 = 0;
	var uLocal_10068 = 0;
	var uLocal_10069 = 0;
	var uLocal_10070 = 0;
	var uLocal_10071 = 0;
	var uLocal_10072 = 0;
	var uLocal_10073 = 0;
	var uLocal_10074 = 0;
	var uLocal_10075 = 0;
	var uLocal_10076 = 0;
	var uLocal_10077 = 0;
	var uLocal_10078 = 0;
	var uLocal_10079 = 0;
	var uLocal_10080 = 0;
	var uLocal_10081 = 0;
	var uLocal_10082 = 0;
	var uLocal_10083 = 0;
	var uLocal_10084 = 0;
	var uLocal_10085 = 0;
	var uLocal_10086 = 0;
	var uLocal_10087 = 0;
	var uLocal_10088 = 0;
	var uLocal_10089 = 0;
	var uLocal_10090 = 0;
	var uLocal_10091 = 0;
	var uLocal_10092 = 0;
	var uLocal_10093 = 0;
	var uLocal_10094 = 0;
	var uLocal_10095 = 0;
	var uLocal_10096 = 0;
	var uLocal_10097 = 0;
	var uLocal_10098 = 0;
	var uLocal_10099 = 0;
	var uLocal_10100 = 0;
	var uLocal_10101 = 0;
	var uLocal_10102 = 0;
	var uLocal_10103 = 0;
	var uLocal_10104 = 0;
	var uLocal_10105 = 0;
	var uLocal_10106 = 0;
	var uLocal_10107 = 0;
	var uLocal_10108 = 0;
	var uLocal_10109 = 0;
	var uLocal_10110 = 0;
	var uLocal_10111 = 0;
	var uLocal_10112 = 0;
	var uLocal_10113 = 0;
	var uLocal_10114 = 0;
	var uLocal_10115 = 0;
	var uLocal_10116 = 0;
	var uLocal_10117 = 0;
	var uLocal_10118 = 0;
	var uLocal_10119 = 0;
	var uLocal_10120 = 0;
	var uLocal_10121 = 0;
	var uLocal_10122 = 0;
	var uLocal_10123 = 0;
	var uLocal_10124 = 0;
	var uLocal_10125 = 0;
	var uLocal_10126 = 0;
	var uLocal_10127 = 0;
	var uLocal_10128 = 0;
	var uLocal_10129 = 0;
	var uLocal_10130 = 0;
	var uLocal_10131 = 0;
	var uLocal_10132 = 0;
	var uLocal_10133 = 0;
	var uLocal_10134 = 0;
	var uLocal_10135 = 0;
	var uLocal_10136 = 0;
	var uLocal_10137 = 0;
	var uLocal_10138 = 0;
	var uLocal_10139 = 0;
	var uLocal_10140 = 0;
	var uLocal_10141 = 0;
	var uLocal_10142 = 0;
	var uLocal_10143 = 0;
	var uLocal_10144 = 0;
	var uLocal_10145 = 0;
	var uLocal_10146 = 0;
	var uLocal_10147 = 0;
	var uLocal_10148 = 0;
	var uLocal_10149 = 0;
	var uLocal_10150 = 0;
	var uLocal_10151 = 0;
	var uLocal_10152 = 0;
	var uLocal_10153 = 0;
	var uLocal_10154 = 0;
	var uLocal_10155 = 0;
	var uLocal_10156 = 0;
	var uLocal_10157 = 0;
	var uLocal_10158 = 0;
	var uLocal_10159 = 0;
	var uLocal_10160 = 0;
	var uLocal_10161 = 0;
	var uLocal_10162 = 0;
	var uLocal_10163 = 0;
	var uLocal_10164 = 0;
	var uLocal_10165 = 0;
	var uLocal_10166 = 0;
	var uLocal_10167 = 0;
	var uLocal_10168 = 0;
	var uLocal_10169 = 0;
	var uLocal_10170 = 0;
	var uLocal_10171 = 0;
	var uLocal_10172 = 0;
	var uLocal_10173 = 0;
	var uLocal_10174 = 0;
	var uLocal_10175 = 0;
	var uLocal_10176 = 0;
	var uLocal_10177 = 0;
	var uLocal_10178 = 0;
	var uLocal_10179 = 0;
	var uLocal_10180 = 0;
	var uLocal_10181 = 0;
	var uLocal_10182 = 0;
	var uLocal_10183 = 0;
	var uLocal_10184 = 0;
	var uLocal_10185 = 0;
	var uLocal_10186 = 0;
	var uLocal_10187 = 0;
	var uLocal_10188 = 0;
	var uLocal_10189 = 0;
	var uLocal_10190 = 0;
	var uLocal_10191 = 0;
	var uLocal_10192 = 0;
	var uLocal_10193 = 0;
	var uLocal_10194 = 0;
	var uLocal_10195 = 0;
	var uLocal_10196 = 0;
	var uLocal_10197 = 0;
	var uLocal_10198 = 0;
	var uLocal_10199 = 0;
	var uLocal_10200 = 0;
	var uLocal_10201 = 0;
	var uLocal_10202 = 0;
	var uLocal_10203 = 0;
	var uLocal_10204 = 0;
	var uLocal_10205 = 0;
	var uLocal_10206 = 0;
	var uLocal_10207 = 0;
	var uLocal_10208 = 0;
	var uLocal_10209 = 0;
	var uLocal_10210 = 0;
	var uLocal_10211 = 0;
	var uLocal_10212 = 0;
	var uLocal_10213 = 0;
	var uLocal_10214 = 0;
	var uLocal_10215 = 0;
	var uLocal_10216 = 0;
	var uLocal_10217 = 0;
	var uLocal_10218 = 0;
	var uLocal_10219 = 0;
	var uLocal_10220 = 0;
	var uLocal_10221 = 0;
	var uLocal_10222 = 0;
	var uLocal_10223 = 0;
	var uLocal_10224 = 0;
	var uLocal_10225 = 0;
	var uLocal_10226 = 0;
	var uLocal_10227 = 0;
	var uLocal_10228 = 0;
	var uLocal_10229 = 0;
	var uLocal_10230 = 0;
	var uLocal_10231 = 0;
	var uLocal_10232 = 0;
	var uLocal_10233 = 0;
	var uLocal_10234 = 0;
	var uLocal_10235 = 0;
	var uLocal_10236 = 0;
	var uLocal_10237 = 0;
	var uLocal_10238 = 0;
	var uLocal_10239 = 0;
	var uLocal_10240 = 0;
	var uLocal_10241 = 0;
	var uLocal_10242 = 0;
	var uLocal_10243 = 0;
	var uLocal_10244 = 0;
	var uLocal_10245 = 0;
	var uLocal_10246 = 0;
	var uLocal_10247 = 0;
	var uLocal_10248 = 0;
	var uLocal_10249 = 0;
	var uLocal_10250 = 0;
	var uLocal_10251 = 0;
	var uLocal_10252 = 0;
	var uLocal_10253 = 0;
	var uLocal_10254 = 0;
	var uLocal_10255 = 0;
	var uLocal_10256 = 0;
	var uLocal_10257 = 0;
	var uLocal_10258 = 0;
	var uLocal_10259 = 0;
	var uLocal_10260 = 0;
	var uLocal_10261 = 0;
	var uLocal_10262 = 0;
	var uLocal_10263 = 0;
	var uLocal_10264 = 0;
	var uLocal_10265 = 0;
	var uLocal_10266 = 0;
	var uLocal_10267 = 0;
	var uLocal_10268 = 0;
	var uLocal_10269 = 0;
	var uLocal_10270 = 0;
	var uLocal_10271 = 0;
	var uLocal_10272 = 0;
	var uLocal_10273 = 0;
	var uLocal_10274 = 0;
	var uLocal_10275 = 0;
	var uLocal_10276 = 0;
	var uLocal_10277 = 0;
	var uLocal_10278 = 0;
	var uLocal_10279 = 0;
	var uLocal_10280 = 0;
	var uLocal_10281 = 0;
	var uLocal_10282 = 0;
	var uLocal_10283 = 0;
	var uLocal_10284 = 0;
	var uLocal_10285 = 0;
	var uLocal_10286 = 0;
	var uLocal_10287 = 0;
	var uLocal_10288 = 0;
	var uLocal_10289 = 0;
	var uLocal_10290 = 0;
	var uLocal_10291 = 0;
	var uLocal_10292 = 0;
	var uLocal_10293 = 0;
	var uLocal_10294 = 0;
	var uLocal_10295 = 0;
	var uLocal_10296 = 0;
	var uLocal_10297 = 0;
	var uLocal_10298 = 0;
	var uLocal_10299 = 0;
	var uLocal_10300 = 0;
	var uLocal_10301 = 0;
	var uLocal_10302 = 0;
	var uLocal_10303 = 0;
	var uLocal_10304 = 0;
	var uLocal_10305 = 0;
	var uLocal_10306 = 0;
	var uLocal_10307 = 0;
	var uLocal_10308 = 0;
	var uLocal_10309 = 0;
	var uLocal_10310 = 0;
	var uLocal_10311 = 0;
	var uLocal_10312 = 0;
	var uLocal_10313 = 0;
	var uLocal_10314 = 0;
	var uLocal_10315 = 0;
	var uLocal_10316 = 0;
	var uLocal_10317 = 0;
	var uLocal_10318 = 0;
	var uLocal_10319 = 0;
	var uLocal_10320 = 0;
	var uLocal_10321 = 0;
	var uLocal_10322 = 0;
	var uLocal_10323 = 0;
	var uLocal_10324 = 0;
	var uLocal_10325 = 0;
	var uLocal_10326 = 0;
	var uLocal_10327 = 0;
	var uLocal_10328 = 0;
	var uLocal_10329 = 0;
	var uLocal_10330 = 0;
	var uLocal_10331 = 0;
	var uLocal_10332 = 0;
	var uLocal_10333 = 0;
	var uLocal_10334 = 0;
	var uLocal_10335 = 0;
	var uLocal_10336 = 0;
	var uLocal_10337 = 0;
	var uLocal_10338 = 0;
	var uLocal_10339 = 0;
	var uLocal_10340 = 0;
	var uLocal_10341 = 0;
	var uLocal_10342 = 0;
	var uLocal_10343 = 0;
	var uLocal_10344 = 0;
	var uLocal_10345 = 0;
	var uLocal_10346 = 0;
	var uLocal_10347 = 40;
	var uLocal_10348 = 0;
	var uLocal_10349 = 0;
	var uLocal_10350 = 0;
	var uLocal_10351 = 0;
	var uLocal_10352 = 0;
	var uLocal_10353 = 0;
	var uLocal_10354 = 0;
	var uLocal_10355 = 0;
	var uLocal_10356 = 0;
	var uLocal_10357 = 0;
	var uLocal_10358 = 0;
	var uLocal_10359 = 0;
	var uLocal_10360 = 0;
	var uLocal_10361 = 0;
	var uLocal_10362 = 0;
	var uLocal_10363 = 0;
	var uLocal_10364 = 0;
	var uLocal_10365 = 0;
	var uLocal_10366 = 0;
	var uLocal_10367 = 0;
	var uLocal_10368 = 0;
	var uLocal_10369 = 0;
	var uLocal_10370 = 0;
	var uLocal_10371 = 0;
	var uLocal_10372 = 0;
	var uLocal_10373 = 0;
	var uLocal_10374 = 0;
	var uLocal_10375 = 0;
	var uLocal_10376 = 0;
	var uLocal_10377 = 0;
	var uLocal_10378 = 0;
	var uLocal_10379 = 0;
	var uLocal_10380 = 0;
	var uLocal_10381 = 0;
	var uLocal_10382 = 0;
	var uLocal_10383 = 0;
	var uLocal_10384 = 0;
	var uLocal_10385 = 0;
	var uLocal_10386 = 0;
	var uLocal_10387 = 0;
	var uLocal_10388 = 0;
	var uLocal_10389 = 0;
	var uLocal_10390 = 0;
	var uLocal_10391 = 0;
	var uLocal_10392 = 0;
	var uLocal_10393 = 0;
	var uLocal_10394 = 0;
	var uLocal_10395 = 0;
	var uLocal_10396 = 0;
	var uLocal_10397 = 0;
	var uLocal_10398 = 0;
	var uLocal_10399 = 0;
	var uLocal_10400 = 0;
	var uLocal_10401 = 0;
	var uLocal_10402 = 0;
	var uLocal_10403 = 0;
	var uLocal_10404 = 0;
	var uLocal_10405 = 0;
	var uLocal_10406 = 0;
	var uLocal_10407 = 0;
	var uLocal_10408 = 0;
	var uLocal_10409 = 0;
	var uLocal_10410 = 0;
	var uLocal_10411 = 0;
	var uLocal_10412 = 0;
	var uLocal_10413 = 0;
	var uLocal_10414 = 0;
	var uLocal_10415 = 0;
	var uLocal_10416 = 0;
	var uLocal_10417 = 0;
	var uLocal_10418 = 0;
	var uLocal_10419 = 0;
	var uLocal_10420 = 0;
	var uLocal_10421 = 0;
	var uLocal_10422 = 0;
	var uLocal_10423 = 0;
	var uLocal_10424 = 0;
	var uLocal_10425 = 0;
	var uLocal_10426 = 0;
	var uLocal_10427 = 0;
	var uLocal_10428 = 0;
	var uLocal_10429 = 0;
	var uLocal_10430 = 0;
	var uLocal_10431 = 0;
	var uLocal_10432 = 0;
	var uLocal_10433 = 0;
	var uLocal_10434 = 0;
	var uLocal_10435 = 0;
	var uLocal_10436 = 0;
	var uLocal_10437 = 0;
	var uLocal_10438 = 0;
	var uLocal_10439 = 0;
	var uLocal_10440 = 0;
	var uLocal_10441 = 0;
	var uLocal_10442 = 0;
	var uLocal_10443 = 0;
	var uLocal_10444 = 0;
	var uLocal_10445 = 0;
	var uLocal_10446 = 0;
	var uLocal_10447 = 0;
	var uLocal_10448 = 0;
	var uLocal_10449 = 0;
	var uLocal_10450 = 0;
	var uLocal_10451 = 0;
	var uLocal_10452 = 0;
	var uLocal_10453 = 0;
	var uLocal_10454 = 0;
	var uLocal_10455 = 0;
	var uLocal_10456 = 0;
	var uLocal_10457 = 0;
	var uLocal_10458 = 0;
	var uLocal_10459 = 0;
	var uLocal_10460 = 0;
	var uLocal_10461 = 0;
	var uLocal_10462 = 0;
	var uLocal_10463 = 0;
	var uLocal_10464 = 0;
	var uLocal_10465 = 0;
	var uLocal_10466 = 0;
	var uLocal_10467 = 0;
	var uLocal_10468 = 0;
	var uLocal_10469 = 0;
	var uLocal_10470 = 0;
	var uLocal_10471 = 0;
	var uLocal_10472 = 0;
	var uLocal_10473 = 0;
	var uLocal_10474 = 0;
	var uLocal_10475 = 0;
	var uLocal_10476 = 0;
	var uLocal_10477 = 0;
	var uLocal_10478 = 0;
	var uLocal_10479 = 0;
	var uLocal_10480 = 0;
	var uLocal_10481 = 0;
	var uLocal_10482 = 0;
	var uLocal_10483 = 0;
	var uLocal_10484 = 0;
	var uLocal_10485 = 0;
	var uLocal_10486 = 0;
	var uLocal_10487 = 0;
	var uLocal_10488 = 0;
	var uLocal_10489 = 0;
	var uLocal_10490 = 0;
	var uLocal_10491 = 0;
	var uLocal_10492 = 0;
	var uLocal_10493 = 0;
	var uLocal_10494 = 0;
	var uLocal_10495 = 0;
	var uLocal_10496 = 0;
	var uLocal_10497 = 0;
	var uLocal_10498 = 0;
	var uLocal_10499 = 0;
	var uLocal_10500 = 0;
	var uLocal_10501 = 0;
	var uLocal_10502 = 0;
	var uLocal_10503 = 0;
	var uLocal_10504 = 0;
	var uLocal_10505 = 0;
	var uLocal_10506 = 0;
	var uLocal_10507 = 0;
	var uLocal_10508 = 0;
	var uLocal_10509 = 0;
	var uLocal_10510 = 0;
	var uLocal_10511 = 0;
	var uLocal_10512 = 0;
	var uLocal_10513 = 0;
	var uLocal_10514 = 0;
	var uLocal_10515 = 0;
	var uLocal_10516 = 0;
	var uLocal_10517 = 0;
	var uLocal_10518 = 0;
	var uLocal_10519 = 0;
	var uLocal_10520 = 0;
	var uLocal_10521 = 0;
	var uLocal_10522 = 0;
	var uLocal_10523 = 0;
	var uLocal_10524 = 0;
	var uLocal_10525 = 0;
	var uLocal_10526 = 0;
	var uLocal_10527 = 0;
	var uLocal_10528 = 0;
	var uLocal_10529 = 0;
	var uLocal_10530 = 0;
	var uLocal_10531 = 0;
	var uLocal_10532 = 0;
	var uLocal_10533 = 0;
	var uLocal_10534 = 0;
	var uLocal_10535 = 0;
	var uLocal_10536 = 0;
	var uLocal_10537 = 0;
	var uLocal_10538 = 0;
	var uLocal_10539 = 0;
	var uLocal_10540 = 0;
	var uLocal_10541 = 0;
	var uLocal_10542 = 0;
	var uLocal_10543 = 0;
	var uLocal_10544 = 0;
	var uLocal_10545 = 0;
	var uLocal_10546 = 0;
	var uLocal_10547 = 0;
	var uLocal_10548 = 0;
	var uLocal_10549 = 0;
	var uLocal_10550 = 0;
	var uLocal_10551 = 0;
	var uLocal_10552 = 0;
	var uLocal_10553 = 0;
	var uLocal_10554 = 0;
	var uLocal_10555 = 0;
	var uLocal_10556 = 0;
	var uLocal_10557 = 0;
	var uLocal_10558 = 0;
	var uLocal_10559 = 0;
	var uLocal_10560 = 0;
	var uLocal_10561 = 0;
	var uLocal_10562 = 0;
	var uLocal_10563 = 0;
	var uLocal_10564 = 0;
	var uLocal_10565 = 0;
	var uLocal_10566 = 0;
	var uLocal_10567 = 0;
	var uLocal_10568 = 0;
	var uLocal_10569 = 0;
	var uLocal_10570 = 0;
	var uLocal_10571 = 0;
	var uLocal_10572 = 0;
	var uLocal_10573 = 0;
	var uLocal_10574 = 0;
	var uLocal_10575 = 0;
	var uLocal_10576 = 0;
	var uLocal_10577 = 0;
	var uLocal_10578 = 0;
	var uLocal_10579 = 0;
	var uLocal_10580 = 0;
	var uLocal_10581 = 0;
	var uLocal_10582 = 0;
	var uLocal_10583 = 0;
	var uLocal_10584 = 0;
	var uLocal_10585 = 0;
	var uLocal_10586 = 0;
	var uLocal_10587 = 0;
	var uLocal_10588 = 0;
	var uLocal_10589 = 0;
	var uLocal_10590 = 0;
	var uLocal_10591 = 0;
	var uLocal_10592 = 0;
	var uLocal_10593 = 0;
	var uLocal_10594 = 0;
	var uLocal_10595 = 0;
	var uLocal_10596 = 0;
	var uLocal_10597 = 0;
	var uLocal_10598 = 0;
	var uLocal_10599 = 0;
	var uLocal_10600 = 0;
	var uLocal_10601 = 0;
	var uLocal_10602 = 0;
	var uLocal_10603 = 0;
	var uLocal_10604 = 0;
	var uLocal_10605 = 0;
	var uLocal_10606 = 0;
	var uLocal_10607 = 0;
	var uLocal_10608 = 0;
	var uLocal_10609 = 0;
	var uLocal_10610 = 0;
	var uLocal_10611 = 0;
	var uLocal_10612 = 0;
	var uLocal_10613 = 0;
	var uLocal_10614 = 0;
	var uLocal_10615 = 0;
	var uLocal_10616 = 0;
	var uLocal_10617 = 0;
	var uLocal_10618 = 0;
	var uLocal_10619 = 0;
	var uLocal_10620 = 0;
	var uLocal_10621 = 0;
	var uLocal_10622 = 0;
	var uLocal_10623 = 0;
	var uLocal_10624 = 0;
	var uLocal_10625 = 0;
	var uLocal_10626 = 0;
	var uLocal_10627 = 0;
	var uLocal_10628 = 0;
	var uLocal_10629 = 0;
	var uLocal_10630 = 0;
	var uLocal_10631 = 0;
	var uLocal_10632 = 0;
	var uLocal_10633 = 0;
	var uLocal_10634 = 0;
	var uLocal_10635 = 0;
	var uLocal_10636 = 0;
	var uLocal_10637 = 0;
	var uLocal_10638 = 0;
	var uLocal_10639 = 0;
	var uLocal_10640 = 0;
	var uLocal_10641 = 0;
	var uLocal_10642 = 0;
	var uLocal_10643 = 0;
	var uLocal_10644 = 0;
	var uLocal_10645 = 0;
	var uLocal_10646 = 0;
	var uLocal_10647 = 0;
	var uLocal_10648 = 0;
	var uLocal_10649 = 0;
	var uLocal_10650 = 0;
	var uLocal_10651 = 0;
	var uLocal_10652 = 0;
	var uLocal_10653 = 0;
	var uLocal_10654 = 0;
	var uLocal_10655 = 0;
	var uLocal_10656 = 0;
	var uLocal_10657 = 0;
	var uLocal_10658 = 0;
	var uLocal_10659 = 0;
	var uLocal_10660 = 0;
	var uLocal_10661 = 0;
	var uLocal_10662 = 0;
	var uLocal_10663 = 0;
	var uLocal_10664 = 0;
	var uLocal_10665 = 0;
	var uLocal_10666 = 0;
	var uLocal_10667 = 0;
	var uLocal_10668 = 0;
	var uLocal_10669 = 0;
	var uLocal_10670 = 0;
	var uLocal_10671 = 0;
	var uLocal_10672 = 0;
	var uLocal_10673 = 0;
	var uLocal_10674 = 0;
	var uLocal_10675 = 0;
	var uLocal_10676 = 0;
	var uLocal_10677 = 0;
	var uLocal_10678 = 0;
	var uLocal_10679 = 0;
	var uLocal_10680 = 0;
	var uLocal_10681 = 0;
	var uLocal_10682 = 0;
	var uLocal_10683 = 0;
	var uLocal_10684 = 0;
	var uLocal_10685 = 0;
	var uLocal_10686 = 0;
	var uLocal_10687 = 0;
	var uLocal_10688 = 0;
	var uLocal_10689 = 0;
	var uLocal_10690 = 0;
	var uLocal_10691 = 0;
	var uLocal_10692 = 0;
	var uLocal_10693 = 0;
	var uLocal_10694 = 0;
	var uLocal_10695 = 0;
	var uLocal_10696 = 0;
	var uLocal_10697 = 0;
	var uLocal_10698 = 0;
	var uLocal_10699 = 0;
	var uLocal_10700 = 0;
	var uLocal_10701 = 0;
	var uLocal_10702 = 0;
	var uLocal_10703 = 0;
	var uLocal_10704 = 0;
	var uLocal_10705 = 0;
	var uLocal_10706 = 0;
	var uLocal_10707 = 0;
	var uLocal_10708 = 0;
	var uLocal_10709 = 0;
	var uLocal_10710 = 0;
	var uLocal_10711 = 0;
	var uLocal_10712 = 0;
	var uLocal_10713 = 0;
	var uLocal_10714 = 0;
	var uLocal_10715 = 0;
	var uLocal_10716 = 0;
	var uLocal_10717 = 0;
	var uLocal_10718 = 0;
	var uLocal_10719 = 0;
	var uLocal_10720 = 0;
	var uLocal_10721 = 0;
	var uLocal_10722 = 0;
	var uLocal_10723 = 0;
	var uLocal_10724 = 0;
	var uLocal_10725 = 0;
	var uLocal_10726 = 0;
	var uLocal_10727 = 0;
	var uLocal_10728 = 0;
	var uLocal_10729 = 0;
	var uLocal_10730 = 0;
	var uLocal_10731 = 0;
	var uLocal_10732 = 0;
	var uLocal_10733 = 0;
	var uLocal_10734 = 0;
	var uLocal_10735 = 0;
	var uLocal_10736 = 0;
	var uLocal_10737 = 0;
	var uLocal_10738 = 0;
	var uLocal_10739 = 0;
	var uLocal_10740 = 0;
	var uLocal_10741 = 0;
	var uLocal_10742 = 0;
	var uLocal_10743 = 0;
	var uLocal_10744 = 0;
	var uLocal_10745 = 0;
	var uLocal_10746 = 0;
	var uLocal_10747 = 0;
	var uLocal_10748 = 0;
	var uLocal_10749 = 0;
	var uLocal_10750 = 0;
	var uLocal_10751 = 0;
	var uLocal_10752 = 0;
	var uLocal_10753 = 0;
	var uLocal_10754 = 0;
	var uLocal_10755 = 0;
	var uLocal_10756 = 0;
	var uLocal_10757 = 0;
	var uLocal_10758 = 0;
	var uLocal_10759 = 0;
	var uLocal_10760 = 0;
	var uLocal_10761 = 0;
	var uLocal_10762 = 0;
	var uLocal_10763 = 0;
	var uLocal_10764 = 0;
	var uLocal_10765 = 0;
	var uLocal_10766 = 0;
	var uLocal_10767 = 0;
	var uLocal_10768 = 0;
	var uLocal_10769 = 0;
	var uLocal_10770 = 0;
	var uLocal_10771 = 0;
	var uLocal_10772 = 0;
	var uLocal_10773 = 0;
	var uLocal_10774 = 0;
	var uLocal_10775 = 0;
	var uLocal_10776 = 0;
	var uLocal_10777 = 0;
	var uLocal_10778 = 0;
	var uLocal_10779 = 0;
	var uLocal_10780 = 0;
	var uLocal_10781 = 0;
	var uLocal_10782 = 0;
	var uLocal_10783 = 0;
	var uLocal_10784 = 0;
	var uLocal_10785 = 0;
	var uLocal_10786 = 0;
	var uLocal_10787 = 0;
	var uLocal_10788 = 0;
	var uLocal_10789 = 0;
	var uLocal_10790 = 0;
	var uLocal_10791 = 0;
	var uLocal_10792 = 0;
	var uLocal_10793 = 0;
	var uLocal_10794 = 0;
	var uLocal_10795 = 0;
	var uLocal_10796 = 0;
	var uLocal_10797 = 0;
	var uLocal_10798 = 0;
	var uLocal_10799 = 0;
	var uLocal_10800 = 0;
	var uLocal_10801 = 0;
	var uLocal_10802 = 0;
	var uLocal_10803 = 0;
	var uLocal_10804 = 0;
	var uLocal_10805 = 0;
	var uLocal_10806 = 0;
	var uLocal_10807 = 0;
	var uLocal_10808 = 0;
	var uLocal_10809 = 0;
	var uLocal_10810 = 0;
	var uLocal_10811 = 0;
	var uLocal_10812 = 0;
	var uLocal_10813 = 0;
	var uLocal_10814 = 0;
	var uLocal_10815 = 0;
	var uLocal_10816 = 0;
	var uLocal_10817 = 0;
	var uLocal_10818 = 0;
	var uLocal_10819 = 0;
	var uLocal_10820 = 0;
	var uLocal_10821 = 0;
	var uLocal_10822 = 0;
	var uLocal_10823 = 0;
	var uLocal_10824 = 0;
	var uLocal_10825 = 0;
	var uLocal_10826 = 0;
	var uLocal_10827 = 0;
	var uLocal_10828 = 0;
	var uLocal_10829 = 0;
	var uLocal_10830 = 0;
	var uLocal_10831 = 0;
	var uLocal_10832 = 0;
	var uLocal_10833 = 0;
	var uLocal_10834 = 0;
	var uLocal_10835 = 0;
	var uLocal_10836 = 0;
	var uLocal_10837 = 0;
	var uLocal_10838 = 0;
	var uLocal_10839 = 0;
	var uLocal_10840 = 0;
	var uLocal_10841 = 0;
	var uLocal_10842 = 0;
	var uLocal_10843 = 0;
	var uLocal_10844 = 0;
	var uLocal_10845 = 0;
	var uLocal_10846 = 0;
	var uLocal_10847 = 0;
	var uLocal_10848 = 0;
	var uLocal_10849 = 0;
	var uLocal_10850 = 0;
	var uLocal_10851 = 0;
	var uLocal_10852 = 0;
	var uLocal_10853 = 0;
	var uLocal_10854 = 0;
	var uLocal_10855 = 0;
	var uLocal_10856 = 0;
	var uLocal_10857 = 0;
	var uLocal_10858 = 0;
	var uLocal_10859 = 0;
	var uLocal_10860 = 0;
	var uLocal_10861 = 0;
	var uLocal_10862 = 0;
	var uLocal_10863 = 0;
	var uLocal_10864 = 0;
	var uLocal_10865 = 0;
	var uLocal_10866 = 0;
	var uLocal_10867 = 0;
	var uLocal_10868 = 0;
	var uLocal_10869 = 0;
	var uLocal_10870 = 0;
	var uLocal_10871 = 0;
	var uLocal_10872 = 0;
	var uLocal_10873 = 0;
	var uLocal_10874 = 0;
	var uLocal_10875 = 0;
	var uLocal_10876 = 0;
	var uLocal_10877 = 0;
	var uLocal_10878 = 0;
	var uLocal_10879 = 0;
	var uLocal_10880 = 0;
	var uLocal_10881 = 0;
	var uLocal_10882 = 0;
	var uLocal_10883 = 0;
	var uLocal_10884 = 0;
	var uLocal_10885 = 0;
	var uLocal_10886 = 0;
	var uLocal_10887 = 0;
	var uLocal_10888 = 0;
	var uLocal_10889 = 0;
	var uLocal_10890 = 0;
	var uLocal_10891 = 0;
	var uLocal_10892 = 0;
	var uLocal_10893 = 0;
	var uLocal_10894 = 0;
	var uLocal_10895 = 0;
	var uLocal_10896 = 0;
	var uLocal_10897 = 0;
	var uLocal_10898 = 0;
	var uLocal_10899 = 0;
	var uLocal_10900 = 0;
	var uLocal_10901 = 0;
	var uLocal_10902 = 0;
	var uLocal_10903 = 0;
	var uLocal_10904 = 0;
	var uLocal_10905 = 0;
	var uLocal_10906 = 0;
	var uLocal_10907 = 0;
	var uLocal_10908 = 0;
	var uLocal_10909 = 0;
	var uLocal_10910 = 0;
	var uLocal_10911 = 0;
	var uLocal_10912 = 0;
	var uLocal_10913 = 0;
	var uLocal_10914 = 0;
	var uLocal_10915 = 0;
	var uLocal_10916 = 0;
	var uLocal_10917 = 0;
	var uLocal_10918 = 0;
	var uLocal_10919 = 0;
	var uLocal_10920 = 0;
	var uLocal_10921 = 0;
	var uLocal_10922 = 0;
	var uLocal_10923 = 0;
	var uLocal_10924 = 0;
	var uLocal_10925 = 0;
	var uLocal_10926 = 0;
	var uLocal_10927 = 0;
	var uLocal_10928 = 0;
	var uLocal_10929 = 0;
	var uLocal_10930 = 0;
	var uLocal_10931 = 0;
	var uLocal_10932 = 0;
	var uLocal_10933 = 0;
	var uLocal_10934 = 0;
	var uLocal_10935 = 0;
	var uLocal_10936 = 0;
	var uLocal_10937 = 0;
	var uLocal_10938 = 0;
	var uLocal_10939 = 0;
	var uLocal_10940 = 0;
	var uLocal_10941 = 0;
	var uLocal_10942 = 0;
	var uLocal_10943 = 0;
	var uLocal_10944 = 0;
	var uLocal_10945 = 0;
	var uLocal_10946 = 0;
	var uLocal_10947 = 0;
	var uLocal_10948 = 0;
	var uLocal_10949 = 0;
	var uLocal_10950 = 0;
	var uLocal_10951 = 0;
	var uLocal_10952 = 0;
	var uLocal_10953 = 0;
	var uLocal_10954 = 0;
	var uLocal_10955 = 0;
	var uLocal_10956 = 0;
	var uLocal_10957 = 0;
	var uLocal_10958 = 0;
	var uLocal_10959 = 0;
	var uLocal_10960 = 0;
	var uLocal_10961 = 0;
	var uLocal_10962 = 0;
	var uLocal_10963 = 0;
	var uLocal_10964 = 0;
	var uLocal_10965 = 0;
	var uLocal_10966 = 0;
	var uLocal_10967 = 0;
	var uLocal_10968 = 0;
	var uLocal_10969 = 0;
	var uLocal_10970 = 0;
	var uLocal_10971 = 0;
	var uLocal_10972 = 0;
	var uLocal_10973 = 0;
	var uLocal_10974 = 0;
	var uLocal_10975 = 0;
	var uLocal_10976 = 0;
	var uLocal_10977 = 0;
	var uLocal_10978 = 0;
	var uLocal_10979 = 0;
	var uLocal_10980 = 0;
	var uLocal_10981 = 0;
	var uLocal_10982 = 0;
	var uLocal_10983 = 0;
	var uLocal_10984 = 0;
	var uLocal_10985 = 0;
	var uLocal_10986 = 0;
	var uLocal_10987 = 0;
	var uLocal_10988 = 60;
	var uLocal_10989 = 0;
	var uLocal_10990 = 0;
	var uLocal_10991 = 0;
	var uLocal_10992 = 0;
	var uLocal_10993 = 0;
	var uLocal_10994 = 0;
	var uLocal_10995 = 0;
	var uLocal_10996 = 0;
	var uLocal_10997 = 0;
	var uLocal_10998 = 0;
	var uLocal_10999 = 0;
	var uLocal_11000 = 0;
	var uLocal_11001 = 0;
	var uLocal_11002 = 0;
	var uLocal_11003 = 0;
	var uLocal_11004 = 0;
	var uLocal_11005 = 0;
	var uLocal_11006 = 0;
	var uLocal_11007 = 0;
	var uLocal_11008 = 0;
	var uLocal_11009 = 0;
	var uLocal_11010 = 0;
	var uLocal_11011 = 0;
	var uLocal_11012 = 0;
	var uLocal_11013 = 0;
	var uLocal_11014 = 0;
	var uLocal_11015 = 0;
	var uLocal_11016 = 0;
	var uLocal_11017 = 0;
	var uLocal_11018 = 0;
	var uLocal_11019 = 0;
	var uLocal_11020 = 0;
	var uLocal_11021 = 0;
	var uLocal_11022 = 0;
	var uLocal_11023 = 0;
	var uLocal_11024 = 0;
	var uLocal_11025 = 0;
	var uLocal_11026 = 0;
	var uLocal_11027 = 0;
	var uLocal_11028 = 0;
	var uLocal_11029 = 0;
	var uLocal_11030 = 0;
	var uLocal_11031 = 0;
	var uLocal_11032 = 0;
	var uLocal_11033 = 0;
	var uLocal_11034 = 0;
	var uLocal_11035 = 0;
	var uLocal_11036 = 0;
	var uLocal_11037 = 0;
	var uLocal_11038 = 0;
	var uLocal_11039 = 0;
	var uLocal_11040 = 0;
	var uLocal_11041 = 0;
	var uLocal_11042 = 0;
	var uLocal_11043 = 0;
	var uLocal_11044 = 0;
	var uLocal_11045 = 0;
	var uLocal_11046 = 0;
	var uLocal_11047 = 0;
	var uLocal_11048 = 0;
	var uLocal_11049 = 0;
	var uLocal_11050 = 0;
	var uLocal_11051 = 0;
	var uLocal_11052 = 0;
	var uLocal_11053 = 0;
	var uLocal_11054 = 0;
	var uLocal_11055 = 0;
	var uLocal_11056 = 0;
	var uLocal_11057 = 0;
	var uLocal_11058 = 0;
	var uLocal_11059 = 0;
	var uLocal_11060 = 0;
	var uLocal_11061 = 0;
	var uLocal_11062 = 0;
	var uLocal_11063 = 0;
	var uLocal_11064 = 0;
	var uLocal_11065 = 0;
	var uLocal_11066 = 0;
	var uLocal_11067 = 0;
	var uLocal_11068 = 0;
	var uLocal_11069 = 0;
	var uLocal_11070 = 0;
	var uLocal_11071 = 0;
	var uLocal_11072 = 0;
	var uLocal_11073 = 0;
	var uLocal_11074 = 0;
	var uLocal_11075 = 0;
	var uLocal_11076 = 0;
	var uLocal_11077 = 0;
	var uLocal_11078 = 0;
	var uLocal_11079 = 0;
	var uLocal_11080 = 0;
	var uLocal_11081 = 0;
	var uLocal_11082 = 0;
	var uLocal_11083 = 0;
	var uLocal_11084 = 0;
	var uLocal_11085 = 0;
	var uLocal_11086 = 0;
	var uLocal_11087 = 0;
	var uLocal_11088 = 0;
	var uLocal_11089 = 0;
	var uLocal_11090 = 0;
	var uLocal_11091 = 0;
	var uLocal_11092 = 0;
	var uLocal_11093 = 0;
	var uLocal_11094 = 0;
	var uLocal_11095 = 0;
	var uLocal_11096 = 0;
	var uLocal_11097 = 0;
	var uLocal_11098 = 0;
	var uLocal_11099 = 0;
	var uLocal_11100 = 0;
	var uLocal_11101 = 0;
	var uLocal_11102 = 0;
	var uLocal_11103 = 0;
	var uLocal_11104 = 0;
	var uLocal_11105 = 0;
	var uLocal_11106 = 0;
	var uLocal_11107 = 0;
	var uLocal_11108 = 0;
	var uLocal_11109 = 0;
	var uLocal_11110 = 0;
	var uLocal_11111 = 0;
	var uLocal_11112 = 0;
	var uLocal_11113 = 0;
	var uLocal_11114 = 0;
	var uLocal_11115 = 0;
	var uLocal_11116 = 0;
	var uLocal_11117 = 0;
	var uLocal_11118 = 0;
	var uLocal_11119 = 0;
	var uLocal_11120 = 0;
	var uLocal_11121 = 0;
	var uLocal_11122 = 0;
	var uLocal_11123 = 0;
	var uLocal_11124 = 0;
	var uLocal_11125 = 0;
	var uLocal_11126 = 0;
	var uLocal_11127 = 0;
	var uLocal_11128 = 0;
	var uLocal_11129 = 0;
	var uLocal_11130 = 0;
	var uLocal_11131 = 0;
	var uLocal_11132 = 0;
	var uLocal_11133 = 0;
	var uLocal_11134 = 0;
	var uLocal_11135 = 0;
	var uLocal_11136 = 0;
	var uLocal_11137 = 0;
	var uLocal_11138 = 0;
	var uLocal_11139 = 0;
	var uLocal_11140 = 0;
	var uLocal_11141 = 0;
	var uLocal_11142 = 0;
	var uLocal_11143 = 0;
	var uLocal_11144 = 0;
	var uLocal_11145 = 0;
	var uLocal_11146 = 0;
	var uLocal_11147 = 0;
	var uLocal_11148 = 0;
	var uLocal_11149 = 0;
	var uLocal_11150 = 0;
	var uLocal_11151 = 0;
	var uLocal_11152 = 0;
	var uLocal_11153 = 0;
	var uLocal_11154 = 0;
	var uLocal_11155 = 0;
	var uLocal_11156 = 0;
	var uLocal_11157 = 0;
	var uLocal_11158 = 0;
	var uLocal_11159 = 0;
	var uLocal_11160 = 0;
	var uLocal_11161 = 0;
	var uLocal_11162 = 0;
	var uLocal_11163 = 0;
	var uLocal_11164 = 0;
	var uLocal_11165 = 0;
	var uLocal_11166 = 0;
	var uLocal_11167 = 0;
	var uLocal_11168 = 0;
	var uLocal_11169 = 0;
	var uLocal_11170 = 0;
	var uLocal_11171 = 0;
	var uLocal_11172 = 0;
	var uLocal_11173 = 0;
	var uLocal_11174 = 0;
	var uLocal_11175 = 0;
	var uLocal_11176 = 0;
	var uLocal_11177 = 0;
	var uLocal_11178 = 0;
	var uLocal_11179 = 0;
	var uLocal_11180 = 0;
	var uLocal_11181 = 0;
	var uLocal_11182 = 0;
	var uLocal_11183 = 0;
	var uLocal_11184 = 0;
	var uLocal_11185 = 0;
	var uLocal_11186 = 0;
	var uLocal_11187 = 0;
	var uLocal_11188 = 0;
	var uLocal_11189 = 0;
	var uLocal_11190 = 0;
	var uLocal_11191 = 0;
	var uLocal_11192 = 0;
	var uLocal_11193 = 0;
	var uLocal_11194 = 0;
	var uLocal_11195 = 0;
	var uLocal_11196 = 0;
	var uLocal_11197 = 0;
	var uLocal_11198 = 0;
	var uLocal_11199 = 0;
	var uLocal_11200 = 0;
	var uLocal_11201 = 0;
	var uLocal_11202 = 0;
	var uLocal_11203 = 0;
	var uLocal_11204 = 0;
	var uLocal_11205 = 0;
	var uLocal_11206 = 0;
	var uLocal_11207 = 0;
	var uLocal_11208 = 0;
	var uLocal_11209 = 0;
	var uLocal_11210 = 0;
	var uLocal_11211 = 0;
	var uLocal_11212 = 0;
	var uLocal_11213 = 0;
	var uLocal_11214 = 0;
	var uLocal_11215 = 0;
	var uLocal_11216 = 0;
	var uLocal_11217 = 0;
	var uLocal_11218 = 0;
	var uLocal_11219 = 0;
	var uLocal_11220 = 0;
	var uLocal_11221 = 0;
	var uLocal_11222 = 0;
	var uLocal_11223 = 0;
	var uLocal_11224 = 0;
	var uLocal_11225 = 0;
	var uLocal_11226 = 0;
	var uLocal_11227 = 0;
	var uLocal_11228 = 0;
	var uLocal_11229 = 0;
	var uLocal_11230 = 0;
	var uLocal_11231 = 0;
	var uLocal_11232 = 0;
	var uLocal_11233 = 0;
	var uLocal_11234 = 0;
	var uLocal_11235 = 0;
	var uLocal_11236 = 0;
	var uLocal_11237 = 0;
	var uLocal_11238 = 0;
	var uLocal_11239 = 0;
	var uLocal_11240 = 0;
	var uLocal_11241 = 0;
	var uLocal_11242 = 0;
	var uLocal_11243 = 0;
	var uLocal_11244 = 0;
	var uLocal_11245 = 0;
	var uLocal_11246 = 0;
	var uLocal_11247 = 0;
	var uLocal_11248 = 0;
	var uLocal_11249 = 0;
	var uLocal_11250 = 0;
	var uLocal_11251 = 0;
	var uLocal_11252 = 0;
	var uLocal_11253 = 0;
	var uLocal_11254 = 0;
	var uLocal_11255 = 0;
	var uLocal_11256 = 0;
	var uLocal_11257 = 0;
	var uLocal_11258 = 0;
	var uLocal_11259 = 0;
	var uLocal_11260 = 0;
	var uLocal_11261 = 0;
	var uLocal_11262 = 0;
	var uLocal_11263 = 0;
	var uLocal_11264 = 0;
	var uLocal_11265 = 0;
	var uLocal_11266 = 0;
	var uLocal_11267 = 0;
	var uLocal_11268 = 0;
	var uLocal_11269 = 0;
	var uLocal_11270 = 0;
	var uLocal_11271 = 0;
	var uLocal_11272 = 0;
	var uLocal_11273 = 0;
	var uLocal_11274 = 0;
	var uLocal_11275 = 0;
	var uLocal_11276 = 0;
	var uLocal_11277 = 0;
	var uLocal_11278 = 0;
	var uLocal_11279 = 0;
	var uLocal_11280 = 0;
	var uLocal_11281 = 0;
	var uLocal_11282 = 0;
	var uLocal_11283 = 0;
	var uLocal_11284 = 0;
	var uLocal_11285 = 0;
	var uLocal_11286 = 0;
	var uLocal_11287 = 0;
	var uLocal_11288 = 0;
	var uLocal_11289 = 0;
	var uLocal_11290 = 0;
	var uLocal_11291 = 0;
	var uLocal_11292 = 0;
	var uLocal_11293 = 0;
	var uLocal_11294 = 0;
	var uLocal_11295 = 0;
	var uLocal_11296 = 0;
	var uLocal_11297 = 0;
	var uLocal_11298 = 0;
	var uLocal_11299 = 0;
	var uLocal_11300 = 0;
	var uLocal_11301 = 0;
	var uLocal_11302 = 0;
	var uLocal_11303 = 0;
	var uLocal_11304 = 0;
	var uLocal_11305 = 0;
	var uLocal_11306 = 0;
	var uLocal_11307 = 0;
	var uLocal_11308 = 0;
	var uLocal_11309 = 0;
	var uLocal_11310 = 0;
	var uLocal_11311 = 0;
	var uLocal_11312 = 0;
	var uLocal_11313 = 0;
	var uLocal_11314 = 0;
	var uLocal_11315 = 0;
	var uLocal_11316 = 0;
	var uLocal_11317 = 0;
	var uLocal_11318 = 0;
	var uLocal_11319 = 0;
	var uLocal_11320 = 0;
	var uLocal_11321 = 0;
	var uLocal_11322 = 0;
	var uLocal_11323 = 0;
	var uLocal_11324 = 0;
	var uLocal_11325 = 0;
	var uLocal_11326 = 0;
	var uLocal_11327 = 0;
	var uLocal_11328 = 0;
	var uLocal_11329 = 0;
	var uLocal_11330 = 0;
	var uLocal_11331 = 0;
	var uLocal_11332 = 0;
	var uLocal_11333 = 0;
	var uLocal_11334 = 0;
	var uLocal_11335 = 0;
	var uLocal_11336 = 0;
	var uLocal_11337 = 0;
	var uLocal_11338 = 0;
	var uLocal_11339 = 0;
	var uLocal_11340 = 0;
	var uLocal_11341 = 0;
	var uLocal_11342 = 0;
	var uLocal_11343 = 0;
	var uLocal_11344 = 0;
	var uLocal_11345 = 0;
	var uLocal_11346 = 0;
	var uLocal_11347 = 0;
	var uLocal_11348 = 0;
	var uLocal_11349 = 0;
	var uLocal_11350 = 0;
	var uLocal_11351 = 0;
	var uLocal_11352 = 0;
	var uLocal_11353 = 0;
	var uLocal_11354 = 0;
	var uLocal_11355 = 0;
	var uLocal_11356 = 0;
	var uLocal_11357 = 0;
	var uLocal_11358 = 0;
	var uLocal_11359 = 0;
	var uLocal_11360 = 0;
	var uLocal_11361 = 0;
	var uLocal_11362 = 0;
	var uLocal_11363 = 0;
	var uLocal_11364 = 0;
	var uLocal_11365 = 0;
	var uLocal_11366 = 0;
	var uLocal_11367 = 0;
	var uLocal_11368 = 0;
	var uLocal_11369 = 0;
	var uLocal_11370 = 0;
	var uLocal_11371 = 0;
	var uLocal_11372 = 0;
	var uLocal_11373 = 0;
	var uLocal_11374 = 0;
	var uLocal_11375 = 0;
	var uLocal_11376 = 0;
	var uLocal_11377 = 0;
	var uLocal_11378 = 0;
	var uLocal_11379 = 0;
	var uLocal_11380 = 0;
	var uLocal_11381 = 0;
	var uLocal_11382 = 0;
	var uLocal_11383 = 0;
	var uLocal_11384 = 0;
	var uLocal_11385 = 0;
	var uLocal_11386 = 0;
	var uLocal_11387 = 0;
	var uLocal_11388 = 0;
	var uLocal_11389 = 0;
	var uLocal_11390 = 0;
	var uLocal_11391 = 0;
	var uLocal_11392 = 0;
	var uLocal_11393 = 0;
	var uLocal_11394 = 0;
	var uLocal_11395 = 0;
	var uLocal_11396 = 0;
	var uLocal_11397 = 0;
	var uLocal_11398 = 0;
	var uLocal_11399 = 0;
	var uLocal_11400 = 0;
	var uLocal_11401 = 0;
	var uLocal_11402 = 0;
	var uLocal_11403 = 0;
	var uLocal_11404 = 0;
	var uLocal_11405 = 0;
	var uLocal_11406 = 0;
	var uLocal_11407 = 0;
	var uLocal_11408 = 0;
	var uLocal_11409 = 0;
	var uLocal_11410 = 0;
	var uLocal_11411 = 0;
	var uLocal_11412 = 0;
	var uLocal_11413 = 0;
	var uLocal_11414 = 0;
	var uLocal_11415 = 0;
	var uLocal_11416 = 0;
	var uLocal_11417 = 0;
	var uLocal_11418 = 0;
	var uLocal_11419 = 0;
	var uLocal_11420 = 0;
	var uLocal_11421 = 0;
	var uLocal_11422 = 0;
	var uLocal_11423 = 0;
	var uLocal_11424 = 0;
	var uLocal_11425 = 0;
	var uLocal_11426 = 0;
	var uLocal_11427 = 0;
	var uLocal_11428 = 0;
	var uLocal_11429 = 0;
	var uLocal_11430 = 0;
	var uLocal_11431 = 0;
	var uLocal_11432 = 0;
	var uLocal_11433 = 0;
	var uLocal_11434 = 0;
	var uLocal_11435 = 0;
	var uLocal_11436 = 0;
	var uLocal_11437 = 0;
	var uLocal_11438 = 0;
	var uLocal_11439 = 0;
	var uLocal_11440 = 0;
	var uLocal_11441 = 0;
	var uLocal_11442 = 0;
	var uLocal_11443 = 0;
	var uLocal_11444 = 0;
	var uLocal_11445 = 0;
	var uLocal_11446 = 0;
	var uLocal_11447 = 0;
	var uLocal_11448 = 0;
	var uLocal_11449 = 0;
	var uLocal_11450 = 0;
	var uLocal_11451 = 0;
	var uLocal_11452 = 0;
	var uLocal_11453 = 0;
	var uLocal_11454 = 0;
	var uLocal_11455 = 0;
	var uLocal_11456 = 0;
	var uLocal_11457 = 0;
	var uLocal_11458 = 0;
	var uLocal_11459 = 0;
	var uLocal_11460 = 0;
	var uLocal_11461 = 0;
	var uLocal_11462 = 0;
	var uLocal_11463 = 0;
	var uLocal_11464 = 0;
	var uLocal_11465 = 0;
	var uLocal_11466 = 0;
	var uLocal_11467 = 0;
	var uLocal_11468 = 0;
	var uLocal_11469 = 0;
	var uLocal_11470 = 0;
	var uLocal_11471 = 0;
	var uLocal_11472 = 0;
	var uLocal_11473 = 0;
	var uLocal_11474 = 0;
	var uLocal_11475 = 0;
	var uLocal_11476 = 0;
	var uLocal_11477 = 0;
	var uLocal_11478 = 0;
	var uLocal_11479 = 0;
	var uLocal_11480 = 0;
	var uLocal_11481 = 0;
	var uLocal_11482 = 0;
	var uLocal_11483 = 0;
	var uLocal_11484 = 0;
	var uLocal_11485 = 0;
	var uLocal_11486 = 0;
	var uLocal_11487 = 0;
	var uLocal_11488 = 0;
	var uLocal_11489 = 0;
	var uLocal_11490 = 0;
	var uLocal_11491 = 0;
	var uLocal_11492 = 0;
	var uLocal_11493 = 0;
	var uLocal_11494 = 0;
	var uLocal_11495 = 0;
	var uLocal_11496 = 0;
	var uLocal_11497 = 0;
	var uLocal_11498 = 0;
	var uLocal_11499 = 0;
	var uLocal_11500 = 0;
	var uLocal_11501 = 0;
	var uLocal_11502 = 0;
	var uLocal_11503 = 0;
	var uLocal_11504 = 0;
	var uLocal_11505 = 0;
	var uLocal_11506 = 0;
	var uLocal_11507 = 0;
	var uLocal_11508 = 0;
	var uLocal_11509 = 0;
	var uLocal_11510 = 0;
	var uLocal_11511 = 0;
	var uLocal_11512 = 0;
	var uLocal_11513 = 0;
	var uLocal_11514 = 0;
	var uLocal_11515 = 0;
	var uLocal_11516 = 0;
	var uLocal_11517 = 0;
	var uLocal_11518 = 0;
	var uLocal_11519 = 0;
	var uLocal_11520 = 0;
	var uLocal_11521 = 0;
	var uLocal_11522 = 0;
	var uLocal_11523 = 0;
	var uLocal_11524 = 0;
	var uLocal_11525 = 0;
	var uLocal_11526 = 0;
	var uLocal_11527 = 0;
	var uLocal_11528 = 0;
	var uLocal_11529 = 0;
	var uLocal_11530 = 0;
	var uLocal_11531 = 0;
	var uLocal_11532 = 0;
	var uLocal_11533 = 0;
	var uLocal_11534 = 0;
	var uLocal_11535 = 0;
	var uLocal_11536 = 0;
	var uLocal_11537 = 0;
	var uLocal_11538 = 0;
	var uLocal_11539 = 0;
	var uLocal_11540 = 0;
	var uLocal_11541 = 0;
	var uLocal_11542 = 0;
	var uLocal_11543 = 0;
	var uLocal_11544 = 0;
	var uLocal_11545 = 0;
	var uLocal_11546 = 0;
	var uLocal_11547 = 0;
	var uLocal_11548 = 0;
	var uLocal_11549 = 0;
	var uLocal_11550 = 0;
	var uLocal_11551 = 0;
	var uLocal_11552 = 0;
	var uLocal_11553 = 0;
	var uLocal_11554 = 0;
	var uLocal_11555 = 0;
	var uLocal_11556 = 0;
	var uLocal_11557 = 0;
	var uLocal_11558 = 0;
	var uLocal_11559 = 0;
	var uLocal_11560 = 0;
	var uLocal_11561 = 0;
	var uLocal_11562 = 0;
	var uLocal_11563 = 0;
	var uLocal_11564 = 0;
	var uLocal_11565 = 0;
	var uLocal_11566 = 0;
	var uLocal_11567 = 0;
	var uLocal_11568 = 0;
	var uLocal_11569 = 0;
	var uLocal_11570 = 0;
	var uLocal_11571 = 0;
	var uLocal_11572 = 0;
	var uLocal_11573 = 0;
	var uLocal_11574 = 0;
	var uLocal_11575 = 0;
	var uLocal_11576 = 0;
	var uLocal_11577 = 0;
	var uLocal_11578 = 0;
	var uLocal_11579 = 0;
	var uLocal_11580 = 0;
	var uLocal_11581 = 0;
	var uLocal_11582 = 0;
	var uLocal_11583 = 0;
	var uLocal_11584 = 0;
	var uLocal_11585 = 0;
	var uLocal_11586 = 0;
	var uLocal_11587 = 0;
	var uLocal_11588 = 0;
	var uLocal_11589 = 0;
	var uLocal_11590 = 0;
	var uLocal_11591 = 0;
	var uLocal_11592 = 0;
	var uLocal_11593 = 0;
	var uLocal_11594 = 0;
	var uLocal_11595 = 0;
	var uLocal_11596 = 0;
	var uLocal_11597 = 0;
	var uLocal_11598 = 0;
	var uLocal_11599 = 0;
	var uLocal_11600 = 0;
	var uLocal_11601 = 0;
	var uLocal_11602 = 0;
	var uLocal_11603 = 0;
	var uLocal_11604 = 0;
	var uLocal_11605 = 0;
	var uLocal_11606 = 0;
	var uLocal_11607 = 0;
	var uLocal_11608 = 0;
	var uLocal_11609 = 0;
	var uLocal_11610 = 0;
	var uLocal_11611 = 0;
	var uLocal_11612 = 0;
	var uLocal_11613 = 0;
	var uLocal_11614 = 0;
	var uLocal_11615 = 0;
	var uLocal_11616 = 0;
	var uLocal_11617 = 0;
	var uLocal_11618 = 0;
	var uLocal_11619 = 0;
	var uLocal_11620 = 0;
	var uLocal_11621 = 0;
	var uLocal_11622 = 0;
	var uLocal_11623 = 0;
	var uLocal_11624 = 0;
	var uLocal_11625 = 0;
	var uLocal_11626 = 0;
	var uLocal_11627 = 0;
	var uLocal_11628 = 0;
	var uLocal_11629 = 0;
	var uLocal_11630 = 0;
	var uLocal_11631 = 0;
	var uLocal_11632 = 0;
	var uLocal_11633 = 0;
	var uLocal_11634 = 0;
	var uLocal_11635 = 0;
	var uLocal_11636 = 0;
	var uLocal_11637 = 0;
	var uLocal_11638 = 0;
	var uLocal_11639 = 0;
	var uLocal_11640 = 0;
	var uLocal_11641 = 0;
	var uLocal_11642 = 0;
	var uLocal_11643 = 0;
	var uLocal_11644 = 0;
	var uLocal_11645 = 0;
	var uLocal_11646 = 0;
	var uLocal_11647 = 0;
	var uLocal_11648 = 0;
	var uLocal_11649 = 0;
	var uLocal_11650 = 0;
	var uLocal_11651 = 0;
	var uLocal_11652 = 0;
	var uLocal_11653 = 0;
	var uLocal_11654 = 0;
	var uLocal_11655 = 0;
	var uLocal_11656 = 0;
	var uLocal_11657 = 0;
	var uLocal_11658 = 0;
	var uLocal_11659 = 0;
	var uLocal_11660 = 0;
	var uLocal_11661 = 0;
	var uLocal_11662 = 0;
	var uLocal_11663 = 0;
	var uLocal_11664 = 0;
	var uLocal_11665 = 0;
	var uLocal_11666 = 0;
	var uLocal_11667 = 0;
	var uLocal_11668 = 0;
	var uLocal_11669 = 0;
	var uLocal_11670 = 0;
	var uLocal_11671 = 0;
	var uLocal_11672 = 0;
	var uLocal_11673 = 0;
	var uLocal_11674 = 0;
	var uLocal_11675 = 0;
	var uLocal_11676 = 0;
	var uLocal_11677 = 0;
	var uLocal_11678 = 0;
	var uLocal_11679 = 0;
	var uLocal_11680 = 0;
	var uLocal_11681 = 0;
	var uLocal_11682 = 0;
	var uLocal_11683 = 0;
	var uLocal_11684 = 0;
	var uLocal_11685 = 0;
	var uLocal_11686 = 0;
	var uLocal_11687 = 0;
	var uLocal_11688 = 0;
	var uLocal_11689 = 0;
	var uLocal_11690 = 0;
	var uLocal_11691 = 0;
	var uLocal_11692 = 0;
	var uLocal_11693 = 0;
	var uLocal_11694 = 0;
	var uLocal_11695 = 0;
	var uLocal_11696 = 0;
	var uLocal_11697 = 0;
	var uLocal_11698 = 0;
	var uLocal_11699 = 0;
	var uLocal_11700 = 0;
	var uLocal_11701 = 0;
	var uLocal_11702 = 0;
	var uLocal_11703 = 0;
	var uLocal_11704 = 0;
	var uLocal_11705 = 0;
	var uLocal_11706 = 0;
	var uLocal_11707 = 0;
	var uLocal_11708 = 0;
	var uLocal_11709 = 0;
	var uLocal_11710 = 0;
	var uLocal_11711 = 0;
	var uLocal_11712 = 0;
	var uLocal_11713 = 0;
	var uLocal_11714 = 0;
	var uLocal_11715 = 0;
	var uLocal_11716 = 0;
	var uLocal_11717 = 0;
	var uLocal_11718 = 0;
	var uLocal_11719 = 0;
	var uLocal_11720 = 0;
	var uLocal_11721 = 0;
	var uLocal_11722 = 0;
	var uLocal_11723 = 0;
	var uLocal_11724 = 0;
	var uLocal_11725 = 0;
	var uLocal_11726 = 0;
	var uLocal_11727 = 0;
	var uLocal_11728 = 0;
	var uLocal_11729 = 0;
	var uLocal_11730 = 0;
	var uLocal_11731 = 0;
	var uLocal_11732 = 0;
	var uLocal_11733 = 0;
	var uLocal_11734 = 0;
	var uLocal_11735 = 0;
	var uLocal_11736 = 0;
	var uLocal_11737 = 0;
	var uLocal_11738 = 0;
	var uLocal_11739 = 0;
	var uLocal_11740 = 0;
	var uLocal_11741 = 0;
	var uLocal_11742 = 0;
	var uLocal_11743 = 0;
	var uLocal_11744 = 0;
	var uLocal_11745 = 0;
	var uLocal_11746 = 0;
	var uLocal_11747 = 0;
	var uLocal_11748 = 0;
	var uLocal_11749 = 0;
	var uLocal_11750 = 0;
	var uLocal_11751 = 0;
	var uLocal_11752 = 0;
	var uLocal_11753 = 0;
	var uLocal_11754 = 0;
	var uLocal_11755 = 0;
	var uLocal_11756 = 0;
	var uLocal_11757 = 0;
	var uLocal_11758 = 0;
	var uLocal_11759 = 0;
	var uLocal_11760 = 0;
	var uLocal_11761 = 0;
	var uLocal_11762 = 0;
	var uLocal_11763 = 0;
	var uLocal_11764 = 0;
	var uLocal_11765 = 0;
	var uLocal_11766 = 0;
	var uLocal_11767 = 0;
	var uLocal_11768 = 0;
	var uLocal_11769 = 0;
	var uLocal_11770 = 0;
	var uLocal_11771 = 0;
	var uLocal_11772 = 0;
	var uLocal_11773 = 0;
	var uLocal_11774 = 0;
	var uLocal_11775 = 0;
	var uLocal_11776 = 0;
	var uLocal_11777 = 0;
	var uLocal_11778 = 0;
	var uLocal_11779 = 0;
	var uLocal_11780 = 0;
	var uLocal_11781 = 0;
	var uLocal_11782 = 0;
	var uLocal_11783 = 0;
	var uLocal_11784 = 0;
	var uLocal_11785 = 0;
	var uLocal_11786 = 0;
	var uLocal_11787 = 0;
	var uLocal_11788 = 0;
	var uLocal_11789 = 0;
	var uLocal_11790 = 0;
	var uLocal_11791 = 0;
	var uLocal_11792 = 0;
	var uLocal_11793 = 0;
	var uLocal_11794 = 0;
	var uLocal_11795 = 0;
	var uLocal_11796 = 0;
	var uLocal_11797 = 0;
	var uLocal_11798 = 0;
	var uLocal_11799 = 0;
	var uLocal_11800 = 0;
	var uLocal_11801 = 0;
	var uLocal_11802 = 0;
	var uLocal_11803 = 0;
	var uLocal_11804 = 0;
	var uLocal_11805 = 0;
	var uLocal_11806 = 0;
	var uLocal_11807 = 0;
	var uLocal_11808 = 0;
	var uLocal_11809 = 0;
	var uLocal_11810 = 0;
	var uLocal_11811 = 0;
	var uLocal_11812 = 0;
	var uLocal_11813 = 0;
	var uLocal_11814 = 0;
	var uLocal_11815 = 0;
	var uLocal_11816 = 0;
	var uLocal_11817 = 0;
	var uLocal_11818 = 0;
	var uLocal_11819 = 0;
	var uLocal_11820 = 0;
	var uLocal_11821 = 0;
	var uLocal_11822 = 0;
	var uLocal_11823 = 0;
	var uLocal_11824 = 0;
	var uLocal_11825 = 0;
	var uLocal_11826 = 0;
	var uLocal_11827 = 0;
	var uLocal_11828 = 0;
	var uLocal_11829 = 0;
	var uLocal_11830 = 0;
	var uLocal_11831 = 0;
	var uLocal_11832 = 0;
	var uLocal_11833 = 0;
	var uLocal_11834 = 0;
	var uLocal_11835 = 0;
	var uLocal_11836 = 0;
	var uLocal_11837 = 0;
	var uLocal_11838 = 0;
	var uLocal_11839 = 0;
	var uLocal_11840 = 0;
	var uLocal_11841 = 0;
	var uLocal_11842 = 0;
	var uLocal_11843 = 0;
	var uLocal_11844 = 0;
	var uLocal_11845 = 0;
	var uLocal_11846 = 0;
	var uLocal_11847 = 0;
	var uLocal_11848 = 0;
	var uLocal_11849 = 0;
	var uLocal_11850 = 0;
	var uLocal_11851 = 0;
	var uLocal_11852 = 0;
	var uLocal_11853 = 0;
	var uLocal_11854 = 0;
	var uLocal_11855 = 0;
	var uLocal_11856 = 0;
	var uLocal_11857 = 0;
	var uLocal_11858 = 0;
	var uLocal_11859 = 0;
	var uLocal_11860 = 0;
	var uLocal_11861 = 0;
	var uLocal_11862 = 0;
	var uLocal_11863 = 0;
	var uLocal_11864 = 0;
	var uLocal_11865 = 0;
	var uLocal_11866 = 0;
	var uLocal_11867 = 0;
	var uLocal_11868 = 0;
	var uLocal_11869 = 0;
	var uLocal_11870 = 0;
	var uLocal_11871 = 0;
	var uLocal_11872 = 0;
	var uLocal_11873 = 0;
	var uLocal_11874 = 0;
	var uLocal_11875 = 0;
	var uLocal_11876 = 0;
	var uLocal_11877 = 0;
	var uLocal_11878 = 0;
	var uLocal_11879 = 0;
	var uLocal_11880 = 0;
	var uLocal_11881 = 0;
	var uLocal_11882 = 0;
	var uLocal_11883 = 0;
	var uLocal_11884 = 0;
	var uLocal_11885 = 0;
	var uLocal_11886 = 0;
	var uLocal_11887 = 0;
	var uLocal_11888 = 0;
	var uLocal_11889 = 0;
	var uLocal_11890 = 0;
	var uLocal_11891 = 0;
	var uLocal_11892 = 0;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = 0;
	var uLocal_11896 = 0;
	var uLocal_11897 = 0;
	var uLocal_11898 = 0;
	var uLocal_11899 = 0;
	var uLocal_11900 = 0;
	var uLocal_11901 = 0;
	var uLocal_11902 = 0;
	var uLocal_11903 = 0;
	var uLocal_11904 = 0;
	var uLocal_11905 = 0;
	var uLocal_11906 = 0;
	var uLocal_11907 = 0;
	var uLocal_11908 = 0;
	var uLocal_11909 = 0;
	var uLocal_11910 = 0;
	var uLocal_11911 = 0;
	var uLocal_11912 = 0;
	var uLocal_11913 = 0;
	var uLocal_11914 = 0;
	var uLocal_11915 = 0;
	var uLocal_11916 = 0;
	var uLocal_11917 = 0;
	var uLocal_11918 = 0;
	var uLocal_11919 = 0;
	var uLocal_11920 = 0;
	var uLocal_11921 = 0;
	var uLocal_11922 = 0;
	var uLocal_11923 = 0;
	var uLocal_11924 = 0;
	var uLocal_11925 = 0;
	var uLocal_11926 = 0;
	var uLocal_11927 = 0;
	var uLocal_11928 = 0;
	var uLocal_11929 = 0;
	var uLocal_11930 = 0;
	var uLocal_11931 = 0;
	var uLocal_11932 = 0;
	var uLocal_11933 = 0;
	var uLocal_11934 = 0;
	var uLocal_11935 = 0;
	var uLocal_11936 = 0;
	var uLocal_11937 = 0;
	var uLocal_11938 = 0;
	var uLocal_11939 = 0;
	var uLocal_11940 = 0;
	var uLocal_11941 = 0;
	var uLocal_11942 = 0;
	var uLocal_11943 = 0;
	var uLocal_11944 = 0;
	var uLocal_11945 = 0;
	var uLocal_11946 = 0;
	var uLocal_11947 = 0;
	var uLocal_11948 = 0;
	var uLocal_11949 = 15;
	var uLocal_11950 = 0;
	var uLocal_11951 = 0;
	var uLocal_11952 = 0;
	var uLocal_11953 = 0;
	var uLocal_11954 = 0;
	var uLocal_11955 = 0;
	var uLocal_11956 = 0;
	var uLocal_11957 = 0;
	var uLocal_11958 = 0;
	var uLocal_11959 = 0;
	var uLocal_11960 = 0;
	var uLocal_11961 = 0;
	var uLocal_11962 = 0;
	var uLocal_11963 = 0;
	var uLocal_11964 = 0;
	var uLocal_11965 = 0;
	var uLocal_11966 = 0;
	var uLocal_11967 = 0;
	var uLocal_11968 = 0;
	var uLocal_11969 = 0;
	var uLocal_11970 = 0;
	var uLocal_11971 = 0;
	var uLocal_11972 = 0;
	var uLocal_11973 = 0;
	var uLocal_11974 = 0;
	var uLocal_11975 = 0;
	var uLocal_11976 = 0;
	var uLocal_11977 = 0;
	var uLocal_11978 = 0;
	var uLocal_11979 = 0;
	var uLocal_11980 = 0;
	var uLocal_11981 = 0;
	var uLocal_11982 = 0;
	var uLocal_11983 = 0;
	var uLocal_11984 = 0;
	var uLocal_11985 = 0;
	var uLocal_11986 = 0;
	var uLocal_11987 = 0;
	var uLocal_11988 = 0;
	var uLocal_11989 = 0;
	var uLocal_11990 = 0;
	var uLocal_11991 = 0;
	var uLocal_11992 = 0;
	var uLocal_11993 = 0;
	var uLocal_11994 = 0;
	var uLocal_11995 = 0;
	var uLocal_11996 = 0;
	var uLocal_11997 = 0;
	var uLocal_11998 = 0;
	var uLocal_11999 = 0;
	var uLocal_12000 = 0;
	var uLocal_12001 = 0;
	var uLocal_12002 = 0;
	var uLocal_12003 = 0;
	var uLocal_12004 = 0;
	var uLocal_12005 = 0;
	var uLocal_12006 = 0;
	var uLocal_12007 = 0;
	var uLocal_12008 = 0;
	var uLocal_12009 = 0;
	var uLocal_12010 = 0;
	var uLocal_12011 = 0;
	var uLocal_12012 = 0;
	var uLocal_12013 = 0;
	var uLocal_12014 = 0;
	var uLocal_12015 = 0;
	var uLocal_12016 = 0;
	var uLocal_12017 = 0;
	var uLocal_12018 = 0;
	var uLocal_12019 = 0;
	var uLocal_12020 = 0;
	var uLocal_12021 = 0;
	var uLocal_12022 = 0;
	var uLocal_12023 = 0;
	var uLocal_12024 = 0;
	var uLocal_12025 = 0;
	var uLocal_12026 = 0;
	var uLocal_12027 = 0;
	var uLocal_12028 = 0;
	var uLocal_12029 = 0;
	var uLocal_12030 = 0;
	var uLocal_12031 = 0;
	var uLocal_12032 = 0;
	var uLocal_12033 = 0;
	var uLocal_12034 = 0;
	var uLocal_12035 = 0;
	var uLocal_12036 = 0;
	var uLocal_12037 = 0;
	var uLocal_12038 = 0;
	var uLocal_12039 = 0;
	var uLocal_12040 = 0;
	var uLocal_12041 = 0;
	var uLocal_12042 = 0;
	var uLocal_12043 = 0;
	var uLocal_12044 = 0;
	var uLocal_12045 = 0;
	var uLocal_12046 = 0;
	var uLocal_12047 = 0;
	var uLocal_12048 = 0;
	var uLocal_12049 = 0;
	var uLocal_12050 = 0;
	var uLocal_12051 = 0;
	var uLocal_12052 = 0;
	var uLocal_12053 = 0;
	var uLocal_12054 = 0;
	var uLocal_12055 = 0;
	var uLocal_12056 = 0;
	var uLocal_12057 = 0;
	var uLocal_12058 = 0;
	var uLocal_12059 = 0;
	var uLocal_12060 = 0;
	var uLocal_12061 = 0;
	var uLocal_12062 = 0;
	var uLocal_12063 = 0;
	var uLocal_12064 = 0;
	var uLocal_12065 = 0;
	var uLocal_12066 = 0;
	var uLocal_12067 = 0;
	var uLocal_12068 = 0;
	var uLocal_12069 = 0;
	var uLocal_12070 = 0;
	var uLocal_12071 = 0;
	var uLocal_12072 = 0;
	var uLocal_12073 = 0;
	var uLocal_12074 = 0;
	var uLocal_12075 = 0;
	var uLocal_12076 = 0;
	var uLocal_12077 = 0;
	var uLocal_12078 = 0;
	var uLocal_12079 = 0;
	var uLocal_12080 = 0;
	var uLocal_12081 = 0;
	var uLocal_12082 = 0;
	var uLocal_12083 = 0;
	var uLocal_12084 = 0;
	var uLocal_12085 = 0;
	var uLocal_12086 = 0;
	var uLocal_12087 = 0;
	var uLocal_12088 = 0;
	var uLocal_12089 = 0;
	var uLocal_12090 = 0;
	var uLocal_12091 = 0;
	var uLocal_12092 = 0;
	var uLocal_12093 = 0;
	var uLocal_12094 = 0;
	var uLocal_12095 = 0;
	var uLocal_12096 = 0;
	var uLocal_12097 = 0;
	var uLocal_12098 = 0;
	var uLocal_12099 = 0;
	var uLocal_12100 = 0;
	var uLocal_12101 = 0;
	var uLocal_12102 = 0;
	var uLocal_12103 = 0;
	var uLocal_12104 = 0;
	var uLocal_12105 = 0;
	var uLocal_12106 = 0;
	var uLocal_12107 = 0;
	var uLocal_12108 = 0;
	var uLocal_12109 = 0;
	var uLocal_12110 = 0;
	var uLocal_12111 = 0;
	var uLocal_12112 = 0;
	var uLocal_12113 = 0;
	var uLocal_12114 = 0;
	var uLocal_12115 = 0;
	var uLocal_12116 = 0;
	var uLocal_12117 = 0;
	var uLocal_12118 = 0;
	var uLocal_12119 = 0;
	var uLocal_12120 = 0;
	var uLocal_12121 = 0;
	var uLocal_12122 = 0;
	var uLocal_12123 = 0;
	var uLocal_12124 = 0;
	var uLocal_12125 = 0;
	var uLocal_12126 = 0;
	var uLocal_12127 = 0;
	var uLocal_12128 = 0;
	var uLocal_12129 = 0;
	var uLocal_12130 = 0;
	var uLocal_12131 = 0;
	var uLocal_12132 = 0;
	var uLocal_12133 = 0;
	var uLocal_12134 = 0;
	var uLocal_12135 = 0;
	var uLocal_12136 = 0;
	var uLocal_12137 = 0;
	var uLocal_12138 = 0;
	var uLocal_12139 = 0;
	var uLocal_12140 = 0;
	var uLocal_12141 = 0;
	var uLocal_12142 = 0;
	var uLocal_12143 = 0;
	var uLocal_12144 = 0;
	var uLocal_12145 = 0;
	var uLocal_12146 = 0;
	var uLocal_12147 = 0;
	var uLocal_12148 = 0;
	var uLocal_12149 = 0;
	var uLocal_12150 = 0;
	var uLocal_12151 = 0;
	var uLocal_12152 = 0;
	var uLocal_12153 = 0;
	var uLocal_12154 = 0;
	var uLocal_12155 = 0;
	var uLocal_12156 = 0;
	var uLocal_12157 = 0;
	var uLocal_12158 = 0;
	var uLocal_12159 = 0;
	var uLocal_12160 = 0;
	var uLocal_12161 = 0;
	var uLocal_12162 = 0;
	var uLocal_12163 = 0;
	var uLocal_12164 = 0;
	var uLocal_12165 = 0;
	var uLocal_12166 = 0;
	var uLocal_12167 = 0;
	var uLocal_12168 = 0;
	var uLocal_12169 = 0;
	var uLocal_12170 = 0;
	var uLocal_12171 = 0;
	var uLocal_12172 = 0;
	var uLocal_12173 = 0;
	var uLocal_12174 = 0;
	var uLocal_12175 = 0;
	var uLocal_12176 = 0;
	var uLocal_12177 = 0;
	var uLocal_12178 = 0;
	var uLocal_12179 = 0;
	var uLocal_12180 = 0;
	var uLocal_12181 = 0;
	var uLocal_12182 = 0;
	var uLocal_12183 = 0;
	var uLocal_12184 = 0;
	var uLocal_12185 = 0;
	var uLocal_12186 = 0;
	var uLocal_12187 = 0;
	var uLocal_12188 = 0;
	var uLocal_12189 = 0;
	var uLocal_12190 = 10;
	var uLocal_12191 = 0;
	var uLocal_12192 = 0;
	var uLocal_12193 = 0;
	var uLocal_12194 = 0;
	var uLocal_12195 = 0;
	var uLocal_12196 = 0;
	var uLocal_12197 = 0;
	var uLocal_12198 = 0;
	var uLocal_12199 = 0;
	var uLocal_12200 = 0;
	var uLocal_12201 = 0;
	var uLocal_12202 = 0;
	var uLocal_12203 = 0;
	var uLocal_12204 = 0;
	var uLocal_12205 = 0;
	var uLocal_12206 = 0;
	var uLocal_12207 = 0;
	var uLocal_12208 = 0;
	var uLocal_12209 = 0;
	var uLocal_12210 = 0;
	var uLocal_12211 = 0;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = 0;
	var uLocal_12216 = 0;
	var uLocal_12217 = 0;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = -1;
	var uLocal_12221 = 0;
	var uLocal_12222 = 0;
	var uLocal_12223 = 0;
	var uLocal_12224 = 0;
	var uLocal_12225 = 0;
	var uLocal_12226 = 0;
	var uLocal_12227 = 0;
	var uLocal_12228 = 0;
	var uLocal_12229 = 0;
	var uLocal_12230 = 0;
	var uLocal_12231 = 0;
	var uLocal_12232 = 65;
	var uLocal_12233 = 0;
	var uLocal_12234 = 0;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = 0;
	var uLocal_12238 = 0;
	var uLocal_12239 = 0;
	var uLocal_12240 = 0;
	var uLocal_12241 = 0;
	var uLocal_12242 = 0;
	var uLocal_12243 = -1569615261;
	var uLocal_12244 = 0;
	var uLocal_12245 = 0;
	var uLocal_12246 = 0;
	var uLocal_12247 = 0;
	var uLocal_12248 = 0;
	var uLocal_12249 = 0;
	var uLocal_12250 = 0;
	var uLocal_12251 = 0;
	var uLocal_12252 = 0;
	var uLocal_12253 = 0;
	var uLocal_12254 = 0;
	var uLocal_12255 = 0;
	var uLocal_12256 = -1569615261;
	var uLocal_12257 = 0;
	var uLocal_12258 = 0;
	var uLocal_12259 = 0;
	var uLocal_12260 = 0;
	var uLocal_12261 = 0;
	var uLocal_12262 = 0;
	var uLocal_12263 = 0;
	var uLocal_12264 = 0;
	var uLocal_12265 = 0;
	var uLocal_12266 = 0;
	var uLocal_12267 = 0;
	var uLocal_12268 = 0;
	var uLocal_12269 = -1569615261;
	var uLocal_12270 = 0;
	var uLocal_12271 = 0;
	var uLocal_12272 = 0;
	var uLocal_12273 = 0;
	var uLocal_12274 = 0;
	var uLocal_12275 = 0;
	var uLocal_12276 = 0;
	var uLocal_12277 = 0;
	var uLocal_12278 = 0;
	var uLocal_12279 = 0;
	var uLocal_12280 = 0;
	var uLocal_12281 = 0;
	var uLocal_12282 = -1569615261;
	var uLocal_12283 = 0;
	var uLocal_12284 = 0;
	var uLocal_12285 = 0;
	var uLocal_12286 = 0;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = 0;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = 0;
	var uLocal_12294 = 0;
	var uLocal_12295 = -1569615261;
	var uLocal_12296 = 0;
	var uLocal_12297 = 0;
	var uLocal_12298 = 0;
	var uLocal_12299 = 0;
	var uLocal_12300 = 0;
	var uLocal_12301 = 0;
	var uLocal_12302 = 0;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = 0;
	var uLocal_12307 = 0;
	var uLocal_12308 = -1569615261;
	var uLocal_12309 = 0;
	var uLocal_12310 = 0;
	var uLocal_12311 = 0;
	var uLocal_12312 = 0;
	var uLocal_12313 = 0;
	var uLocal_12314 = 0;
	var uLocal_12315 = 0;
	var uLocal_12316 = 0;
	var uLocal_12317 = 0;
	var uLocal_12318 = 0;
	var uLocal_12319 = 0;
	var uLocal_12320 = 0;
	var uLocal_12321 = -1569615261;
	var uLocal_12322 = 0;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = 0;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = 0;
	var uLocal_12329 = 0;
	var uLocal_12330 = 0;
	var uLocal_12331 = 0;
	var uLocal_12332 = 0;
	var uLocal_12333 = 0;
	var uLocal_12334 = -1569615261;
	var uLocal_12335 = 0;
	var uLocal_12336 = 0;
	var uLocal_12337 = 0;
	var uLocal_12338 = 0;
	var uLocal_12339 = 0;
	var uLocal_12340 = 0;
	var uLocal_12341 = 0;
	var uLocal_12342 = 0;
	var uLocal_12343 = 0;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 0;
	var uLocal_12347 = -1569615261;
	var uLocal_12348 = 0;
	var uLocal_12349 = 0;
	var uLocal_12350 = 0;
	var uLocal_12351 = 0;
	var uLocal_12352 = 0;
	var uLocal_12353 = 0;
	var uLocal_12354 = 0;
	var uLocal_12355 = 0;
	var uLocal_12356 = 0;
	var uLocal_12357 = 0;
	var uLocal_12358 = 0;
	var uLocal_12359 = 0;
	var uLocal_12360 = -1569615261;
	var uLocal_12361 = 0;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = 0;
	var uLocal_12365 = 0;
	var uLocal_12366 = 0;
	var uLocal_12367 = 0;
	var uLocal_12368 = 0;
	var uLocal_12369 = 0;
	var uLocal_12370 = 0;
	var uLocal_12371 = 0;
	var uLocal_12372 = 0;
	var uLocal_12373 = -1569615261;
	var uLocal_12374 = 0;
	var uLocal_12375 = 0;
	var uLocal_12376 = 0;
	var uLocal_12377 = 0;
	var uLocal_12378 = 0;
	var uLocal_12379 = 0;
	var uLocal_12380 = 0;
	var uLocal_12381 = 0;
	var uLocal_12382 = 0;
	var uLocal_12383 = 0;
	var uLocal_12384 = 0;
	var uLocal_12385 = 0;
	var uLocal_12386 = -1569615261;
	var uLocal_12387 = 0;
	var uLocal_12388 = 0;
	var uLocal_12389 = 0;
	var uLocal_12390 = 0;
	var uLocal_12391 = 0;
	var uLocal_12392 = 0;
	var uLocal_12393 = 0;
	var uLocal_12394 = 0;
	var uLocal_12395 = 0;
	var uLocal_12396 = 0;
	var uLocal_12397 = 0;
	var uLocal_12398 = 0;
	var uLocal_12399 = -1569615261;
	var uLocal_12400 = 0;
	var uLocal_12401 = 0;
	var uLocal_12402 = 0;
	var uLocal_12403 = 0;
	var uLocal_12404 = 0;
	var uLocal_12405 = 0;
	var uLocal_12406 = 0;
	var uLocal_12407 = 0;
	var uLocal_12408 = 0;
	var uLocal_12409 = 0;
	var uLocal_12410 = 0;
	var uLocal_12411 = 0;
	var uLocal_12412 = -1569615261;
	var uLocal_12413 = 0;
	var uLocal_12414 = 0;
	var uLocal_12415 = 0;
	var uLocal_12416 = 0;
	var uLocal_12417 = 0;
	var uLocal_12418 = 0;
	var uLocal_12419 = 0;
	var uLocal_12420 = 0;
	var uLocal_12421 = 0;
	var uLocal_12422 = 0;
	var uLocal_12423 = 0;
	var uLocal_12424 = 0;
	var uLocal_12425 = -1569615261;
	var uLocal_12426 = 0;
	var uLocal_12427 = 0;
	var uLocal_12428 = 0;
	var uLocal_12429 = 0;
	var uLocal_12430 = 0;
	var uLocal_12431 = 0;
	var uLocal_12432 = 0;
	var uLocal_12433 = 0;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 0;
	var uLocal_12437 = 0;
	var uLocal_12438 = -1569615261;
	var uLocal_12439 = 0;
	var uLocal_12440 = 0;
	var uLocal_12441 = 0;
	var uLocal_12442 = 0;
	var uLocal_12443 = 0;
	var uLocal_12444 = 0;
	var uLocal_12445 = 0;
	var uLocal_12446 = 0;
	var uLocal_12447 = 0;
	var uLocal_12448 = 0;
	var uLocal_12449 = 0;
	var uLocal_12450 = 0;
	var uLocal_12451 = -1569615261;
	var uLocal_12452 = 0;
	var uLocal_12453 = 0;
	var uLocal_12454 = 0;
	var uLocal_12455 = 0;
	var uLocal_12456 = 0;
	var uLocal_12457 = 0;
	var uLocal_12458 = 0;
	var uLocal_12459 = 0;
	var uLocal_12460 = 0;
	var uLocal_12461 = 0;
	var uLocal_12462 = 0;
	var uLocal_12463 = 0;
	var uLocal_12464 = -1569615261;
	var uLocal_12465 = 0;
	var uLocal_12466 = 0;
	var uLocal_12467 = 0;
	var uLocal_12468 = 0;
	var uLocal_12469 = 0;
	var uLocal_12470 = 0;
	var uLocal_12471 = 0;
	var uLocal_12472 = 0;
	var uLocal_12473 = 0;
	var uLocal_12474 = 0;
	var uLocal_12475 = 0;
	var uLocal_12476 = 0;
	var uLocal_12477 = -1569615261;
	var uLocal_12478 = 0;
	var uLocal_12479 = 0;
	var uLocal_12480 = 0;
	var uLocal_12481 = 0;
	var uLocal_12482 = 0;
	var uLocal_12483 = 0;
	var uLocal_12484 = 0;
	var uLocal_12485 = 0;
	var uLocal_12486 = 0;
	var uLocal_12487 = 0;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = -1569615261;
	var uLocal_12491 = 0;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = 0;
	var uLocal_12495 = 0;
	var uLocal_12496 = 0;
	var uLocal_12497 = 0;
	var uLocal_12498 = 0;
	var uLocal_12499 = 0;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = -1569615261;
	var uLocal_12504 = 0;
	var uLocal_12505 = 0;
	var uLocal_12506 = 0;
	var uLocal_12507 = 0;
	var uLocal_12508 = 0;
	var uLocal_12509 = 0;
	var uLocal_12510 = 0;
	var uLocal_12511 = 0;
	var uLocal_12512 = 0;
	var uLocal_12513 = 0;
	var uLocal_12514 = 0;
	var uLocal_12515 = 0;
	var uLocal_12516 = -1569615261;
	var uLocal_12517 = 0;
	var uLocal_12518 = 0;
	var uLocal_12519 = 0;
	var uLocal_12520 = 0;
	var uLocal_12521 = 0;
	var uLocal_12522 = 0;
	var uLocal_12523 = 0;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 0;
	var uLocal_12527 = 0;
	var uLocal_12528 = 0;
	var uLocal_12529 = -1569615261;
	var uLocal_12530 = 0;
	var uLocal_12531 = 0;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = 0;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
	var uLocal_12541 = 0;
	var uLocal_12542 = -1569615261;
	var uLocal_12543 = 0;
	var uLocal_12544 = 0;
	var uLocal_12545 = 0;
	var uLocal_12546 = 0;
	var uLocal_12547 = 0;
	var uLocal_12548 = 0;
	var uLocal_12549 = 0;
	var uLocal_12550 = 0;
	var uLocal_12551 = 0;
	var uLocal_12552 = 0;
	var uLocal_12553 = 0;
	var uLocal_12554 = 0;
	var uLocal_12555 = -1569615261;
	var uLocal_12556 = 0;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = 0;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 0;
	var uLocal_12563 = 0;
	var uLocal_12564 = 0;
	var uLocal_12565 = 0;
	var uLocal_12566 = 0;
	var uLocal_12567 = 0;
	var uLocal_12568 = -1569615261;
	var uLocal_12569 = 0;
	var uLocal_12570 = 0;
	var uLocal_12571 = 0;
	var uLocal_12572 = 0;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = 0;
	var uLocal_12576 = 0;
	var uLocal_12577 = 0;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = -1569615261;
	var uLocal_12582 = 0;
	var uLocal_12583 = 0;
	var uLocal_12584 = 0;
	var uLocal_12585 = 0;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = 0;
	var uLocal_12589 = 0;
	var uLocal_12590 = 0;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = -1569615261;
	var uLocal_12595 = 0;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 0;
	var uLocal_12599 = 0;
	var uLocal_12600 = 0;
	var uLocal_12601 = 0;
	var uLocal_12602 = 0;
	var uLocal_12603 = 0;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 0;
	var uLocal_12607 = -1569615261;
	var uLocal_12608 = 0;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = 0;
	var uLocal_12617 = 0;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = -1569615261;
	var uLocal_12621 = 0;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = 0;
	var uLocal_12625 = 0;
	var uLocal_12626 = 0;
	var uLocal_12627 = 0;
	var uLocal_12628 = 0;
	var uLocal_12629 = 0;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = -1569615261;
	var uLocal_12634 = 0;
	var uLocal_12635 = 0;
	var uLocal_12636 = 0;
	var uLocal_12637 = 0;
	var uLocal_12638 = 0;
	var uLocal_12639 = 0;
	var uLocal_12640 = 0;
	var uLocal_12641 = 0;
	var uLocal_12642 = 0;
	var uLocal_12643 = 0;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = -1569615261;
	var uLocal_12647 = 0;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = 0;
	var uLocal_12654 = 0;
	var uLocal_12655 = 0;
	var uLocal_12656 = 0;
	var uLocal_12657 = 0;
	var uLocal_12658 = 0;
	var uLocal_12659 = -1569615261;
	var uLocal_12660 = 0;
	var uLocal_12661 = 0;
	var uLocal_12662 = 0;
	var uLocal_12663 = 0;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = 0;
	var uLocal_12667 = 0;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 0;
	var uLocal_12672 = -1569615261;
	var uLocal_12673 = 0;
	var uLocal_12674 = 0;
	var uLocal_12675 = 0;
	var uLocal_12676 = 0;
	var uLocal_12677 = 0;
	var uLocal_12678 = 0;
	var uLocal_12679 = 0;
	var uLocal_12680 = 0;
	var uLocal_12681 = 0;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = -1569615261;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = 0;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = 0;
	var uLocal_12693 = 0;
	var uLocal_12694 = 0;
	var uLocal_12695 = 0;
	var uLocal_12696 = 0;
	var uLocal_12697 = 0;
	var uLocal_12698 = -1569615261;
	var uLocal_12699 = 0;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = 0;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 0;
	var uLocal_12707 = 0;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 0;
	var uLocal_12711 = -1569615261;
	var uLocal_12712 = 0;
	var uLocal_12713 = 0;
	var uLocal_12714 = 0;
	var uLocal_12715 = 0;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = 0;
	var uLocal_12719 = 0;
	var uLocal_12720 = 0;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = -1569615261;
	var uLocal_12725 = 0;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = 0;
	var uLocal_12729 = 0;
	var uLocal_12730 = 0;
	var uLocal_12731 = 0;
	var uLocal_12732 = 0;
	var uLocal_12733 = 0;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = -1569615261;
	var uLocal_12738 = 0;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = 0;
	var uLocal_12745 = 0;
	var uLocal_12746 = 0;
	var uLocal_12747 = 0;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = -1569615261;
	var uLocal_12751 = 0;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = 0;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = 0;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = -1569615261;
	var uLocal_12764 = 0;
	var uLocal_12765 = 0;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = 0;
	var uLocal_12771 = 0;
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = -1569615261;
	var uLocal_12777 = 0;
	var uLocal_12778 = 0;
	var uLocal_12779 = 0;
	var uLocal_12780 = 0;
	var uLocal_12781 = 0;
	var uLocal_12782 = 0;
	var uLocal_12783 = 0;
	var uLocal_12784 = 0;
	var uLocal_12785 = 0;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = -1569615261;
	var uLocal_12790 = 0;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = -1569615261;
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = 0;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = -1569615261;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 0;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 0;
	var uLocal_12824 = 0;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = -1569615261;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = 0;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = -1569615261;
	var uLocal_12842 = 0;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = 0;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = -1569615261;
	var uLocal_12855 = 0;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = 0;
	var uLocal_12863 = 0;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = -1569615261;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 0;
	var uLocal_12875 = 0;
	var uLocal_12876 = 0;
	var uLocal_12877 = 0;
	var uLocal_12878 = 0;
	var uLocal_12879 = 0;
	var uLocal_12880 = -1569615261;
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = -1569615261;
	var uLocal_12894 = 0;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = 0;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = 0;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = -1569615261;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 0;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = 0;
	var uLocal_12915 = 0;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = -1569615261;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = 0;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = -1569615261;
	var uLocal_12933 = 0;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = 0;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = -1569615261;
	var uLocal_12946 = 0;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 0;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = 0;
	var uLocal_12954 = 0;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = -1569615261;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = 0;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = -1569615261;
	var uLocal_12972 = 0;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = -1569615261;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = -1569615261;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = 0;
	var uLocal_13006 = 0;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = -1569615261;
	var uLocal_13011 = 0;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = 0;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 0;
	var uLocal_13019 = 0;
	var uLocal_13020 = 0;
	var uLocal_13021 = 0;
	var uLocal_13022 = 0;
	var uLocal_13023 = -1569615261;
	var uLocal_13024 = 0;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = -1569615261;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 0;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = 0;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = -1569615261;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = 0;
	var uLocal_13058 = 0;
	var uLocal_13059 = 0;
	var uLocal_13060 = 0;
	var uLocal_13061 = 0;
	var uLocal_13062 = -1569615261;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 0;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = -1569615261;
	var uLocal_13076 = 0;
	var uLocal_13077 = 0;
	var uLocal_13078 = 0;
	var uLocal_13079 = 0;
	var uLocal_13080 = 0;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 0;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 1;
	var uLocal_13094 = 30;
	var uLocal_13095 = -1;
	var uLocal_13096 = 0;
	var uLocal_13097 = 1;
	var uLocal_13098 = 0;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 1065353216;
	var uLocal_13108 = 0;
	var uLocal_13109 = 0;
	var uLocal_13110 = 1065353216;
	var uLocal_13111 = 1;
	var uLocal_13112 = 0;
	var uLocal_13113 = -1;
	var uLocal_13114 = 0;
	var uLocal_13115 = 1;
	var uLocal_13116 = 0;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 1065353216;
	var uLocal_13126 = 0;
	var uLocal_13127 = 0;
	var uLocal_13128 = 1065353216;
	var uLocal_13129 = 1;
	var uLocal_13130 = 0;
	var uLocal_13131 = -1;
	var uLocal_13132 = 0;
	var uLocal_13133 = 1;
	var uLocal_13134 = 0;
	var uLocal_13135 = 0;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 1065353216;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 1065353216;
	var uLocal_13147 = 1;
	var uLocal_13148 = 0;
	var uLocal_13149 = -1;
	var uLocal_13150 = 0;
	var uLocal_13151 = 1;
	var uLocal_13152 = 0;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 1065353216;
	var uLocal_13162 = 0;
	var uLocal_13163 = 0;
	var uLocal_13164 = 1065353216;
	var uLocal_13165 = 1;
	var uLocal_13166 = 0;
	var uLocal_13167 = -1;
	var uLocal_13168 = 0;
	var uLocal_13169 = 1;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 1065353216;
	var uLocal_13180 = 0;
	var uLocal_13181 = 0;
	var uLocal_13182 = 1065353216;
	var uLocal_13183 = 1;
	var uLocal_13184 = 0;
	var uLocal_13185 = -1;
	var uLocal_13186 = 0;
	var uLocal_13187 = 1;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 1065353216;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 1065353216;
	var uLocal_13201 = 1;
	var uLocal_13202 = 0;
	var uLocal_13203 = -1;
	var uLocal_13204 = 0;
	var uLocal_13205 = 1;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 1065353216;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 1065353216;
	var uLocal_13219 = 1;
	var uLocal_13220 = 0;
	var uLocal_13221 = -1;
	var uLocal_13222 = 0;
	var uLocal_13223 = 1;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 1065353216;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = 1065353216;
	var uLocal_13237 = 1;
	var uLocal_13238 = 0;
	var uLocal_13239 = -1;
	var uLocal_13240 = 0;
	var uLocal_13241 = 1;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 1065353216;
	var uLocal_13252 = 0;
	var uLocal_13253 = 0;
	var uLocal_13254 = 1065353216;
	var uLocal_13255 = 1;
	var uLocal_13256 = 0;
	var uLocal_13257 = -1;
	var uLocal_13258 = 0;
	var uLocal_13259 = 1;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 1065353216;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = 1065353216;
	var uLocal_13273 = 1;
	var uLocal_13274 = 0;
	var uLocal_13275 = -1;
	var uLocal_13276 = 0;
	var uLocal_13277 = 1;
	var uLocal_13278 = 0;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 1065353216;
	var uLocal_13288 = 0;
	var uLocal_13289 = 0;
	var uLocal_13290 = 1065353216;
	var uLocal_13291 = 1;
	var uLocal_13292 = 0;
	var uLocal_13293 = -1;
	var uLocal_13294 = 0;
	var uLocal_13295 = 1;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 1065353216;
	var uLocal_13306 = 0;
	var uLocal_13307 = 0;
	var uLocal_13308 = 1065353216;
	var uLocal_13309 = 1;
	var uLocal_13310 = 0;
	var uLocal_13311 = -1;
	var uLocal_13312 = 0;
	var uLocal_13313 = 1;
	var uLocal_13314 = 0;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 1065353216;
	var uLocal_13324 = 0;
	var uLocal_13325 = 0;
	var uLocal_13326 = 1065353216;
	var uLocal_13327 = 1;
	var uLocal_13328 = 0;
	var uLocal_13329 = -1;
	var uLocal_13330 = 0;
	var uLocal_13331 = 1;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 1065353216;
	var uLocal_13342 = 0;
	var uLocal_13343 = 0;
	var uLocal_13344 = 1065353216;
	var uLocal_13345 = 1;
	var uLocal_13346 = 0;
	var uLocal_13347 = -1;
	var uLocal_13348 = 0;
	var uLocal_13349 = 1;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 1065353216;
	var uLocal_13360 = 0;
	var uLocal_13361 = 0;
	var uLocal_13362 = 1065353216;
	var uLocal_13363 = 1;
	var uLocal_13364 = 0;
	var uLocal_13365 = -1;
	var uLocal_13366 = 0;
	var uLocal_13367 = 1;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 1065353216;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 1065353216;
	var uLocal_13381 = 1;
	var uLocal_13382 = 0;
	var uLocal_13383 = -1;
	var uLocal_13384 = 0;
	var uLocal_13385 = 1;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 1065353216;
	var uLocal_13396 = 0;
	var uLocal_13397 = 0;
	var uLocal_13398 = 1065353216;
	var uLocal_13399 = 1;
	var uLocal_13400 = 0;
	var uLocal_13401 = -1;
	var uLocal_13402 = 0;
	var uLocal_13403 = 1;
	var uLocal_13404 = 0;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 1065353216;
	var uLocal_13414 = 0;
	var uLocal_13415 = 0;
	var uLocal_13416 = 1065353216;
	var uLocal_13417 = 1;
	var uLocal_13418 = 0;
	var uLocal_13419 = -1;
	var uLocal_13420 = 0;
	var uLocal_13421 = 1;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 1065353216;
	var uLocal_13432 = 0;
	var uLocal_13433 = 0;
	var uLocal_13434 = 1065353216;
	var uLocal_13435 = 1;
	var uLocal_13436 = 0;
	var uLocal_13437 = -1;
	var uLocal_13438 = 0;
	var uLocal_13439 = 1;
	var uLocal_13440 = 0;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 1065353216;
	var uLocal_13450 = 0;
	var uLocal_13451 = 0;
	var uLocal_13452 = 1065353216;
	var uLocal_13453 = 1;
	var uLocal_13454 = 0;
	var uLocal_13455 = -1;
	var uLocal_13456 = 0;
	var uLocal_13457 = 1;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 1065353216;
	var uLocal_13468 = 0;
	var uLocal_13469 = 0;
	var uLocal_13470 = 1065353216;
	var uLocal_13471 = 1;
	var uLocal_13472 = 0;
	var uLocal_13473 = -1;
	var uLocal_13474 = 0;
	var uLocal_13475 = 1;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 1065353216;
	var uLocal_13486 = 0;
	var uLocal_13487 = 0;
	var uLocal_13488 = 1065353216;
	var uLocal_13489 = 1;
	var uLocal_13490 = 0;
	var uLocal_13491 = -1;
	var uLocal_13492 = 0;
	var uLocal_13493 = 1;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 1065353216;
	var uLocal_13504 = 0;
	var uLocal_13505 = 0;
	var uLocal_13506 = 1065353216;
	var uLocal_13507 = 1;
	var uLocal_13508 = 0;
	var uLocal_13509 = -1;
	var uLocal_13510 = 0;
	var uLocal_13511 = 1;
	var uLocal_13512 = 0;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 1065353216;
	var uLocal_13522 = 0;
	var uLocal_13523 = 0;
	var uLocal_13524 = 1065353216;
	var uLocal_13525 = 1;
	var uLocal_13526 = 0;
	var uLocal_13527 = -1;
	var uLocal_13528 = 0;
	var uLocal_13529 = 1;
	var uLocal_13530 = 0;
	var uLocal_13531 = 0;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 1065353216;
	var uLocal_13540 = 0;
	var uLocal_13541 = 0;
	var uLocal_13542 = 1065353216;
	var uLocal_13543 = 1;
	var uLocal_13544 = 0;
	var uLocal_13545 = -1;
	var uLocal_13546 = 0;
	var uLocal_13547 = 1;
	var uLocal_13548 = 0;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 1065353216;
	var uLocal_13558 = 0;
	var uLocal_13559 = 0;
	var uLocal_13560 = 1065353216;
	var uLocal_13561 = 1;
	var uLocal_13562 = 0;
	var uLocal_13563 = -1;
	var uLocal_13564 = 0;
	var uLocal_13565 = 1;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 1065353216;
	var uLocal_13576 = 0;
	var uLocal_13577 = 0;
	var uLocal_13578 = 1065353216;
	var uLocal_13579 = 1;
	var uLocal_13580 = 0;
	var uLocal_13581 = -1;
	var uLocal_13582 = 0;
	var uLocal_13583 = 1;
	var uLocal_13584 = 0;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 1065353216;
	var uLocal_13594 = 0;
	var uLocal_13595 = 0;
	var uLocal_13596 = 1065353216;
	var uLocal_13597 = 1;
	var uLocal_13598 = 0;
	var uLocal_13599 = -1;
	var uLocal_13600 = 0;
	var uLocal_13601 = 1;
	var uLocal_13602 = 0;
	var uLocal_13603 = 0;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 1065353216;
	var uLocal_13612 = 0;
	var uLocal_13613 = 0;
	var uLocal_13614 = 1065353216;
	var uLocal_13615 = 1;
	var uLocal_13616 = 0;
	var uLocal_13617 = -1;
	var uLocal_13618 = 0;
	var uLocal_13619 = 1;
	var uLocal_13620 = 0;
	var uLocal_13621 = 0;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = 1065353216;
	var uLocal_13630 = 0;
	var uLocal_13631 = 0;
	var uLocal_13632 = 1065353216;
	var uLocal_13633 = 1;
	var uLocal_13634 = 0;
	var uLocal_13635 = 8;
	var uLocal_13636 = 0;
	var uLocal_13637 = 0;
	var uLocal_13638 = 0;
	var uLocal_13639 = 0;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = 0;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 0;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 0;
	var uLocal_13650 = 0;
	var uLocal_13651 = 0;
	var uLocal_13652 = 0;
	var uLocal_13653 = 0;
	var uLocal_13654 = 0;
	var uLocal_13655 = 0;
	var uLocal_13656 = 0;
	var uLocal_13657 = 0;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 0;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 0;
	var uLocal_13668 = 0;
	var uLocal_13669 = 0;
	var uLocal_13670 = 0;
	var uLocal_13671 = 0;
	var uLocal_13672 = 0;
	var uLocal_13673 = 0;
	var uLocal_13674 = 0;
	var uLocal_13675 = 0;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = 0;
	var uLocal_13682 = 0;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 0;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 0;
	var uLocal_13689 = 0;
	var uLocal_13690 = 0;
	var uLocal_13691 = 0;
	var uLocal_13692 = 0;
	var uLocal_13693 = 0;
	var uLocal_13694 = 0;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 0;
	var uLocal_13698 = 0;
	var uLocal_13699 = 0;
	var uLocal_13700 = 0;
	var uLocal_13701 = 0;
	var uLocal_13702 = 0;
	var uLocal_13703 = 0;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 0;
	var uLocal_13707 = 0;
	var uLocal_13708 = 0;
	var uLocal_13709 = 0;
	var uLocal_13710 = 0;
	var uLocal_13711 = 0;
	var uLocal_13712 = 0;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 0;
	var uLocal_13716 = 0;
	var uLocal_13717 = 0;
	var uLocal_13718 = 0;
	var uLocal_13719 = 0;
	var uLocal_13720 = 0;
	var uLocal_13721 = 0;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 0;
	var uLocal_13725 = 0;
	var uLocal_13726 = 0;
	var uLocal_13727 = 0;
	var uLocal_13728 = 0;
	var uLocal_13729 = 0;
	var uLocal_13730 = 0;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = 0;
	var uLocal_13734 = 0;
	var uLocal_13735 = 0;
	var uLocal_13736 = 0;
	var uLocal_13737 = 0;
	var uLocal_13738 = 0;
	var uLocal_13739 = 0;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 0;
	var uLocal_13743 = 0;
	var uLocal_13744 = 0;
	var uLocal_13745 = 0;
	var uLocal_13746 = 0;
	var uLocal_13747 = 0;
	var uLocal_13748 = 0;
	var uLocal_13749 = 0;
	var uLocal_13750 = 0;
	var uLocal_13751 = 0;
	var uLocal_13752 = 0;
	var uLocal_13753 = 0;
	var uLocal_13754 = 0;
	var uLocal_13755 = 0;
	var uLocal_13756 = 0;
	var uLocal_13757 = 0;
	var uLocal_13758 = 0;
	var uLocal_13759 = 0;
	var uLocal_13760 = 0;
	var uLocal_13761 = 0;
	var uLocal_13762 = 0;
	var uLocal_13763 = 0;
	var uLocal_13764 = 0;
	var uLocal_13765 = 0;
	var uLocal_13766 = 0;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 0;
	var uLocal_13770 = 0;
	var uLocal_13771 = 0;
	var uLocal_13772 = 0;
	var uLocal_13773 = 0;
	var uLocal_13774 = 0;
	var uLocal_13775 = 0;
	var uLocal_13776 = 0;
	var uLocal_13777 = 0;
	var uLocal_13778 = 0;
	var uLocal_13779 = 0;
	var uLocal_13780 = 0;
	var uLocal_13781 = 0;
	var uLocal_13782 = 0;
	var uLocal_13783 = 0;
	var uLocal_13784 = 0;
	var uLocal_13785 = 0;
	var uLocal_13786 = 0;
	var uLocal_13787 = 0;
	var uLocal_13788 = 0;
	var uLocal_13789 = 0;
	var uLocal_13790 = 0;
	var uLocal_13791 = 0;
	var uLocal_13792 = 0;
	var uLocal_13793 = 0;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 0;
	var uLocal_13797 = 0;
	var uLocal_13798 = 0;
	var uLocal_13799 = 0;
	var uLocal_13800 = 0;
	var uLocal_13801 = 0;
	var uLocal_13802 = 0;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 0;
	var uLocal_13806 = 0;
	var uLocal_13807 = 0;
	var uLocal_13808 = 0;
	var uLocal_13809 = 0;
	var uLocal_13810 = 0;
	var uLocal_13811 = 0;
	var uLocal_13812 = 0;
	var uLocal_13813 = 0;
	var uLocal_13814 = 0;
	var uLocal_13815 = 0;
	var uLocal_13816 = 0;
	var uLocal_13817 = 0;
	var uLocal_13818 = 0;
	var uLocal_13819 = 0;
	var uLocal_13820 = 0;
	var uLocal_13821 = 0;
	var uLocal_13822 = 0;
	var uLocal_13823 = 0;
	var uLocal_13824 = 0;
	var uLocal_13825 = 0;
	var uLocal_13826 = 0;
	var uLocal_13827 = 0;
	var uLocal_13828 = 0;
	var uLocal_13829 = 0;
	var uLocal_13830 = 0;
	var uLocal_13831 = 0;
	var uLocal_13832 = 0;
	var uLocal_13833 = 0;
	var uLocal_13834 = 0;
	var uLocal_13835 = 0;
	var uLocal_13836 = 0;
	var uLocal_13837 = 0;
	var uLocal_13838 = 0;
	var uLocal_13839 = 0;
	var uLocal_13840 = 0;
	var uLocal_13841 = 0;
	var uLocal_13842 = 0;
	var uLocal_13843 = 0;
	var uLocal_13844 = 0;
	var uLocal_13845 = 0;
	var uLocal_13846 = 0;
	var uLocal_13847 = 0;
	var uLocal_13848 = 0;
	var uLocal_13849 = 0;
	var uLocal_13850 = 0;
	var uLocal_13851 = 0;
	var uLocal_13852 = 0;
	var uLocal_13853 = 0;
	var uLocal_13854 = 0;
	var uLocal_13855 = 0;
	var uLocal_13856 = 0;
	var uLocal_13857 = 0;
	var uLocal_13858 = 0;
	var uLocal_13859 = 0;
	var uLocal_13860 = 0;
	var uLocal_13861 = 0;
	var uLocal_13862 = 0;
	var uLocal_13863 = 0;
	var uLocal_13864 = 0;
	var uLocal_13865 = 0;
	var uLocal_13866 = 0;
	var uLocal_13867 = 0;
	var uLocal_13868 = 0;
	var uLocal_13869 = 0;
	var uLocal_13870 = 0;
	var uLocal_13871 = 0;
	var uLocal_13872 = 0;
	var uLocal_13873 = 0;
	var uLocal_13874 = 0;
	var uLocal_13875 = 0;
	var uLocal_13876 = 0;
	var uLocal_13877 = 0;
	var uLocal_13878 = 0;
	var uLocal_13879 = 0;
	var uLocal_13880 = 0;
	var uLocal_13881 = 0;
	var uLocal_13882 = 0;
	var uLocal_13883 = 0;
	var uLocal_13884 = 0;
	var uLocal_13885 = 0;
	var uLocal_13886 = 0;
	var uLocal_13887 = 0;
	var uLocal_13888 = 0;
	var uLocal_13889 = 0;
	var uLocal_13890 = 0;
	var uLocal_13891 = 0;
	var uLocal_13892 = 0;
	var uLocal_13893 = 0;
	var uLocal_13894 = 0;
	var uLocal_13895 = 0;
	var uLocal_13896 = 0;
	var uLocal_13897 = 0;
	var uLocal_13898 = 0;
	var uLocal_13899 = 0;
	var uLocal_13900 = 0;
	var uLocal_13901 = 0;
	var uLocal_13902 = 0;
	var uLocal_13903 = 0;
	var uLocal_13904 = 0;
	var uLocal_13905 = 0;
	var uLocal_13906 = 0;
	var uLocal_13907 = 0;
	var uLocal_13908 = 0;
	var uLocal_13909 = 0;
	var uLocal_13910 = 0;
	var uLocal_13911 = 0;
	var uLocal_13912 = 0;
	var uLocal_13913 = 0;
	var uLocal_13914 = 0;
	var uLocal_13915 = 0;
	var uLocal_13916 = 0;
	var uLocal_13917 = 0;
	var uLocal_13918 = 0;
	var uLocal_13919 = 0;
	var uLocal_13920 = 0;
	var uLocal_13921 = 0;
	var uLocal_13922 = 0;
	var uLocal_13923 = 0;
	var uLocal_13924 = 0;
	var uLocal_13925 = 0;
	var uLocal_13926 = 0;
	var uLocal_13927 = 0;
	var uLocal_13928 = 0;
	var uLocal_13929 = 0;
	var uLocal_13930 = 0;
	var uLocal_13931 = 0;
	var uLocal_13932 = 0;
	var uLocal_13933 = 0;
	var uLocal_13934 = 0;
	var uLocal_13935 = 0;
	var uLocal_13936 = 0;
	var uLocal_13937 = 0;
	var uLocal_13938 = 0;
	var uLocal_13939 = 0;
	var uLocal_13940 = 0;
	var uLocal_13941 = 0;
	var uLocal_13942 = 0;
	var uLocal_13943 = 0;
	var uLocal_13944 = 0;
	var uLocal_13945 = 0;
	var uLocal_13946 = 0;
	var uLocal_13947 = 0;
	var uLocal_13948 = 0;
	var uLocal_13949 = 0;
	var uLocal_13950 = 0;
	var uLocal_13951 = 0;
	var uLocal_13952 = 0;
	var uLocal_13953 = 0;
	var uLocal_13954 = 0;
	var uLocal_13955 = 0;
	var uLocal_13956 = 0;
	var uLocal_13957 = 0;
	var uLocal_13958 = 0;
	var uLocal_13959 = 0;
	var uLocal_13960 = 0;
	var uLocal_13961 = 0;
	var uLocal_13962 = 0;
	var uLocal_13963 = 0;
	var uLocal_13964 = 8;
	var uLocal_13965 = 0;
	var uLocal_13966 = 0;
	var uLocal_13967 = 0;
	var uLocal_13968 = 0;
	var uLocal_13969 = 0;
	var uLocal_13970 = 0;
	var uLocal_13971 = 0;
	var uLocal_13972 = 0;
	var uLocal_13973 = 0;
	var uLocal_13974 = 0;
	var uLocal_13975 = 0;
	var uLocal_13976 = 0;
	var uLocal_13977 = 0;
	var uLocal_13978 = 0;
	var uLocal_13979 = 0;
	var uLocal_13980 = 0;
	var uLocal_13981 = 0;
	var uLocal_13982 = 0;
	var uLocal_13983 = 0;
	var uLocal_13984 = 0;
	var uLocal_13985 = -1;
	var uLocal_13986 = 0;
	var uLocal_13987 = 0;
	var uLocal_13988 = 0;
	var uLocal_13989 = 0;
	var uLocal_13990 = 0;
	var uLocal_13991 = 0;
	var uLocal_13992 = 0;
	var uLocal_13993 = 0;
	var uLocal_13994 = 0;
	var uLocal_13995 = 0;
	var uLocal_13996 = 0;
	var uLocal_13997 = 0;
	var uLocal_13998 = 0;
	var uLocal_13999 = 0;
	var uLocal_14000 = 0;
	var uLocal_14001 = 0;
	var uLocal_14002 = 0;
	var uLocal_14003 = 0;
	var uLocal_14004 = 0;
	var uLocal_14005 = 0;
	var uLocal_14006 = 0;
	var uLocal_14007 = -1;
	var uLocal_14008 = 0;
	var uLocal_14009 = 0;
	var uLocal_14010 = 0;
	var uLocal_14011 = 0;
	var uLocal_14012 = 0;
	var uLocal_14013 = 0;
	var uLocal_14014 = 0;
	var uLocal_14015 = 0;
	var uLocal_14016 = 0;
	var uLocal_14017 = 0;
	var uLocal_14018 = 0;
	var uLocal_14019 = 0;
	var uLocal_14020 = 0;
	var uLocal_14021 = 0;
	var uLocal_14022 = 0;
	var uLocal_14023 = 0;
	var uLocal_14024 = 0;
	var uLocal_14025 = 0;
	var uLocal_14026 = 0;
	var uLocal_14027 = 0;
	var uLocal_14028 = 0;
	var uLocal_14029 = -1;
	var uLocal_14030 = 0;
	var uLocal_14031 = 0;
	var uLocal_14032 = 0;
	var uLocal_14033 = 0;
	var uLocal_14034 = 0;
	var uLocal_14035 = 0;
	var uLocal_14036 = 0;
	var uLocal_14037 = 0;
	var uLocal_14038 = 0;
	var uLocal_14039 = 0;
	var uLocal_14040 = 0;
	var uLocal_14041 = 0;
	var uLocal_14042 = 0;
	var uLocal_14043 = 0;
	var uLocal_14044 = 0;
	var uLocal_14045 = 0;
	var uLocal_14046 = 0;
	var uLocal_14047 = 0;
	var uLocal_14048 = 0;
	var uLocal_14049 = 0;
	var uLocal_14050 = 0;
	var uLocal_14051 = -1;
	var uLocal_14052 = 0;
	var uLocal_14053 = 0;
	var uLocal_14054 = 0;
	var uLocal_14055 = 0;
	var uLocal_14056 = 0;
	var uLocal_14057 = 0;
	var uLocal_14058 = 0;
	var uLocal_14059 = 0;
	var uLocal_14060 = 0;
	var uLocal_14061 = 0;
	var uLocal_14062 = 0;
	var uLocal_14063 = 0;
	var uLocal_14064 = 0;
	var uLocal_14065 = 0;
	var uLocal_14066 = 0;
	var uLocal_14067 = 0;
	var uLocal_14068 = 0;
	var uLocal_14069 = 0;
	var uLocal_14070 = 0;
	var uLocal_14071 = 0;
	var uLocal_14072 = 0;
	var uLocal_14073 = -1;
	var uLocal_14074 = 0;
	var uLocal_14075 = 0;
	var uLocal_14076 = 0;
	var uLocal_14077 = 0;
	var uLocal_14078 = 0;
	var uLocal_14079 = 0;
	var uLocal_14080 = 0;
	var uLocal_14081 = 0;
	var uLocal_14082 = 0;
	var uLocal_14083 = 0;
	var uLocal_14084 = 0;
	var uLocal_14085 = 0;
	var uLocal_14086 = 0;
	var uLocal_14087 = 0;
	var uLocal_14088 = 0;
	var uLocal_14089 = 0;
	var uLocal_14090 = 0;
	var uLocal_14091 = 0;
	var uLocal_14092 = 0;
	var uLocal_14093 = 0;
	var uLocal_14094 = 0;
	var uLocal_14095 = -1;
	var uLocal_14096 = 0;
	var uLocal_14097 = 0;
	var uLocal_14098 = 0;
	var uLocal_14099 = 0;
	var uLocal_14100 = 0;
	var uLocal_14101 = 0;
	var uLocal_14102 = 0;
	var uLocal_14103 = 0;
	var uLocal_14104 = 0;
	var uLocal_14105 = 0;
	var uLocal_14106 = 0;
	var uLocal_14107 = 0;
	var uLocal_14108 = 0;
	var uLocal_14109 = 0;
	var uLocal_14110 = 0;
	var uLocal_14111 = 0;
	var uLocal_14112 = 0;
	var uLocal_14113 = 0;
	var uLocal_14114 = 0;
	var uLocal_14115 = 0;
	var uLocal_14116 = 0;
	var uLocal_14117 = -1;
	var uLocal_14118 = 0;
	var uLocal_14119 = 0;
	var uLocal_14120 = 0;
	var uLocal_14121 = 0;
	var uLocal_14122 = 0;
	var uLocal_14123 = 0;
	var uLocal_14124 = 0;
	var uLocal_14125 = 0;
	var uLocal_14126 = 0;
	var uLocal_14127 = 0;
	var uLocal_14128 = 0;
	var uLocal_14129 = 0;
	var uLocal_14130 = 0;
	var uLocal_14131 = 0;
	var uLocal_14132 = 0;
	var uLocal_14133 = 0;
	var uLocal_14134 = 0;
	var uLocal_14135 = 0;
	var uLocal_14136 = 0;
	var uLocal_14137 = 0;
	var uLocal_14138 = 0;
	var uLocal_14139 = -1;
	var uLocal_14140 = 0;
	var uLocal_14141 = 11;
	var uLocal_14142 = 0;
	var uLocal_14143 = 0;
	var uLocal_14144 = 0;
	var uLocal_14145 = 0;
	var uLocal_14146 = 0;
	var uLocal_14147 = 0;
	var uLocal_14148 = 0;
	var uLocal_14149 = 0;
	var uLocal_14150 = 0;
	var uLocal_14151 = 0;
	var uLocal_14152 = 0;
	var uLocal_14153 = 0;
	var uLocal_14154 = 0;
	var uLocal_14155 = 0;
	var uLocal_14156 = 0;
	var uLocal_14157 = 0;
	var uLocal_14158 = 0;
	var uLocal_14159 = 0;
	var uLocal_14160 = 0;
	var uLocal_14161 = 0;
	var uLocal_14162 = 0;
	var uLocal_14163 = 0;
	var uLocal_14164 = 0;
	var uLocal_14165 = 0;
	var uLocal_14166 = 0;
	var uLocal_14167 = 0;
	var uLocal_14168 = 0;
	var uLocal_14169 = 0;
	var uLocal_14170 = 0;
	var uLocal_14171 = 0;
	var uLocal_14172 = 0;
	var uLocal_14173 = 0;
	var uLocal_14174 = 0;
	var uLocal_14175 = 0;
	var uLocal_14176 = 0;
	var uLocal_14177 = 0;
	var uLocal_14178 = 0;
	var uLocal_14179 = 0;
	var uLocal_14180 = 0;
	var uLocal_14181 = 0;
	var uLocal_14182 = 0;
	var uLocal_14183 = 0;
	var uLocal_14184 = 0;
	var uLocal_14185 = 0;
	var uLocal_14186 = 0;
	var uLocal_14187 = 0;
	var uLocal_14188 = 0;
	var uLocal_14189 = 0;
	var uLocal_14190 = 0;
	var uLocal_14191 = 0;
	var uLocal_14192 = 0;
	var uLocal_14193 = 0;
	var uLocal_14194 = 0;
	var uLocal_14195 = 0;
	var uLocal_14196 = 0;
	var uLocal_14197 = 0;
	var uLocal_14198 = 0;
	var uLocal_14199 = 0;
	var uLocal_14200 = 0;
	var uLocal_14201 = 0;
	var uLocal_14202 = 0;
	var uLocal_14203 = 0;
	var uLocal_14204 = 0;
	var uLocal_14205 = 0;
	var uLocal_14206 = 0;
	var uLocal_14207 = 0;
	var uLocal_14208 = 0;
	var uLocal_14209 = 0;
	var uLocal_14210 = 0;
	var uLocal_14211 = 0;
	var uLocal_14212 = 0;
	var uLocal_14213 = 0;
	var uLocal_14214 = 0;
	var uLocal_14215 = 0;
	var uLocal_14216 = 0;
	var uLocal_14217 = 0;
	var uLocal_14218 = 0;
	var uLocal_14219 = 0;
	var uLocal_14220 = 0;
	var uLocal_14221 = 0;
	var uLocal_14222 = 0;
	var uLocal_14223 = 0;
	var uLocal_14224 = 0;
	var uLocal_14225 = 0;
	var uLocal_14226 = 0;
	var uLocal_14227 = 0;
	var uLocal_14228 = 0;
	var uLocal_14229 = 0;
	var uLocal_14230 = 0;
	var uLocal_14231 = 0;
	var uLocal_14232 = 0;
	var uLocal_14233 = 0;
	var uLocal_14234 = 0;
	var uLocal_14235 = 0;
	var uLocal_14236 = 0;
	var uLocal_14237 = 0;
	var uLocal_14238 = 0;
	var uLocal_14239 = 0;
	var uLocal_14240 = 0;
	var uLocal_14241 = 0;
	var uLocal_14242 = 0;
	var uLocal_14243 = 0;
	var uLocal_14244 = 0;
	var uLocal_14245 = 0;
	var uLocal_14246 = 0;
	var uLocal_14247 = 0;
	var uLocal_14248 = 0;
	var uLocal_14249 = 0;
	var uLocal_14250 = 0;
	var uLocal_14251 = 0;
	var uLocal_14252 = 2;
	var uLocal_14253 = 0;
	var uLocal_14254 = 0;
	var uLocal_14255 = 0;
	var uLocal_14256 = 0;
	var uLocal_14257 = 0;
	var uLocal_14258 = 0;
	var uLocal_14259 = 0;
	var uLocal_14260 = 0;
	var uLocal_14261 = 0;
	var uLocal_14262 = 0;
	var uLocal_14263 = 0;
	var uLocal_14264 = 0;
	var uLocal_14265 = 0;
	var uLocal_14266 = 0;
	var uLocal_14267 = 0;
	var uLocal_14268 = 0;
	var uLocal_14269 = 0;
	var uLocal_14270 = 0;
	var uLocal_14271 = 0;
	var uLocal_14272 = 0;
	var uLocal_14273 = 0;
	var uLocal_14274 = 0;
	var uLocal_14275 = 0;
	var uLocal_14276 = 0;
	var uLocal_14277 = 0;
	var uLocal_14278 = 0;
	var uLocal_14279 = 0;
	var uLocal_14280 = 0;
	var uLocal_14281 = 0;
	var uLocal_14282 = 0;
	var uLocal_14283 = 0;
	var uLocal_14284 = 0;
	var uLocal_14285 = 0;
	var uLocal_14286 = 0;
	var uLocal_14287 = 2;
	var uLocal_14288 = 0;
	var uLocal_14289 = 0;
	var uLocal_14290 = 0;
	var uLocal_14291 = 0;
	var uLocal_14292 = 0;
	var uLocal_14293 = 0;
	var uLocal_14294 = 0;
	var uLocal_14295 = 0;
	var uLocal_14296 = 0;
	var uLocal_14297 = 0;
	var uLocal_14298 = 0;
	var uLocal_14299 = 0;
	var uLocal_14300 = 0;
	var uLocal_14301 = 0;
	var uLocal_14302 = 0;
	var uLocal_14303 = 0;
	var uLocal_14304 = -1;
	var uLocal_14305 = 0;
	var uLocal_14306 = 0;
	var uLocal_14307 = -1;
	var uLocal_14308 = -1082130432;
	var uLocal_14309 = 0;
	var uLocal_14310 = 0;
	var uLocal_14311 = 0;
	var uLocal_14312 = 0;
	var uLocal_14313 = 0;
	var uLocal_14314 = 0;
	var uLocal_14315 = 0;
	var uLocal_14316 = 0;
	var uLocal_14317 = 0;
	var uLocal_14318 = 0;
	var uLocal_14319 = 0;
	var uLocal_14320 = 0;
	var uLocal_14321 = 0;
	var uLocal_14322 = 0;
	var uLocal_14323 = 0;
	var uLocal_14324 = 0;
	var uLocal_14325 = 0;
	var uLocal_14326 = 0;
	var uLocal_14327 = 0;
	var uLocal_14328 = 0;
	var uLocal_14329 = 0;
	var uLocal_14330 = 0;
	var uLocal_14331 = 0;
	var uLocal_14332 = 0;
	var uLocal_14333 = 0;
	var uLocal_14334 = 0;
	var uLocal_14335 = 0;
	var uLocal_14336 = 0;
	var uLocal_14337 = 0;
	var uLocal_14338 = 0;
	var uLocal_14339 = 0;
	var uLocal_14340 = 0;
	var uLocal_14341 = 0;
	var uLocal_14342 = 0;
	var uLocal_14343 = 0;
	var uLocal_14344 = 0;
	var uLocal_14345 = 0;
	var uLocal_14346 = 0;
	var uLocal_14347 = 0;
	var uLocal_14348 = 0;
	var uLocal_14349 = 0;
	var uLocal_14350 = 0;
	var uLocal_14351 = 0;
	var uLocal_14352 = 0;
	var uLocal_14353 = 0;
	var uLocal_14354 = 0;
	var uLocal_14355 = 0;
	var uLocal_14356 = 0;
	var uLocal_14357 = 0;
	var uLocal_14358 = 0;
	var uLocal_14359 = 0;
	var uLocal_14360 = 0;
	var uLocal_14361 = 0;
	var uLocal_14362 = 0;
	var uLocal_14363 = 0;
	var uLocal_14364 = 0;
	var uLocal_14365 = 0;
	var uLocal_14366 = 0;
	var uLocal_14367 = 0;
	var uLocal_14368 = 0;
	var uLocal_14369 = 0;
	var uLocal_14370 = 0;
	var uLocal_14371 = 0;
	var uLocal_14372 = 0;
	var uLocal_14373 = 0;
	var uLocal_14374 = 0;
	var uLocal_14375 = 0;
	var uLocal_14376 = 0;
	var uLocal_14377 = 0;
	var uLocal_14378 = 0;
	var uLocal_14379 = 0;
	var uLocal_14380 = 0;
	var uLocal_14381 = 0;
	var uLocal_14382 = 0;
	var uLocal_14383 = 0;
	var uLocal_14384 = 0;
	var uLocal_14385 = 0;
	var uLocal_14386 = 0;
	var uLocal_14387 = 0;
	var uLocal_14388 = 0;
	var uLocal_14389 = 0;
	var uLocal_14390 = 24;
	var uLocal_14391 = 0;
	var uLocal_14392 = 0;
	var uLocal_14393 = 0;
	var uLocal_14394 = 0;
	var uLocal_14395 = 0;
	var uLocal_14396 = 0;
	var uLocal_14397 = 0;
	var uLocal_14398 = 0;
	var uLocal_14399 = 0;
	var uLocal_14400 = 0;
	var uLocal_14401 = 0;
	var uLocal_14402 = 0;
	var uLocal_14403 = 0;
	var uLocal_14404 = 0;
	var uLocal_14405 = 0;
	var uLocal_14406 = 0;
	var uLocal_14407 = 0;
	var uLocal_14408 = 0;
	var uLocal_14409 = 0;
	var uLocal_14410 = 0;
	var uLocal_14411 = 0;
	var uLocal_14412 = 0;
	var uLocal_14413 = 0;
	var uLocal_14414 = 0;
	var uLocal_14415 = 0;
	var uLocal_14416 = 0;
	var uLocal_14417 = 0;
	var uLocal_14418 = 0;
	var uLocal_14419 = 0;
	var uLocal_14420 = 0;
	var uLocal_14421 = 0;
	var uLocal_14422 = 0;
	var uLocal_14423 = 0;
	var uLocal_14424 = 0;
	var uLocal_14425 = 0;
	var uLocal_14426 = 0;
	var uLocal_14427 = 0;
	var uLocal_14428 = 0;
	var uLocal_14429 = 0;
	var uLocal_14430 = 0;
	var uLocal_14431 = 0;
	var uLocal_14432 = 0;
	var uLocal_14433 = 0;
	var uLocal_14434 = 0;
	var uLocal_14435 = 0;
	var uLocal_14436 = 0;
	var uLocal_14437 = 0;
	var uLocal_14438 = 0;
	var uLocal_14439 = 0;
	var uLocal_14440 = 0;
	var uLocal_14441 = 0;
	var uLocal_14442 = 0;
	var uLocal_14443 = 0;
	var uLocal_14444 = 0;
	var uLocal_14445 = 0;
	var uLocal_14446 = 0;
	var uLocal_14447 = 0;
	var uLocal_14448 = 0;
	var uLocal_14449 = 0;
	var uLocal_14450 = 0;
	var uLocal_14451 = 0;
	var uLocal_14452 = 0;
	var uLocal_14453 = 0;
	var uLocal_14454 = 0;
	var uLocal_14455 = 0;
	var uLocal_14456 = 0;
	var uLocal_14457 = 0;
	var uLocal_14458 = 0;
	var uLocal_14459 = 0;
	var uLocal_14460 = 0;
	var uLocal_14461 = 0;
	var uLocal_14462 = 0;
	var uLocal_14463 = 0;
	var uLocal_14464 = 0;
	var uLocal_14465 = 0;
	var uLocal_14466 = 0;
	var uLocal_14467 = 0;
	var uLocal_14468 = 0;
	var uLocal_14469 = 0;
	var uLocal_14470 = 0;
	var uLocal_14471 = 0;
	var uLocal_14472 = 0;
	var uLocal_14473 = 0;
	var uLocal_14474 = 0;
	var uLocal_14475 = 0;
	var uLocal_14476 = 0;
	var uLocal_14477 = 0;
	var uLocal_14478 = 0;
	var uLocal_14479 = 0;
	var uLocal_14480 = 0;
	var uLocal_14481 = 0;
	var uLocal_14482 = 0;
	var uLocal_14483 = 0;
	var uLocal_14484 = 0;
	var uLocal_14485 = 0;
	var uLocal_14486 = 0;
	var uLocal_14487 = 0;
	var uLocal_14488 = 0;
	var uLocal_14489 = 0;
	var uLocal_14490 = 0;
	var uLocal_14491 = 0;
	var uLocal_14492 = 0;
	var uLocal_14493 = 0;
	var uLocal_14494 = 0;
	var uLocal_14495 = 0;
	var uLocal_14496 = 0;
	var uLocal_14497 = 0;
	var uLocal_14498 = 0;
	var uLocal_14499 = 0;
	var uLocal_14500 = 0;
	var uLocal_14501 = 0;
	var uLocal_14502 = 0;
	var uLocal_14503 = 0;
	var uLocal_14504 = 0;
	var uLocal_14505 = 0;
	var uLocal_14506 = 0;
	var uLocal_14507 = 0;
	var uLocal_14508 = 0;
	var uLocal_14509 = 0;
	var uLocal_14510 = 0;
	var uLocal_14511 = 0;
	var uLocal_14512 = 0;
	var uLocal_14513 = 0;
	var uLocal_14514 = -1;
	var uLocal_14515 = 0;
	var uLocal_14516 = 0;
	var uLocal_14517 = 0;
	var uLocal_14518 = 0;
	var uLocal_14519 = 0;
	var uLocal_14520 = 0;
	var uLocal_14521 = 0;
	var uLocal_14522 = 0;
	var uLocal_14523 = 0;
	var uLocal_14524 = 0;
	var uLocal_14525 = 0;
	var uLocal_14526 = 0;
	var uLocal_14527 = 0;
	var uLocal_14528 = 0;
	var uLocal_14529 = 0;
	var uLocal_14530 = 0;
	var uLocal_14531 = 0;
	var uLocal_14532 = 0;
	var uLocal_14533 = 0;
	var uLocal_14534 = 0;
	var uLocal_14535 = 0;
	var uLocal_14536 = 0;
	var uLocal_14537 = 0;
	var uLocal_14538 = 0;
	var uLocal_14539 = 0;
	var uLocal_14540 = 0;
	var uLocal_14541 = -1;
	var uLocal_14542 = 20;
	var uLocal_14543 = 0;
	var uLocal_14544 = 0;
	var uLocal_14545 = 0;
	var uLocal_14546 = 0;
	var uLocal_14547 = 0;
	var uLocal_14548 = 0;
	var uLocal_14549 = 0;
	var uLocal_14550 = 0;
	var uLocal_14551 = 0;
	var uLocal_14552 = 0;
	var uLocal_14553 = 0;
	var uLocal_14554 = 0;
	var uLocal_14555 = 0;
	var uLocal_14556 = 0;
	var uLocal_14557 = 0;
	var uLocal_14558 = 0;
	var uLocal_14559 = 0;
	var uLocal_14560 = 0;
	var uLocal_14561 = 0;
	var uLocal_14562 = 0;
	var uLocal_14563 = 0;
	var uLocal_14564 = 0;
	var uLocal_14565 = 0;
	var uLocal_14566 = 0;
	var uLocal_14567 = 0;
	var uLocal_14568 = 0;
	var uLocal_14569 = 0;
	var uLocal_14570 = 1028443341;
	var uLocal_14571 = 1038174126;
	var uLocal_14572 = 1065353216;
	var uLocal_14573 = 1065353216;
	var uLocal_14574 = 1086324736;
	var uLocal_14575 = 1082130432;
	var uLocal_14576 = 1073741824;
	var uLocal_14577 = 1065353216;
	var uLocal_14578 = 1108082688;
	var uLocal_14579 = 1108082688;
	var uLocal_14580 = 3000;
	var uLocal_14581 = 1092616192;
	var uLocal_14582 = 0;
	var uLocal_14583 = 0;
	var uLocal_14584 = 0;
	var uLocal_14585 = 0;
	var uLocal_14586 = 0;
	var uLocal_14587 = 0;
	var uLocal_14588 = 0;
	var uLocal_14589 = 0;
	var uLocal_14590 = 0;
	var uLocal_14591 = 0;
	var uLocal_14592 = 0;
	var uLocal_14593 = 0;
	var uLocal_14594 = 0;
	var uLocal_14595 = 0;
	var uLocal_14596 = 0;
	var uLocal_14597 = 0;
	var uLocal_14598 = 0;
	var uLocal_14599 = 0;
	var uLocal_14600 = 0;
	var uLocal_14601 = 0;
	var uLocal_14602 = 0;
	var uLocal_14603 = 0;
	var uLocal_14604 = 0;
	var uLocal_14605 = 0;
	var uLocal_14606 = 0;
	var uLocal_14607 = 0;
	var uLocal_14608 = 0;
	var uLocal_14609 = 0;
	var uLocal_14610 = 0;
	var uLocal_14611 = 0;
	var uLocal_14612 = 0;
	var uLocal_14613 = 0;
	var uLocal_14614 = 0;
	var uLocal_14615 = 0;
	var uLocal_14616 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_17 = 1;
	iLocal_18 = 2;
	iLocal_19 = 3;
	iLocal_20 = 4;
	iLocal_21 = 5;
	iLocal_22 = 6;
	iLocal_23 = 7;
	iLocal_24 = 8;
	iLocal_25 = 9;
	iLocal_26 = 10;
	iLocal_27 = 25;
	iLocal_28 = 1;
	iLocal_29 = 2;
	iLocal_30 = 4;
	iLocal_31 = 8;
	iLocal_32 = 16;
	iLocal_33 = 32;
	iLocal_34 = 64;
	iLocal_35 = 128;
	iLocal_36 = 256;
	iLocal_37 = 512;
	iLocal_38 = 1024;
	iLocal_39 = 524288;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		func_1(&uLocal_1437, 1073741824);
		func_2(&uLocal_1437, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_3(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_1437);
	func_5(&uLocal_1437);
	while (!func_6(&uLocal_1437, -2147483648))
	{
		func_7(&uLocal_1437);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_1437, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	uParam0->f_5309 = (uParam0->f_5309 || iParam1);
}

int func_2(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	struct<8> Var6;
	
	if (func_8(uParam0, 4096))
	{
		return 1;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 4096)
	{
		func_9(uParam0);
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
		HUD::_0x8BC7C1F929D07BF3(1331687942);
		if (func_10(Global_43800))
		{
			func_11(&Global_43800, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		func_13(func_12(uParam0->f_607), 0, 2);
		func_14();
		func_15(1);
		func_16(1, 0);
		func_17(uParam0, 1);
		func_18(0);
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		Global_36604 = 0;
		func_19(3);
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, true);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!bParam1)
	{
		if (!func_6(uParam0, 1048576))
		{
			if (func_20() == 0)
			{
				func_21(0);
			}
			else if (func_22(uParam0) != 0)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::_0x1204EB53A5FBC63D())
					{
						return 0;
					}
					if (func_22(uParam0) == 1 || func_22(uParam0) == 2)
					{
						if (func_23(&(uParam0->f_8269)) && func_24(&(uParam0->f_8269)))
						{
							func_25(0, &(uParam0->f_8269.f_1282));
						}
					}
					if (!func_26(&(uParam0->f_13118)))
					{
						func_27(&(uParam0->f_13118), 0);
					}
					bVar0 = CAM::_0x139EFB0A71DD9011();
					if (bVar0)
					{
						func_1(uParam0, 256);
					}
					bVar1 = CAM::_0x7CE9DC58E3E4755F();
					if (bVar1 && func_6(uParam0, 256))
					{
						CAM::_0x16E9ABDD34DDD931();
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					else
					{
						if (((!bVar0 && !func_28(uParam0, bVar1)) && !func_29()) && !func_6(uParam0, 80))
						{
							if (!bVar1)
							{
								func_30(uParam0);
							}
							return 0;
						}
						if (func_6(uParam0, 64))
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						else if (func_22(uParam0) == 2)
						{
							if (uParam0->f_13104 == -1)
							{
								if (func_31(uParam0))
								{
									uParam0->f_13104 = MISC::GET_GAME_TIMER();
								}
							}
							if ((uParam0->f_13104 != -1 && MISC::GET_GAME_TIMER() > uParam0->f_13104 + 4000) || bVar1)
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else if (func_22(uParam0) == 1)
						{
							if (func_28(uParam0, bVar1))
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						CAM::IS_SCREEN_FADING_IN();
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							return 0;
						}
					}
				}
			}
			else if (func_6(uParam0, 2))
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
					return 0;
				}
				if (MISC::_0x1B065A2BF7953815(1) == 1)
				{
					return 0;
				}
			}
			if (!func_32() && func_22(uParam0) != 0)
			{
				func_36(uParam0, func_34(func_33(uParam0)), func_34(func_35(uParam0)), func_33(uParam0), func_35(uParam0));
			}
		}
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_7375.f_804))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_7375.f_804);
		}
	}
	func_1(uParam0, 1048576);
	if (!func_6(uParam0, 2097152))
	{
		if (!func_9(uParam0))
		{
			return 0;
		}
		func_1(uParam0, 2097152);
	}
	MISC::_0x1096603B519C905F("");
	STREAMING::CLEAR_FOCUS();
	if (MISSIONDATA::_0x7E8F86A4FA33033C())
	{
		MISSIONDATA::_0x7F89E15A8FB8DE97();
	}
	MISC::SET_TIME_SCALE(1f);
	func_37(&(uParam0->f_8269));
	if (func_23(&(uParam0->f_8269)))
	{
		func_38(&(uParam0->f_8269));
	}
	AUDIO::SET_GPS_ACTIVE(false);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	func_39(1);
	func_40(1);
	LAW::_0xC5EB2755FA25F1E9(1);
	func_41(0);
	func_42();
	func_19(3);
	if (!func_6(uParam0, 8))
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
		HUD::_0x8BC7C1F929D07BF3(724769646);
	}
	func_15(1);
	func_43();
	func_44();
	HUD::SET_MISSION_NAME(false, 0);
	func_45();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	CLOCK::PAUSE_CLOCK(false, 0);
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
	func_46(uParam0);
	func_47(1, 0);
	func_48(2);
	if (!Global_1935630->f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		PED::_0xAAC0EE3B4999ABB5(Global_35, 0);
		WEAPON::_0xB832F1A686B9B810(Global_35, func_49(), 0);
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
		PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
		func_50(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	}
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_609.f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_609.f_2, false);
	}
	func_51(&(uParam0->f_10792));
	func_52();
	CAM::STOP_GAMEPLAY_HINT(true);
	func_39(1);
	func_53();
	if (func_54())
	{
		STREAMING::_0x2F9AC754FE179D58(0.3f);
	}
	func_55(0, 14);
	bVar2 = false;
	if (func_22(uParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		func_56(uParam0);
	}
	func_57(uParam0, 0, !bVar2, bVar2);
	func_58(uParam0, !bVar2);
	func_59(0);
	func_59(1);
	PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
	func_60(0);
	func_62(func_61(uParam0));
	func_63(func_61(uParam0));
	func_64(0);
	func_65(0);
	func_66(func_22(uParam0));
	func_67(uParam0);
	if (!bVar2)
	{
		func_16(1, 0);
	}
	if (func_22(uParam0) != 1)
	{
		func_68(0, &(uParam0->f_8269.f_1282));
	}
	Global_43804 = -1;
	func_69(1);
	func_70(0);
	func_71(Global_1935630, 2097152);
	func_18(0);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
	if (func_22(uParam0) == 0)
	{
		func_72(((*Global_1835011)[uParam0->f_607 /*74*/])->f_1);
	}
	func_73();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, true);
	}
	if (!bParam1)
	{
		switch (func_22(uParam0))
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if ((!CAM::IS_SCREEN_FADING_IN() && !func_6(uParam0, 4)) && !func_6(uParam0, 2))
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
				func_74(uParam0);
				func_75(uParam0);
				func_76();
				func_78(func_77(), 0);
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_80(uParam0->f_607);
				bVar3 = func_81();
				if (!func_82(32768))
				{
					func_83(func_12(uParam0->f_607), !func_6(uParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_84(func_12(uParam0->f_607), bVar3);
				}
				func_17(uParam0, bParam1);
				if (uParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(func_85(uParam0));
				}
				func_14();
				if (func_82(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_86();
					func_87(0);
				}
				else if (func_6(uParam0, 2))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					func_88(1);
					func_89();
					func_90(6);
					func_91(4096);
				}
				break;
			
			case 1:
			case 2:
			case 3:
			case 6:
				func_92(func_12(uParam0->f_607));
				func_93();
				if (func_22(uParam0) == 2)
				{
					func_95(func_94(-1876607090), 1);
				}
				LAW::_0x55F37F5F3F2475E1();
				LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
				LAW::_0x07E8B8B20570271C(PLAYER::GET_PLAYER_INDEX());
				break;
			
			case 5:
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_93();
				Var4 = { func_94(-1876607090) };
				STATS::_0x0FEE2561120F3333(&Var4);
				func_13(func_12(uParam0->f_607), 0, 2);
				break;
			
			default:
				func_83(func_12(uParam0->f_607), 1, 1, 0, 1);
				func_14();
				break;
		}
		if (func_22(uParam0) != 0)
		{
			Var6 = { func_96(uParam0) };
			func_97(func_12(uParam0->f_607), func_22(uParam0), &Var6, 0, 0, func_6(uParam0, 64));
		}
	}
	func_98(1);
	func_19(3);
	func_99(uParam0, 4096);
	return 1;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	PED::_0xED9582B3DA8F02B4(20);
	uParam1->f_608 = uParam0->f_1;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!func_20() == 0)
	{
		if (ITEMSET::IS_ITEMSET_VALID(Global_43615) && ITEMSET::GET_ITEMSET_SIZE(Global_43615) > 0)
		{
			iVar1 = 0;
			while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(Global_43615))
			{
				iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_43615);
				iVar3 = MISC::_0xEE04C0AFD4EFAF0E(iVar2);
				if (((!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3)) && !ITEMSET::IS_IN_ITEMSET(iVar2, iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(iVar2, iVar0);
				}
				iVar1++;
			}
		}
	}
	func_100(uParam1);
	if (!func_20() == 0)
	{
		if (func_101(uParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < uParam1->f_7375.f_13)
			{
				if (((!ENTITY::IS_ENTITY_DEAD(&(uParam1->f_7375.f_13[iVar4 /*12*/])) && ENTITY::IS_ENTITY_A_PED(&(uParam1->f_7375.f_13[iVar4 /*12*/]))) && !ITEMSET::IS_IN_ITEMSET(&(uParam1->f_7375.f_13[iVar4 /*12*/]), iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam1->f_7375.f_13[iVar4 /*12*/])) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(&(uParam1->f_7375.f_13[iVar4 /*12*/]), iVar0);
				}
				iVar4++;
			}
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		PED::_0xF008E0BA1FE1D644(ITEMSET::GET_ITEMSET_SIZE(iVar0));
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (func_102())
	{
		func_103(uParam1, 4194304);
	}
	if (func_104())
	{
		func_103(uParam1, 8388608);
	}
	if (func_105())
	{
		if (!func_104() && !func_102())
		{
			func_103(uParam1, 4);
		}
		else
		{
			if (func_104())
			{
			}
			if (func_102())
			{
			}
		}
		func_107(uParam1, func_106());
	}
	func_108(uParam1, uParam0);
	func_109(uParam1);
	if (uParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((uParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_5(var uParam0)
{
	char* sVar0;
	int iVar1;
	struct<4> Var2;
	char[] cVar6[8];
	
	sVar0 = func_110(uParam0->f_607);
	HUD::SET_MISSION_NAME(true, &sVar0);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	MISC::_0x1096603B519C905F(&sVar0);
	if (uParam0->f_607 != 77)
	{
		func_111();
		func_112(&sVar0, 0);
	}
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	func_113(1);
	func_114();
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	func_45();
	func_40(func_115(uParam0));
	LAW::_0x55F37F5F3F2475E1();
	LAW::_0x292AD61A33A7A485();
	if ((LAW::_0xF46108C50A22B029() && !Global_43890) && !func_116(func_77()))
	{
		POPULATION::_0x2161278C6322F740(16384, 0, 0, -1, -1, 0);
	}
	func_117(1, 0, 1);
	POPULATION::_0x2161278C6322F740(4096, 0, 0, -1, -1, 0);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	func_39(0);
	func_118(uParam0);
	AUDIO::_0x33D51F801CB16E4F();
	if (!Global_1935630->f_12)
	{
		func_119(0, 0);
		PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
		if (!func_120(uParam0, 16384) && (func_121(uParam0, func_33(uParam0), 2) || func_105()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
		}
		PED::CLEAR_PED_WETNESS(Global_35);
		PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(Global_35);
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
		{
			if ((((WEAPON::_0x2C83212A7AA51D3D(iVar1) || iVar1 == 1549070292) || iVar1 == 1030402560) || iVar1 == -135813381) || iVar1 == -351498939)
			{
				if (!func_105() && !func_121(uParam0, func_33(uParam0), 2))
				{
				}
			}
			else if (!func_122(iVar1) && !func_82(32768))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Global_35, iVar1, true, -142743235);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			}
		}
		WEAPON::_0xB832F1A686B9B810(Global_35, 0, 0);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
		func_123(uParam0);
	}
	func_70(1);
	func_39(0);
	func_124(uParam0, -1038436471);
	iLocal_15 = func_125(uParam0);
	iLocal_15 = iLocal_15;
	if (!Global_1935630->f_12)
	{
		if (!func_105())
		{
			Var2 = { func_34(func_33(uParam0)) };
			if (func_33(uParam0) != 0)
			{
				Var2 = { func_126(uParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				func_103(uParam0, 1048576);
			}
			func_107(uParam0, 0);
			if (func_128(uParam0, 3) || func_129())
			{
				func_130(uParam0, func_126(uParam0->f_607), 0);
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
				func_131(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			func_107(uParam0, func_106());
		}
		TELEMETRY::_0x15B0CC1B36F1DE29(&(((*Global_1835011)[uParam0->f_607 /*74*/])->f_8), 0, func_132(func_33(uParam0)), func_105());
	}
	func_133(uParam0);
	func_134(uParam0, 0);
	func_135(uParam0, 0);
	if (!func_136(uParam0, func_33(uParam0)))
	{
		func_107(uParam0, 0);
	}
	func_137(uParam0);
	func_138(uParam0);
	func_139(uParam0);
	func_103(uParam0, 2097152);
	func_140(uParam0, func_33(uParam0), 134217728);
	if (func_82(32768))
	{
		func_1(uParam0, 4);
	}
	func_141(uParam0);
	func_142(uParam0, func_33(uParam0));
	func_143(func_61(uParam0));
	if (!func_120(uParam0, 65536))
	{
		func_144(func_61(uParam0));
	}
	func_145(uParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	func_146(uParam0);
	func_147(uParam0);
	func_148(uParam0);
	func_149(uParam0, 30f);
	func_150(uParam0, 40f);
	func_151(uParam0, Global_35, 0, 0, 0, 0, 0);
	func_98(0);
	AUDIO::_0xA6A3A3F96B8B030E();
	func_18(1);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (uParam0->f_607 != 77)
	{
		cVar6 = func_110(uParam0->f_607);
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(1, MISC::GET_HASH_KEY(&cVar6), 0, "");
	}
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, false);
	}
}

bool func_6(var uParam0, int iParam1)
{
	return (uParam0->f_5309 && iParam1) != 0;
}

void func_7(var uParam0)
{
	var uVar0;
	
	if ((LAW::_0xF46108C50A22B029() && !Global_43890) && !func_116(func_77()))
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	if (!func_121(uParam0, func_33(uParam0), 16384))
	{
		func_152();
	}
	if (!func_8(uParam0, 32768))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	if (!func_8(uParam0, 2048))
	{
		func_153(1, 0);
	}
	switch (func_154(uParam0))
	{
		case -1:
			break;
		
		case 0:
			MemCopy(&uVar0, {func_155(func_61(uParam0))}, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				func_103(uParam0, 64);
			}
			func_156(uParam0, 0);
			func_157(uParam0);
			if (func_158(uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(func_159(uParam0)) && func_128(uParam0, 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(func_159(uParam0), false);
				}
				func_160(uParam0, 1);
			}
			if (func_6(uParam0, -2147483648))
			{
				func_160(uParam0, 2);
			}
			break;
		
		case 1:
			if (func_161(uParam0))
			{
				func_1(uParam0, -2147483648);
				func_160(uParam0, 2);
			}
			func_156(uParam0, func_162(uParam0, func_33(uParam0)) > 4);
			break;
		
		case 2:
			if (func_2(uParam0, 0))
			{
				func_1(uParam0, -2147483648);
				func_160(uParam0, 3);
			}
			break;
		
		case 3:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	if (func_154(uParam0) < 2)
	{
	}
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0->f_5307 && iParam1) != 0;
}

int func_9(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0, 0))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, false);
	}
	func_163(&(uLocal_46[0]), 1, 1);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_164(0);
	AUDIO::STOP_PED_SPEAKING(&(uLocal_46[0]), false);
	if (func_165())
	{
		func_47(0, 0);
	}
	if (func_22(uParam0) == 0)
	{
		func_166(100f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (func_22(uParam0) == 0)
		{
		}
		else
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "MAR2_POSSE");
			PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
		}
		WEAPON::_0x78030C7867D8B9B6(Global_35, 1);
		func_167();
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
	}
	func_168();
	func_169(1);
	func_170(883);
	func_170(884);
	func_170(943);
	func_170(485);
	func_170(477);
	func_170(943);
	func_171(883, 32);
	func_171(884, 32);
	func_171(943, 32);
	func_171(485, 32);
	func_171(477, 32);
	func_171(943, 32);
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[0])))
	{
		POPULATION::_0xA1CFB35069D23C23(&(iLocal_93[0]));
	}
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[0])))
	{
		POPULATION::_0x74C2B3DC0B294102(&(iLocal_93[0]));
	}
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[19])))
	{
		func_172(&(iLocal_93[19]));
	}
	func_173(0);
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[5])))
	{
		PATHFIND::_0xD17672447692478E(&(iLocal_93[5]), 0);
	}
	func_174(1);
	func_175(1);
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	MAP::SET_GPS_CUSTOM_ROUTE_RENDER(false, 0, 0);
	func_176(uParam0);
	func_177();
	func_178();
	func_179();
	func_180();
	func_181(uParam0);
	func_182(uParam0);
	func_183(uParam0);
	func_184();
	func_185();
	func_186(65, 1);
	func_187(65, 0);
	func_186(64, 1);
	func_187(64, 0);
	func_188(64, 22, 0, 1);
	ENTITY::REMOVE_MODEL_HIDE(-1773.528f, -393.6541f, 155.5415f, 0.5f, 1152089151, 0);
	LAW::_0x15ABD5004CAD2D99(-1);
	LAW::_0x710448D44A64C213(1);
	GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_337, 1);
	func_189(Global_35, 0);
	func_190();
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0, 0, -1, 0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 445, false);
	MISC::_0xD74ACDF7DB8114AF(0);
	ENTITY::_0x18FF3110CF47115D(Global_35, 9, 1);
	func_191(0, 1103626240);
	return 1;
}

bool func_10(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 && !func_10(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_192(*iParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_193(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_194(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_195(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_196(iParam0) && !func_197(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_198(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_196(iParam0))
	{
		iParam2 = -1;
	}
	if (func_199(iParam0) == 3 || (func_199(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_198(iParam0))))
	{
		func_201(func_200(iParam0), func_198(iParam0), iParam2);
		if ((!func_195(Global_1572864->f_8) && !func_202(0, 1, 0)) && !func_203(&Global_1935630, 32768))
		{
			iVar0 = func_204(iParam0);
			if (iVar0 != -1)
			{
				func_205(0);
			}
			else if (func_200(iParam0) == 8)
			{
				iVar0 = func_206();
				if (iVar0 != -1)
				{
					func_205(0);
				}
			}
		}
	}
	func_207(iParam0, 0);
	if (func_208(0) == iParam0)
	{
		func_40(1);
		func_209(0);
		func_210(1);
	}
	func_211(iParam0, 1);
	func_212(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_213(0);
	func_214(0);
	func_64(0);
	func_65(0);
	func_215(0);
	func_216(1f);
}

void func_15(bool bParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(Global_43799))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43799))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43799);
		}
	}
	Global_43799 = -1;
	StringCopy(&Global_43801, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_217();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_218())
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_219())
		{
			func_113(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_17(var uParam0, bool bParam1)
{
	struct<7> Var0;
	
	Var0 = func_198(func_12(uParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(uParam0));
	Var0.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_220(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = func_22(uParam0);
	}
	TELEMETRY::_0xD894437E12C17AEC(&(((*Global_1835011)[uParam0->f_607 /*74*/])->f_8), &Var0);
}

void func_18(int iParam0)
{
	Global_36579 = iParam0;
}

int func_19(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_221(iVar0, iParam0);
		iVar0++;
	}
	return 1;
}

int func_20()
{
	return Global_1572887->f_12;
}

void func_21(int iParam0)
{
	Global_1109400->f_22.f_10 = iParam0;
}

int func_22(var uParam0)
{
	return uParam0->f_10783;
}

bool func_23(var uParam0)
{
	return uParam0->f_2501;
}

bool func_24(var uParam0)
{
	return uParam0->f_2500;
}

void func_25(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_222((*uParam1)[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 7)
					{
						func_223((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				
				case 1:
				case 2:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 3)
					{
						func_223((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				
				case 3:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 2)
					{
						func_223((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_224(*uParam0, 1);
}

void func_27(var uParam0, int iParam1)
{
	if (iParam1 || !func_26(uParam0))
	{
		func_225(uParam0);
	}
}

int func_28(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 128) && func_29())
	{
		return 1;
	}
	if (func_226(&(uParam0->f_13118)) >= 4000)
	{
		return 1;
	}
	if (!func_31(uParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		return 0;
	}
	return 1;
}

bool func_29()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

void func_30(var uParam0)
{
	func_227(!func_6(uParam0, 32), 1);
	func_1(uParam0, 32);
}

int func_31(var uParam0)
{
	return 1;
}

bool func_32()
{
	return func_195(Global_1572864->f_8);
}

int func_33(var uParam0)
{
	return uParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	
	if (iParam0 == 0)
	{
		func_229(&Var0, func_228(0, 0));
	}
	else if (iParam0 == 1)
	{
		if (func_230(1))
		{
			func_229(&Var0, func_228(1, 1));
		}
		else
		{
			func_229(&Var0, func_228(1, 0));
		}
	}
	else if (iParam0 == 2)
	{
		if (func_230(2))
		{
			func_229(&Var0, func_228(2, 3));
		}
		else if (func_230(4))
		{
			func_229(&Var0, func_228(2, 6));
		}
		else
		{
			func_229(&Var0, func_228(2, 0));
		}
	}
	else if (iParam0 == 3)
	{
		func_229(&Var0, func_228(3, 0));
	}
	else if (iParam0 == 4)
	{
		func_229(&Var0, func_228(4, 0));
	}
	else if (iParam0 == 5)
	{
		if (func_230(1))
		{
			func_229(&Var0, func_228(5, 1));
		}
		else
		{
			func_229(&Var0, func_228(5, 0));
		}
	}
	else if (iParam0 == 6)
	{
		func_229(&Var0, func_228(6, 0));
	}
	else if (iParam0 == 7)
	{
		func_229(&Var0, func_228(7, 0));
	}
	else if (iParam0 == 8)
	{
		func_229(&Var0, func_228(8, 0));
	}
	else if (iParam0 == 9)
	{
		func_229(&Var0, func_228(9, 0));
	}
	else if (iParam0 == 10)
	{
		func_229(&Var0, func_228(10, 0));
	}
	else if (iParam0 == 25)
	{
		func_229(&Var0, func_228(11, 0));
	}
	return Var0;
}

int func_35(var uParam0)
{
	return func_231(uParam0, func_33(uParam0));
}

void func_36(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;
	
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_213(0);
	func_232(func_12(uParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_222((*uParam0)[iVar0 /*16*/], 1048576) && ((*uParam0)[iVar0 /*16*/])->f_9 == 9)
		{
			func_233((*uParam0)[iVar0 /*16*/]);
		}
		iVar0++;
	}
}

void func_38(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_2495);
	uParam0->f_2495 = 0;
	uParam0->f_2501 = 0;
}

void func_39(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_234(iVar0, 4096);
			if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(((*Global_1425371)[iVar0 /*373*/])->f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar1 /*373*/])->f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(((*Global_1425371)[iVar1 /*373*/])->f_1, 1);
			}
			iVar1++;
		}
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::_0x16B86A49E072AA85();
	}
	if (func_20() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_40(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_71(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_235(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

void func_41(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_42()
{
	func_236();
	func_237();
	func_238();
	func_239();
}

void func_43()
{
	if (func_240())
	{
		Global_18 = 0;
		Global_43883 = 0;
		if (!func_29())
		{
			func_241(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_242();
}

void func_45()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_46(var uParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (uParam0->f_607)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 31:
			MISC::_0x59174F1AFE095B5A(-173507739, false, true, false, 0f, false);
			break;
	}
}

void func_47(int iParam0, int iParam1)
{
	func_243(1, iParam0, iParam1);
}

void func_48(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

var func_49()
{
	return (func_244() || func_54());
}

void func_50(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_51(var uParam0)
{
	func_245(uParam0);
	func_246(uParam0, 0);
	uParam0->f_1 = 0;
	func_43();
}

void func_52()
{
	struct<12> Var0;
	int iVar12;
	
	iVar12 = 0;
	while (iVar12 < Global_43618)
	{
		*(Global_43618[iVar12 /*12*/]) = { Var0 };
		iVar12++;
	}
}

void func_53()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_247(iVar0);
		iVar0++;
	}
	func_248();
	func_249();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (func_250())
	{
		if (func_251(255))
		{
			if (!func_252(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_253(Global_1894899->f_2) && func_254(Global_1894899->f_2))
		{
			func_255(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_256(16);
			}
		}
		else if (func_253(Global_1894899->f_2) && !func_257(Global_1894899->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1894899->f_7 = 0;
		func_258(16);
		func_259();
		if (bVar0)
		{
			func_258(1);
		}
	}
}

void func_56(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_260(uParam0->f_5423[iVar0 /*65*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_5423[iVar0 /*65*/])))
			{
				if (ENTITY::IS_ENTITY_A_PED(&(uParam0->f_5423[iVar0 /*65*/])))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_5423[iVar0 /*65*/])), 0, 1);
				}
			}
		}
		iVar0++;
	}
	if (func_261(uParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_262(uParam0->f_5421))
		{
			iVar1 = func_263(uParam0->f_5421, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), 0, 1);
				}
			}
			iVar0++;
		}
	}
}

void func_57(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_264(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			func_265(uParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 0);
	iVar0 = func_266(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	iVar1 = func_267(iVar0);
	iVar2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	bVar3 = false;
	if (SCRIPTS::IS_THREAD_ACTIVE(iVar2, false) && func_268(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_269(7);
		}
		else
		{
			func_270(iVar0, 0);
		}
		func_271(uParam0, 16);
		PED::SET_PED_CONFIG_FLAG(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_273(iParam0, 32);
	func_274();
}

void func_60(bool bParam0)
{
	Global_1956582 = bParam0;
	if (bParam0)
	{
		MAP::_0x632AA10BF7EA53D3(0, 0);
	}
	else
	{
		MAP::_0x632AA10BF7EA53D3(1, 0);
	}
}

int func_61(var uParam0)
{
	return uParam0->f_607;
}

void func_62(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_275(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::_0xAA03F130A637D923(&Var0);
	}
}

void func_63(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_276(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::_0xAA03F130A637D923(&Var0);
	}
}

void func_64(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_215(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_215(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(var uParam0)
{
	func_277(&(uParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_222((*uParam1)[iVar0 /*16*/], 1048576) && ((*uParam1)[iVar0 /*16*/])->f_9 == 9)
		{
			func_223((*uParam1)[iVar0 /*16*/], 1);
		}
		iVar0++;
	}
}

void func_69(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

void func_70(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, -1415022764, 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_200(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_278(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_279(iVar1))
			{
				if (func_280(iVar1, 4))
				{
					func_281(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_282(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_278(iParam0);
		if (iVar3 == 59)
		{
			func_282(1);
		}
		else if (iVar3 == 61)
		{
			func_282(0);
		}
		else if (iVar3 == 83)
		{
			func_282(0);
		}
	}
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_279(iVar0))
		{
			if (func_280(iVar0, 4))
			{
				if (func_280(iVar0, 16))
				{
					func_283(iVar0, 1);
				}
				if (func_280(iVar0, 8))
				{
					func_284(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (func_20() == 0)
	{
		return;
	}
	iVar0 = func_33(uParam0);
	iVar1 = func_162(uParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_285(uParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (func_22(uParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		func_286(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_287(uParam0);
	}
}

void func_75(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	if (func_288(uParam0))
	{
		fVar1 = BUILTIN::TO_FLOAT((LAW::_0x54310AAB97B92816(PLAYER::GET_PLAYER_INDEX()) - ((*Global_2621440)[0 /*12065*/])->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(50, 200)) / 1000f));
			iVar0 = (iVar0 + BUILTIN::ROUND((fVar1 * fVar2)));
		}
	}
	func_289(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
}

void func_76()
{
	int iVar0;
	
	Global_40.f_9.f_21 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9.f_21.f_1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_9.f_21.f_6[iVar0] = 0f;
		iVar0++;
	}
}

int func_77()
{
	return Global_1894899->f_2;
}

void func_78(int iParam0, bool bParam1)
{
	bool bVar0;
	
	if (!func_253(iParam0))
	{
		return;
	}
	bVar0 = func_257(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_290(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_292(iParam0, func_291());
			func_293(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_294(iParam0, 67108864);
		func_292(iParam0, -15);
	}
	func_295(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_296(11);
	}
	else
	{
		func_297(11);
	}
}

void func_80(int iParam0)
{
	if (func_298(iParam0, 0))
	{
		func_299(262144, 5, 0, 1);
		func_300(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_301(101, 7, 1f, 0, 1);
			func_301(89, 7, 1f, 0, 1);
			break;
	}
}

var func_81()
{
	return Global_1572864->f_15;
}

bool func_82(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	if (!func_195(iParam0))
	{
		return;
	}
	if (func_302(iParam0) == 4)
	{
		func_303(iParam0, func_291());
		if (!func_199(iParam0) == 5 && !func_199(iParam0) == 6)
		{
			if (bParam3)
			{
				func_207(iParam0, 6);
			}
			else
			{
				func_207(iParam0, 5);
			}
			func_212(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_200(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_304(0, 2);
		if (!bVar1 && bParam1)
		{
			func_305();
		}
	}
	else
	{
		func_209(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_306(iParam0);
	}
	else
	{
		Var2 = { func_94(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_82(32768))
		{
			Var4 = { func_94(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_199(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_278(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_278(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_278(iParam0) != 95 && func_278(iParam0) != 82) && !func_307(((*Global_1347702)[func_278(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_278(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_278(iParam0) /*74*/])->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_309(func_278(iParam0), iVar6, func_308());
	}
	else if (iVar0 == 8)
	{
		func_311(func_278(iParam0), iVar6, func_308(), func_310());
	}
	if (!func_199(iParam0) == 5 && !func_199(iParam0) == 6)
	{
		iVar9 = func_312(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_313(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_314(func_278(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_315((iVar10 - 20), 0, iVar10);
					iVar11 = func_315((iVar11 - 10), 0, iVar11);
				}
				func_316(1);
				func_317(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			
			case 4:
				func_317(45, 0, 1);
				break;
			
			case 8:
				iVar10 = func_318(func_278(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_315((iVar10 - 20), 0, iVar10);
					iVar11 = func_315((iVar11 - 10), 0, iVar11);
				}
				func_317(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_319(func_278(iParam0)))
				{
					func_320(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			
			case 9:
				func_317(120, 0, 1);
				break;
			
			case 2:
				func_317(120, 0, 1);
				break;
			
			case 6:
				func_317(func_322(func_321(iParam0)), 0, 1);
				break;
			
			case 5:
				func_317(120, 0, 1);
				break;
		}
	}
	func_211(iParam0, 1);
	func_303(iParam0, func_291());
	func_212(iParam0);
	if ((!func_199(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_204(iParam0);
		if (iVar12 != -1)
		{
			func_205(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_206();
			if (iVar12 != -1)
			{
				func_205(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			
			case 6:
				switch (func_278(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			
			case 8:
				if (func_279(func_278(iParam0)) && func_307(((*Global_1347702)[func_278(iParam0) /*49*/])->f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_278(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			
			case 8:
				if (func_278(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_199(iParam0) == 5 && !func_199(iParam0) == 6)
	{
		if (bParam3)
		{
			func_207(iParam0, 6);
		}
		else
		{
			func_207(iParam0, 5);
		}
		func_212(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_278(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					
					case 1:
						func_323();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					
					case 4:
						func_324(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-1267972061);
						func_324(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(1619534881);
						func_324(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-755457379);
						func_324(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(1015404643);
						func_324(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-1724192342);
						func_324(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(1310680212);
						func_324(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-566881549);
						func_324(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-1753730528);
						func_324(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(147796381);
						func_324(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-378547623);
						func_324(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(829545206);
						func_324(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(891318243);
						func_324(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326();
						func_327(967523420);
						func_328();
						func_329();
						break;
					
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_330(10, 0)));
						break;
					
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					
					case 15:
						func_324(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_331(449, 0);
						}
						break;
					
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_331(446, 0);
						}
						break;
					
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					
					case 18:
						func_332(304805134, 1, 1);
						if (!func_333(((*Global_1347702)[21 /*49*/])->f_15, 1))
						{
							func_83(((*Global_1347702)[21 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[21 /*49*/])->f_3)), iVar14);
						}
						break;
					
					case 20:
						func_334();
						break;
					
					case 26:
						func_335();
						break;
					
					case 17:
						func_336(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_337())
						{
							func_338(1905553950);
						}
						break;
					
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					
					case 33:
						if (!func_339(-514575035, -1))
						{
							iVar15 = func_291();
							func_340(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_341(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_337())
						{
							func_338(1529685685);
						}
						break;
					
					case 34:
						if (func_337())
						{
							func_338(-2082646505);
						}
						break;
					
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					
					case 31:
						func_342();
						break;
					
					case 37:
						func_343();
						if (func_344())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(2116153146, iVar14);
						}
						break;
					
					case 38:
						func_345();
						break;
					
					case 43:
						func_346();
						break;
					
					case 44:
						if (!func_333(((*Global_1347702)[82 /*49*/])->f_15, 1))
						{
							func_83(((*Global_1347702)[82 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[82 /*49*/])->f_3)), iVar14);
						}
						if (!func_333(((*Global_1347702)[83 /*49*/])->f_15, 1))
						{
							func_83(((*Global_1347702)[83 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[83 /*49*/])->f_3)), iVar14);
						}
						break;
					
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					
					case 52:
						break;
					
					case 47:
						func_347();
						break;
					
					case 59:
						func_348();
						break;
					
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					
					case 61:
						func_349();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					
					case 67:
						func_350();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_331(451, 0);
						}
						if (!func_351(-1992824800))
						{
							if (func_351(1520110311))
							{
								iVar16 = func_291();
								func_340(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_341(1937177603, iVar16, 1);
							}
						}
						if (func_352(4))
						{
							if (!func_353(684296857, 1, 0))
							{
								iVar17 = func_291();
								func_340(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_341(-1439688706, iVar17, 1);
							}
						}
						func_324(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_354(89200);
						func_354(2300);
						func_354(2300);
						break;
					
					case 68:
						func_355();
						break;
					
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[108 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[69 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[70 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[7 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[22 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[23 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[65 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[7 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[8 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[36 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[48 /*74*/])->f_8)), iVar14);
						func_356();
						func_354(-139100);
						break;
					
					case 69:
						if (func_333(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_354(-6000);
						}
						break;
					
					case 70:
						func_354(23400);
						func_354(1900);
						func_354(-15000);
						break;
					
					case 71:
						func_354(-5500);
						break;
				}
				break;
			
			case 8:
				switch (func_278(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -812886857);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444);
						break;
					
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
						break;
					
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -433459459);
						break;
					
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426);
						break;
					
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1851064008);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082);
						break;
					
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767);
						break;
					
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187);
						break;
					
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1595707554);
						break;
					
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516);
						break;
					
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 780151577);
						break;
					
					case 58:
						func_357();
						break;
					
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 727067922);
						break;
					
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_358();
						break;
					
					case 66:
						func_359();
						func_360();
						break;
					
					case 67:
						if (!func_361(6))
						{
							func_362(6);
						}
						if (!func_361(3))
						{
							func_362(3);
						}
						if (func_337())
						{
							func_338(1534638301);
						}
						break;
					
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1085773120);
						break;
					
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 753448360);
						break;
					
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833);
						break;
					
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 709011912);
						break;
					
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						break;
					
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 989551914);
						break;
					
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -480463506);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
						break;
					
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1841532568);
						break;
					
					case 9:
						if (func_333(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_363(0);
							func_354(40500);
						}
						else
						{
							func_363(0);
							func_354(46500);
						}
						break;
				}
				break;
			
			case 6:
				switch (func_278(iParam0))
				{
					case 0:
						switch (func_321(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_364(iParam0);
		func_365();
		switch (iVar0)
		{
			case 1:
				switch (func_278(iParam0))
				{
					case 4:
						func_366(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 61:
					case 62:
					case 63:
						func_366(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 25:
						func_366(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					
					case 12:
						func_366(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 53:
						func_366(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					
					case 20:
						func_366(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 19:
						func_366(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					
					case 24:
						iVar18 = func_367(iParam0);
						func_366(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					
					case 28:
						func_366(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 34:
						func_366(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_353(-2046502963, 1, 0))
						{
							func_324(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					
					case 29:
						func_366(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					
					case 37:
						break;
					
					case 58:
						break;
					
					case 57:
						func_366(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					
					case 76:
						func_366(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 72:
						if (func_367(iParam0) == 0)
						{
							func_366(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_366(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			
			case 8:
				if (func_307(((*Global_1347702)[func_278(iParam0) /*49*/])->f_12, 536870912))
				{
					func_368(11, 1);
				}
				switch (func_278(iParam0))
				{
					case 109:
						func_366(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 55:
						func_368(8, 1);
						break;
					
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					
					case 94:
						func_366(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 63:
						func_366(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					
					case 37:
						func_366(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 116:
						func_366(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			
			case 11:
				if (iParam0 == func_369(0, 10, 11, 2116153146))
				{
					func_366(iParam0, func_367(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_369(0, 7, 11, -379687487))
				{
					func_366(iParam0, func_370(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_369(0, 8, 11, -1386089015))
				{
					func_366(iParam0, func_370(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_369(0, 11, 11, -1952009645))
				{
					func_366(iParam0, func_370(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_369(0, 12, 11, 2065895756))
				{
					func_366(iParam0, func_370(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_199(iParam0) == 0)
			{
				if (func_198(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(func_198(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_201(func_200(iParam0), func_198(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_278(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_372(func_371(Global_1879514->f_1));
						if (iVar0 == 8 && func_278(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					
					case 4:
						iVar20 = 2;
						break;
					
					case 6:
						iVar20 = 1;
						break;
					
					case 2:
						iVar20 = 9;
						break;
					
					case 8:
						if (func_279(func_278(iParam0)) && func_307(((*Global_1347702)[func_278(iParam0) /*49*/])->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					
					case 7:
						iVar20 = 0;
						break;
					
					case 5:
						iVar20 = 12;
						break;
					
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_373(bParam2, iVar20);
		}
	}
	func_210(1);
	if ((bVar13 || func_129()) && (func_200(iParam0) == 1 || func_200(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (STATS::_0x01F4D242765C6B24(func_198(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_201(func_200(iParam0), func_198(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_200(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_369(0, 10, 11, 2116153146)))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_374();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_197(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_196(iParam0))
	{
		if (!func_199(iParam0) == 5 && !func_199(iParam0) == 6)
		{
			if (bParam1)
			{
				func_207(iParam0, 6);
			}
			else
			{
				func_207(iParam0, 5);
			}
			func_212(iParam0);
		}
	}
	switch (func_200(iParam0))
	{
		case 1:
			switch (func_278(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514->f_12 = 1;
					break;
				
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
		
		case 8:
			switch (func_278(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514->f_12 = 1;
					break;
				
				case 9:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
	}
}

int func_85(var uParam0)
{
	char[] cVar0[8];
	
	cVar0 = func_110(uParam0->f_607);
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_86()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	
	func_91(4112);
	func_90(6);
	vVar2 = { func_375(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_376(vVar2, uVar1, uVar0, 0);
	func_377(vVar2);
	Global_40.f_9.f_15 = func_378(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_87(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	func_91(32);
	if (iParam0 == 0)
	{
		func_91(16);
	}
	else if (iParam0 == 1)
	{
		func_91(8);
	}
	func_379();
	Global_43888 = 1;
}

void func_88(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_89()
{
	struct<10> Var0;
	struct<16> Var10;
	
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_380(Var10, 0);
}

void func_90(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_91(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_92(int iParam0)
{
	int iVar0;
	
	if (!func_195(iParam0))
	{
		return;
	}
	if (iParam0 != func_208(0))
	{
		return;
	}
	if (func_198(iParam0) == 0)
	{
	}
	iVar0 = func_200(iParam0);
	if (func_199(iParam0) == 3)
	{
		if (func_198(iParam0) == 0)
		{
		}
		else if (STATS::_0x01F4D242765C6B24(func_198(iParam0)))
		{
			if (func_200(iParam0) != 1 && func_200(iParam0) != 8)
			{
				func_201(func_200(iParam0), func_198(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_212(iParam0);
	func_40(1);
	func_209(0);
	func_207(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_316(1);
			func_317(15, 0, 1);
			break;
		
		case 4:
			func_317(10, 0, 1);
			break;
		
		case 8:
			func_317(10, 0, 1);
			break;
		
		case 9:
			func_317(10, 0, 1);
			break;
		
		case 2:
			func_317(10, 0, 1);
			break;
		
		case 6:
			func_317(10, 0, 1);
			break;
		
		case 5:
			func_317(10, 0, 1);
			break;
	}
	func_210(1);
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ITEMSET::IS_ITEMSET_VALID(iLocal_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iLocal_14))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iLocal_14);
		iVar2 = MISC::_0xEE04C0AFD4EFAF0E(iVar1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::_0x88AD6CC10D8D35B2(iVar2)) && !ENTITY::_0xA7E51B53309EAC97(iVar2))
		{
			ENTITY::DELETE_ENTITY(&iVar2);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iLocal_14);
}

struct<2> func_94(int iParam0)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	return Var0;
}

void func_95(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

struct<8> func_96(var uParam0)
{
	return uParam0->f_10784;
}

void func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_381(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_382(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_382(&(Global_1347343->f_11), 16384);
	}
	if (func_383() >= 2)
	{
		if (!func_381(Global_1347343->f_11, 16384))
		{
			func_382(&(Global_1347343->f_11), 8);
		}
		func_216(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_235(Global_1935630, 2048);
	func_384(bParam5);
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::_0x6AC4AF46A6B8DFB2(bParam0);
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 || iParam1);
}

void func_100(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_43618)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Global_43618[iVar0 /*12*/])))
		{
			*(uParam0->f_7375.f_13[iVar0 /*12*/]) = { *(Global_43618[iVar0 /*12*/]) };
			func_385(&(uParam0->f_10792), &(Global_43618[iVar0 /*12*/]), &((Global_43618[iVar0 /*12*/])->f_1), 0);
		}
		iVar0++;
	}
	if (ANIMSCENE::_0x25557E324489393C(Global_43799))
	{
		uParam0->f_7375.f_804 = Global_43799;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_7375.f_804);
	}
	if (func_203(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_386(uParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_387(&(uParam0->f_7375));
}

bool func_102()
{
	return Global_1572864->f_14;
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 || iParam1);
}

bool func_104()
{
	return Global_1572864->f_13;
}

bool func_105()
{
	return func_388() != -1;
}

int func_106()
{
	return Global_1572864->f_9;
}

void func_107(var uParam0, int iParam1)
{
	uParam0->f_597 = iParam1;
	BUILTIN::SETTIMERA(0);
}

void func_108(var uParam0, var uParam1)
{
	uParam0->f_607 = -1;
	func_389(uParam0);
	uParam0->f_634[0] = 57841/*func_390*/;
	uParam0->f_634[1] = 57841/*func_390*/;
	uParam0->f_637 = 0;
	func_391(uParam0, *uParam1);
	func_392(uParam0);
}

void func_109(var uParam0)
{
	int iVar0;
	
	func_393(uParam0, 6418928);
	func_394(uParam0, 18);
	func_103(uParam0, 1);
	if (!func_105() && !func_128(uParam0, 2))
	{
		iVar0 = 0;
		while (iVar0 <= (17 - 1))
		{
			if (iVar0 == 0)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(func_395(uParam0, -1537933036, 0));
			}
			else if (iVar0 == 1)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(func_395(uParam0, 624070311, 0));
			}
			else if (iVar0 == 4)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(func_395(uParam0, 2003418568, 0));
			}
			else if (iVar0 == 6)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(func_395(uParam0, 2064348393, 0));
			}
			else if (iVar0 == 2)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(func_395(uParam0, -82199229, 0));
			}
			else if (iVar0 == 3)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(func_395(uParam0, -624124479, 0));
			}
			else if (iVar0 == 5)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(func_395(uParam0, 1467658477, 0));
			}
			else if (iVar0 == 7)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(func_395(uParam0, 305182125, 0));
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_75[iVar0])))
			{
				func_397(uParam0, &(iLocal_75[iVar0]), func_396(&(iLocal_75[iVar0])), 0, 0, 0, 0);
			}
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_72))
		{
			iLocal_72 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(func_395(uParam0, 822759307, 0));
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				func_397(uParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, true);
				iLocal_49 = func_398();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
				{
					func_399();
				}
			}
		}
	}
}

var func_110(int iParam0)
{
	var uVar0;
	
	if (!func_194(iParam0))
	{
		return uVar0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_8;
}

void func_111()
{
	struct<2> Var0;
	
	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(Global_1879514, &Var0, 20);
}

void func_112(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_113(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_114()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_400(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

int func_115(var uParam0)
{
	switch (uParam0->f_607)
	{
		case 12:
		case 21:
		case 26:
		case 35:
		case 37:
		case 41:
		case 42:
		case 43:
		case 44:
		case 46:
		case 52:
		case 54:
		case 58:
			return 0;
	}
	return 1;
}

int func_116(int iParam0)
{
	if (!func_253(iParam0))
	{
		return 0;
	}
	return func_257(iParam0, 33554432);
}

void func_117(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (PED::_0x7BE607DAFF382FD2(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (bParam0)
				{
					if (_NAMESPACE48::_0x800DF3FC913355F3(_NAMESPACE48::_0x32A1E3B83D501096(iVar3)))
					{
						_NAMESPACE48::_0x7B204F88F6C3D287(_NAMESPACE48::_0x32A1E3B83D501096(iVar3));
					}
					else
					{
						PED::DELETE_PED(&iVar3);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar3, 0, 0);
					if (bParam2)
					{
						TASK::_0xDF94844D474F31E5(iVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_118(var uParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (uParam0->f_607)
	{
		case 31:
			MISC::_0x59174F1AFE095B5A(-702816767, false, true, true, 45f, false);
			break;
	}
}

void func_119(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (iParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

bool func_120(var uParam0, int iParam1)
{
	return (uParam0->f_5308 && iParam1) != 0;
}

bool func_121(var uParam0, int iParam1, int iParam2)
{
	return func_401((uParam0->f_1[func_132(iParam1) /*22*/])->f_11, iParam2);
}

int func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_123(var uParam0)
{
	if (func_29())
	{
		func_402(&(uParam0->f_7375));
	}
}

void func_124(var uParam0, int iParam1)
{
	if (!PED::_0x772A1969F649E902(iParam1))
	{
		return;
	}
	uParam0->f_8268 = iParam1;
}

int func_125(var uParam0)
{
	return uParam0->f_8268;
}

Vector3 func_126(int iParam0)
{
	return func_403(iParam0);
}

int func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return 1;
	}
	return func_404(Param0, Param0.f_3);
}

bool func_128(var uParam0, int iParam1)
{
	return (uParam0->f_608 && iParam1) != 0;
}

int func_129()
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_405())
	{
		return 0;
	}
	if (!func_333(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_333(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_333(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_333(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_333(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_333(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_333(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_333(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_333(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_333(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_333(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_333(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_333(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_333(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_333(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_333(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_333(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_333(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_333(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_333(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_333(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_333(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_333(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_333(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_333(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_333(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_130(var uParam0, vector3 vParam1, float fParam4)
{
	if (func_120(uParam0, 33554432))
	{
		return;
	}
	if (func_120(uParam0, 4096))
	{
		return;
	}
	if (func_406(vParam1))
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam1)))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(vParam1));
		func_103(uParam0, 8);
	}
	func_103(uParam0, 4096);
	PED::_0x4759CC730F947C81();
	VEHICLE::_0x1FF00DB43026B12F();
	PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam1, fParam4, 0, 1, 1, 0);
	CAM::DO_SCREEN_FADE_OUT(0);
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
	func_225(&(uParam0->f_603));
}

void func_131(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return func_407();
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (iVar0 == iParam0)
		{
			return iVar0;
		}
		if (iVar0 == 26)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_133(var uParam0)
{
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_85(uParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(2, func_85(uParam0));
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(1, func_85(uParam0)))
	{
		func_408(uParam0->f_607);
	}
}

void func_134(var uParam0, int iParam1)
{
	uParam0->f_598 = iParam1;
}

void func_135(var uParam0, int iParam1)
{
	uParam0->f_599 = iParam1;
	func_27(&(uParam0->f_600), 1);
}

bool func_136(var uParam0, int iParam1)
{
	return (uParam0->f_1[func_132(iParam1) /*22*/])->f_12;
}

void func_137(var uParam0)
{
	func_409(&(uParam0->f_638));
	func_410(&(uParam0->f_819));
	func_411(&(uParam0->f_1020));
	func_412(&(uParam0->f_1081));
	func_413(&(uParam0->f_1126));
	func_414(&(uParam0->f_5147));
	func_415(&(uParam0->f_1124));
	func_416(&(uParam0->f_5188));
	func_417(&(uParam0->f_5239));
	func_418(&(uParam0->f_5249));
	func_419(&(uParam0->f_5265));
	func_420(&(uParam0->f_5286));
}

void func_138(var uParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iLocal_14))
	{
		iLocal_14 = ITEMSET::CREATE_ITEMSET(true);
	}
}

int func_139(var uParam0)
{
	func_421(uParam0, -1038436471, ((iLocal_33 || iLocal_34) || iLocal_35));
	func_421(uParam0, 2030804811, ((iLocal_33 || iLocal_34) || iLocal_35));
	func_421(uParam0, 96930969, ((iLocal_33 || iLocal_34) || iLocal_35));
	func_421(uParam0, 822759307, 67108863);
	func_421(uParam0, -1693870200, 67108863);
	func_421(uParam0, 2064348393, iLocal_28);
	func_421(uParam0, -1537933036, iLocal_28);
	func_421(uParam0, 624070311, iLocal_28);
	func_421(uParam0, -82199229, iLocal_28);
	func_421(uParam0, -624124479, iLocal_28);
	func_421(uParam0, 2003418568, iLocal_28);
	func_421(uParam0, 1467658477, iLocal_28);
	func_421(uParam0, 305182125, iLocal_28);
	func_421(uParam0, -1726458124, ((((iLocal_30 || iLocal_31) || iLocal_32) || iLocal_34) || iLocal_35));
	func_421(uParam0, joaat("p_amb_clipboard_01"), ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(uParam0, -1698780291, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(uParam0, -1643891339, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(uParam0, -459043872, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(uParam0, 1610236838, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(uParam0, 1561132816, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(uParam0, 1825744405, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(uParam0, -1473388640, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(uParam0, 292812873, (((iLocal_30 || iLocal_31) || iLocal_32) || iLocal_33));
	func_421(uParam0, 1343564320, (iLocal_33 || iLocal_34));
	func_421(uParam0, -1090280091, iLocal_30);
	func_421(uParam0, -51068900, iLocal_30);
	func_421(uParam0, 626176009, iLocal_33);
	func_421(uParam0, 1596452133, iLocal_30);
	func_421(uParam0, 1255849914, iLocal_30);
	func_422(uParam0, -973836254, (((((((iLocal_32 || iLocal_33) || iLocal_34) || iLocal_35) || iLocal_36) || iLocal_37) || iLocal_38) || iLocal_39));
	func_423(uParam0, "mar2_drive_out_ranch", iLocal_28, 2, -1);
	func_423(uParam0, "mar2_ride_ambush", ((iLocal_33 || iLocal_34) || iLocal_35), 2, -1);
	func_423(uParam0, "mar2_ride_ambush2", ((iLocal_33 || iLocal_34) || iLocal_35), 2, -1);
	func_423(uParam0, "mar2_drive_in_ranch", iLocal_38, 2, -1);
	func_423(uParam0, "mar2_ride_after_ambush", iLocal_37, 2, -1);
	func_423(uParam0, "mar2_dog", iLocal_33, 2, -1);
	func_424(uParam0, "script_respawn@horse@mounted_unarmed", (iLocal_33 || iLocal_34));
	func_425(uParam0, "script@story@MAR2@leadout@int@leadout", uLocal_202[0], iLocal_28, 0, "pl_leadout", 0, 1);
	func_425(uParam0, "script@story@MAR2@IG@IG_2_GiveJackReins@IG_2_GiveJackReins", uLocal_202[1], iLocal_29, 0, 0, 0, 1);
	func_425(uParam0, "script@story@MAR2@IG@IG_3_JohnExitWagon@IG_3_JohnExitWagon", uLocal_202[2], iLocal_31, 0, 0, 0, 1);
	func_425(uParam0, "script@story@MAR2@IG@IG_5_JackDrivesWagon@IG_5_JackDrivesWagon", uLocal_202[4], iLocal_32, 0, 0, 0, 1);
	func_425(uParam0, "script@story@MAR2@IG@IG_6_JackTurnsLeft@IG_6_JackTurnsLeft", uLocal_202[5], iLocal_34, 0, "pbl_jack_fakes_turns", 0, 1);
	func_425(uParam0, "script@story@MAR2@IG@IG_7_JackHidesinForest@base", uLocal_202[6], (iLocal_35 || iLocal_36), 0, "pbl_base", 0, 1);
	func_425(uParam0, func_426(), uLocal_202[7], iLocal_35, 0, "pl_ig9_posse_enter", 0, 1);
	func_425(uParam0, "script@story@mar2@leadout@ext@base", uLocal_202[8], iLocal_39, 0, 0, 0, 1);
	func_425(uParam0, "script@story@mar2@leadin@mcs_2@leadin_ilo", uLocal_202[9], (iLocal_30 || iLocal_31), 0, 0, 0, 1);
	func_425(uParam0, "script@story@mar2@leadin@mcs_2@base_criminalped", uLocal_202[10], (iLocal_30 || iLocal_31), 0, 0, 0, 1);
	func_425(uParam0, "script@proc@roamingthugs@laramie@action", uLocal_202[11], iLocal_30, 0, 0, 0, 1);
	func_427(uParam0, "CLIPSET@VEH_WAGON@STANDARD@FRONT@FL@IN_SEAT@MALE@SWAPREINS", (iLocal_29 || iLocal_30));
	func_427(uParam0, "CLIPSET@VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@SWAPREINS", (iLocal_29 || iLocal_30));
	func_429(uParam0, &(uLocal_202[7]), func_428(0), iLocal_35);
	func_429(uParam0, &(uLocal_202[7]), func_428(1), iLocal_35);
	func_429(uParam0, &(uLocal_202[7]), func_428(2), iLocal_35);
	func_429(uParam0, &(uLocal_202[9]), "pl_leadin", (iLocal_30 || iLocal_31));
	func_429(uParam0, &(uLocal_202[10]), "pl_loop", (iLocal_30 || iLocal_31));
	func_429(uParam0, &(uLocal_202[11]), "PL_ACTION", iLocal_30);
	return 1;
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	func_430(&((uParam0->f_1[func_132(iParam1) /*22*/])->f_11), iParam2);
}

void func_141(var uParam0)
{
}

void func_142(var uParam0, int iParam1)
{
	func_431(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_275(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::_0xF66090013DE648D5(&Var0);
	}
}

void func_144(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_276(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::_0xF66090013DE648D5(&Var0);
	}
}

void func_145(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_432(&(uParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(var uParam0)
{
	if (!func_261(uParam0->f_5421))
	{
		uParam0->f_5421 = { func_433() };
	}
}

void func_147(var uParam0)
{
	if (!func_20() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_27(&(uParam0->f_603), 1);
	}
}

void func_148(var uParam0)
{
}

void func_149(var uParam0, float fParam1)
{
	func_434(&(uParam0->f_7375), fParam1);
}

void func_150(var uParam0, float fParam1)
{
	func_435(&(uParam0->f_7375), fParam1);
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_397(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_385(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

void func_152()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), 1352191066, 3, 3, 1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), 1171995096, 4, 0, -1);
}

void func_153(bool bParam0, bool bParam1)
{
	if (CAM::_0x450769C833D58844() && (!bParam0 || !CAM::IS_CINEMATIC_CAM_RENDERING()))
	{
		HUD::_0xC9CAEAEEC1256E54(-1679307491);
		if (!bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(2, 1287709438, false);
			if (Global_1935689->f_1 || &Global_1935689 == 1)
			{
				Global_1935689 = 2;
			}
		}
	}
}

int func_154(var uParam0)
{
	return *uParam0;
}

Vector3 func_155(int iParam0)
{
	vector3 vVar0;
	
	if (!func_194(iParam0))
	{
		return vVar0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_9;
}

void func_156(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (!func_121(uParam0, func_33(uParam0), 134217728))
	{
		func_139(uParam0);
		func_140(uParam0, func_33(uParam0), 134217728);
	}
	if (bParam1 && !func_121(uParam0, func_35(uParam0), 536870912))
	{
		if (func_436(uParam0, func_35(uParam0), 0))
		{
			func_140(uParam0, func_35(uParam0), 536870912);
		}
	}
	if (func_8(uParam0, 8192))
	{
		if (!func_8(uParam0, 536870912))
		{
			if (func_437(&(uParam0->f_1126), func_33(uParam0)))
			{
				func_99(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_436(uParam0, func_33(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_99(uParam0, 8192);
	}
}

int func_157(var uParam0)
{
	return 1;
}

int func_158(var uParam0)
{
	if (func_438(uParam0) < 1)
	{
		func_439(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0);
		func_440(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
	}
	if ((!func_120(uParam0, 4) && !func_105()) && !func_128(uParam0, 3))
	{
		if (!func_120(uParam0, 32))
		{
			if (func_20() == 0)
			{
				func_103(uParam0, 32);
			}
			else
			{
				func_441(uParam0);
			}
		}
		if (func_120(uParam0, 32))
		{
			func_442(uParam0);
		}
	}
	switch (func_438(uParam0))
	{
		case -1:
		case 0:
			func_443(uParam0, 1);
			break;
		
		case 1:
			if (func_444(uParam0))
			{
				if (func_120(uParam0, 4096))
				{
					func_443(uParam0, 2);
				}
				else
				{
					func_443(uParam0, 3);
				}
			}
			break;
		
		case 2:
			if (func_445(uParam0))
			{
				func_443(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_446(uParam0))
			{
				func_443(uParam0, 4);
			}
			break;
		
		case 4:
			return 1;
	}
	return 0;
}

var func_159(var uParam0)
{
	return uParam0->f_5408;
}

void func_160(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_161(var uParam0)
{
	int iVar0;
	
	if (func_33(uParam0) == 26)
	{
		func_447(uParam0, 0);
		return 1;
	}
	if (func_448(uParam0))
	{
		iVar0 = func_33(uParam0);
		func_107(uParam0, func_35(uParam0));
		if (func_33(uParam0) == 26)
		{
			func_447(uParam0, 0);
			return 1;
		}
		else if (func_121(uParam0, iVar0, 128))
		{
			func_448(uParam0);
		}
	}
	return 0;
}

int func_162(var uParam0, int iParam1)
{
	return (uParam0->f_1[func_132(iParam1) /*22*/])->f_10;
}

void func_163(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!PED::_0xFB4891BD7578CDC1(iParam0, -1725579161))
		{
			PED::_0x1902C4CFCC5BE57C(iParam0, 622113465);
			bVar0 = true;
		}
	}
	else if (PED::_0xFB4891BD7578CDC1(iParam0, -1725579161))
	{
		PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
		bVar0 = true;
	}
	if (bParam2)
	{
		if (bVar0)
		{
			PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
		}
	}
}

void func_164(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(&(uLocal_46[0])))
	{
		return;
	}
	if (PED::_0x7C8AA850617651D9(&(uLocal_46[0]), -459229789))
	{
		PED::_0x2B4CE170DE09F346(&(uLocal_46[0]), -459229789);
	}
	if (PED::_0x7C8AA850617651D9(&(uLocal_46[0]), -1308635034))
	{
		PED::_0x2B4CE170DE09F346(&(uLocal_46[0]), -1308635034);
	}
	AUDIO::_0x660A8F876DF1D4F8(8);
	AUDIO::_0x660A8F876DF1D4F8(24);
	AUDIO::_0x660A8F876DF1D4F8(13);
	AUDIO::_0x660A8F876DF1D4F8(12);
	AUDIO::_0x660A8F876DF1D4F8(10);
	AUDIO::_0x660A8F876DF1D4F8(21);
	AUDIO::_0x660A8F876DF1D4F8(3);
	AUDIO::_0x660A8F876DF1D4F8(5);
	AUDIO::_0x660A8F876DF1D4F8(14);
	if (iParam0 == 0)
	{
	}
	else if (iParam0 == 1)
	{
		PED::_0x1E017404784AA6A3(&(uLocal_46[0]), -459229789);
	}
	else if (iParam0 == 2 || iParam0 == 3)
	{
		PED::_0x1E017404784AA6A3(&(uLocal_46[0]), -1308635034);
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		AUDIO::_0x0D7FD6A55FD63AEF(8, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(24, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(13, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(12, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(10, 3, iParam0 != 3);
		AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(3, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(5, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
	}
}

bool func_165()
{
	return func_449(1);
}

void func_166(float fParam0)
{
	if (func_450(1) < fParam0)
	{
		func_451(1, fParam0, 0);
	}
	if (func_450(2) < fParam0)
	{
		func_451(2, fParam0, 0);
	}
	if (func_450(0) < fParam0)
	{
		func_451(0, fParam0, 0);
	}
}

void func_167()
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, 1999408598, 0, 0))
		{
			func_452(1999408598);
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, 1845102363, 0, 0))
		{
			func_452(1845102363);
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, -183018591, 0, 0))
		{
			func_452(-183018591);
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, -1783478894, 0, 0))
		{
			func_452(-1783478894);
		}
	}
}

void func_168()
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 6, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_50[1])))
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(&(iLocal_50[1]), 6, 0);
	}
}

void func_169(bool bParam0)
{
	if (bParam0)
	{
		func_453(7);
		func_453(0);
		func_453(1);
	}
	else
	{
		func_454();
		func_455(7);
		func_455(0);
		func_455(1);
	}
}

int func_170(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	if (!func_458(func_457(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_459(iParam0)))
	{
		return 0;
	}
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_459(iParam0));
	return 1;
}

void func_171(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_456(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_172(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam0);
	POPULATION::_0x74C2B3DC0B294102(iParam0);
}

void func_173(bool bParam0)
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[iVar0])))
		{
			if (bParam0)
			{
				func_460(&(iLocal_93[iVar0]), 0, 0, 0);
			}
			else
			{
				func_172(&(iLocal_93[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = 22;
	while (iVar0 <= 24)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[iVar0])))
		{
			PATHFIND::_0xF2A2177AC848B3A8(&(iLocal_93[iVar0]), iParam0, 1);
		}
		iVar0++;
	}
}

void func_175(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[14])))
	{
		PATHFIND::_0xF2A2177AC848B3A8(&(iLocal_93[14]), iParam0, 1);
	}
}

void func_176(var uParam0)
{
	func_461(uParam0, &(uLocal_46[0]), 1);
	func_462(&iLocal_41);
	func_463(&uLocal_42);
}

void func_177()
{
	func_464(&uLocal_215);
	func_464(&uLocal_218);
	func_464(&uLocal_249);
	func_464(&uLocal_221);
	func_465(&vLocal_224);
	func_465(&vLocal_239);
	func_465(&vLocal_231);
	func_465(&uLocal_235);
}

void func_178()
{
	int iVar0[4];
	int iVar5;
	
	if (!func_466(18))
	{
		return;
	}
	iVar0[0] = 41;
	iVar0[1] = 19;
	iVar0[2] = 48;
	iVar0[3] = 37;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[&iVar0[iVar5]])))
		{
			func_172(&(iLocal_93[&iVar0[iVar5]]));
			PATHFIND::_0xE5EF9DE716FF737E(&(iLocal_93[&iVar0[iVar5]]), 1, 0);
		}
		iVar5++;
	}
	func_467(18, 0);
}

void func_179()
{
	int iVar0;
	
	if (PED::_0x91A5F9CBEBB9D936(iLocal_334))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_334, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(iLocal_335))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_335, false);
	}
	iVar0 = 0;
	while (iVar0 < 71)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[iVar0])))
		{
			VOLUME::_0x43F867EF5C463A53(&(iLocal_93[iVar0]));
		}
		iVar0++;
	}
}

void func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_468(iVar0);
		iVar0++;
	}
}

void func_181(var uParam0)
{
	if (func_22(uParam0) == 0)
	{
	}
	if (PROPSET::_DOES_PROPSET_EXIST(iLocal_166))
	{
		PROPSET::_DELETE_PROPSET(iLocal_166, true, true);
	}
	func_469();
}

void func_182(var uParam0)
{
	if (func_22(uParam0) == 0)
	{
		func_470(&iLocal_72, 0);
	}
	else
	{
		func_470(&iLocal_72, 0);
	}
}

void func_183(var uParam0)
{
	int iVar0;
	
	if (func_22(uParam0) == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
			}
			else if (iVar0 == 1)
			{
				if (func_264(13))
				{
					func_265(uParam0, 13, &(uLocal_46[iVar0]), 0, 0, 1, 0);
				}
			}
			iVar0++;
		}
		func_471(1);
		func_472(&iLocal_49, 1);
		func_473(&iLocal_50, 1);
		func_473(&iLocal_54, 1);
		func_474();
		func_472(&iLocal_66, 0);
		func_472(&iLocal_67, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
			}
			else if (iVar0 == 1)
			{
				if (func_264(13))
				{
					func_265(uParam0, 13, &(uLocal_46[iVar0]), 0, 0, 1, 0);
				}
			}
			iVar0++;
		}
		func_471(0);
		func_472(&iLocal_49, 0);
		func_473(&iLocal_50, 0);
		func_473(&iLocal_54, 0);
		func_474();
		func_472(&iLocal_66, 0);
		func_472(&iLocal_67, 0);
	}
}

void func_184()
{
	if (TASK::_0x841475AC96E794D1(iLocal_165))
	{
		TASK::_0x81948DFE4F5A0283(iLocal_165);
	}
}

void func_185()
{
	if (func_10(iLocal_281))
	{
		func_475(iLocal_281, 0, 1);
		func_476(iLocal_281, 0, 1);
		func_11(&iLocal_281, 1, 1);
	}
	if (func_10(iLocal_282))
	{
		func_475(iLocal_282, 0, 1);
		func_476(iLocal_282, 0, 1);
		func_11(&iLocal_282, 1, 1);
	}
}

void func_186(int iParam0, bool bParam1)
{
	if (!func_477(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_478(iParam0, 1);
	}
	else
	{
		func_479(iParam0, 1);
	}
	func_481(func_480(iParam0), bParam1);
}

void func_187(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_482(iParam0))
		{
			func_479(iParam0, 67108864);
		}
	}
	else if (func_482(iParam0))
	{
		func_478(iParam0, 67108864);
	}
}

void func_188(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_483(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_484(iParam0, 4))
		{
			func_485(iParam0, 4);
		}
	}
	else
	{
		func_486(iParam0, 4);
	}
	func_487(iParam0);
}

void func_189(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

void func_190()
{
	if (SCRIPTS::_0x7409669C5ED50144(-1392528840))
	{
		SCRIPTS::_0x50B72A754EE64A71(-1392528840);
	}
}

void func_191(bool bParam0, float fParam1)
{
	MISC::CLEAR_BIT(&(Global_1934765->f_301), 1);
	func_488(bParam0, fParam1);
}

int func_192(int iParam0)
{
	return iParam0;
}

void func_193(int iParam0)
{
	if (!func_489(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

bool func_194(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_195(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_196(int iParam0)
{
	int iVar0;
	
	iVar0 = func_302(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_197(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_199(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_199(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_490(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_200(int iParam0)
{
	if (!func_195(iParam0))
	{
		return 0;
	}
	return func_492(func_491(iParam0));
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_20() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_202(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_493())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_278(&(Global_1898164->f_1[0 /*5*/]));
		if (func_279(iVar0) && func_307(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_195(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		
		case 1:
			return iParam0 & 1 == 0;
		
		case 4:
			return iParam0 & 2 == 0;
		
		case 6:
			return iParam0 & 4 == 0;
		
		case 2:
			return iParam0 & 16 == 0;
		
		case 5:
			return iParam0 & 32 == 0;
		
		case 9:
			return iParam0 & 64 == 0;
		
		case 8:
			return iParam0 & 8 == 0;
		
		case 10:
			return iParam0 & 512 == 0;
		
		case 3:
			return iParam0 & 128 == 0;
		
		case 11:
			return iParam0 & 256 == 0;
		
		default:
			break;
	}
	return 0;
}

bool func_203(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_204(int iParam0)
{
	int iVar0;
	int iVar1;
	
	switch (func_200(iParam0))
	{
		case 1:
			iVar0 = func_278(iParam0);
			return func_494(iVar0);
		
		case 8:
			iVar1 = func_278(iParam0);
			if (func_307(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_495(iVar1);
			}
			break;
	}
	return -1;
}

void func_205(bool bParam0)
{
	int iVar0;
	
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_20() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_496(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_497();
		Global_1898077->f_9 = func_498(Global_1894899->f_2);
		func_499(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_206()
{
	if (!func_333(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_333(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_333(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_333(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_333(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_333(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_333(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_207(int iParam0, int iParam1)
{
	if (!func_195(iParam0))
	{
		return;
	}
	func_500(iParam0, iParam1);
}

int func_208(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_209(bool bParam0)
{
	if (!bParam0 && func_501(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_210(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_211(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_208(0) != iParam0)
	{
		return;
	}
	if (func_502(iParam0))
	{
		if (bParam1)
		{
			func_503(-525676072);
		}
		else
		{
			func_504(-525676072);
		}
	}
}

int func_212(int iParam0)
{
	return func_506(func_505(iParam0));
}

void func_213(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_214(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_215(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_216(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_217()
{
	if (func_10(Global_43800))
	{
		func_11(&Global_43800, 0, 0);
	}
}

bool func_218()
{
	return func_507(_NAMESPACE71::_0xC17F69E1418CD11F(3));
}

bool func_219()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_220(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

int func_221(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_508(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (((*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/])->f_3 == iParam1)
		{
			func_509(iParam0, (*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/]);
		}
		iVar0++;
	}
	return 1;
}

bool func_222(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_223(char* sParam0, bool bParam1)
{
	if (func_222(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_510(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_510(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_510(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_510(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_510(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_510(sParam0, 1);
		return 1;
	}
	func_510(sParam0, 1);
	return 0;
}

bool func_224(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_225(var uParam0)
{
	func_511(uParam0, 0f);
}

int func_226(var uParam0)
{
	if (!func_26(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_512(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_513() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_227(bool bParam0, bool bParam1)
{
	if (((WEAPON::IS_WEAPON_VALID(Global_1935630->f_44) && WEAPON::_0x6AD66548840472E5(Global_1935630->f_44)) && PED::GET_PED_RESET_FLAG(Global_35, 0)) && CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -160924582 && PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -1016714371)
	{
		func_514(0);
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}
	if (bParam1)
	{
		CAM::_0x9A92C06ACBAF9731();
	}
}

struct<4> func_228(int iParam0, int iParam1)
{
	return func_515(iParam0, iParam1);
}

void func_229(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

bool func_230(int iParam0)
{
	return (Global_40.f_9.f_21 && iParam0) != 0;
}

int func_231(var uParam0, int iParam1)
{
	return (uParam0->f_1[func_132(iParam1) /*22*/])->f_9;
}

void func_232(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];
	
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_200(iParam0) == 1)
	{
		cVar0 = func_110(func_516(iParam0));
		TELEMETRY::_0x8EC7890D446BD9C1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_200(iParam0) == 8)
	{
		cVar0 = func_518(func_517(iParam0));
		TELEMETRY::_0x8EC7890D446BD9C1(&cVar0, 0, Global_1572864->f_9);
	}
	func_519(1, 1);
	func_520(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_216(1f);
}

void func_233(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_510(sParam0, 2);
}

void func_234(int iParam0, int iParam1)
{
	if (!func_521(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

void func_235(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_236()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_237()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_238()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_239()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_240()
{
	return func_522(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_241(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_523(bParam0);
}

void func_242()
{
	if (!Global_1894899->f_186)
	{
		VEHICLE::_0xF5FFB08976911B50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_243(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

bool func_244()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_245(var uParam0)
{
	int iVar0;
	struct<16> Var1;
	struct<18> Var17;
	struct<41> Var35;
	struct<10> Var76;
	struct<22> Var86;
	
	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0 /*13*/] = 0;
		iVar0++;
	}
	uParam0->f_849 = { Var1 };
	StringCopy(&(uParam0->f_849), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_865)
	{
		*(uParam0->f_865[iVar0 /*18*/]) = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1912)
	{
		*(uParam0->f_1912[iVar0 /*10*/]) = { Var76 };
		iVar0++;
	}
	uParam0->f_2073 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1406)
	{
		*(uParam0->f_1406[iVar0 /*41*/]) = { Var35 };
		*(uParam0->f_1735[iVar0 /*22*/]) = { Var86 };
		iVar0++;
	}
	uParam0->f_2074 = -1;
	uParam0->f_2155 = { Global_36 };
	uParam0->f_2158 = 0;
	uParam0->f_2159 = 0;
	uParam0->f_2078 = -1;
	uParam0->f_2079 = -1f;
	uParam0->f_2054 = 0;
	uParam0->f_2056 = 0;
	uParam0->f_2056.f_1 = 0;
	uParam0->f_2293 = 0;
	if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_2082));
	}
}

void func_246(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_247(int iParam0)
{
	if (!func_524(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_46 = 0;
}

void func_248()
{
	func_525(64);
}

void func_249()
{
	Global_1310750->f_16072 = 0;
}

int func_250()
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return Global_1058888->f_4;
}

bool func_251(int iParam0)
{
	return func_252(23, iParam0);
}

int func_252(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_526(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_527())
	{
		return func_526(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_526(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

bool func_253(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_254(int iParam0)
{
	if (!func_253(iParam0))
	{
		return 0;
	}
	return func_257(iParam0, 8);
}

void func_255(int iParam0, int iParam1)
{
	if (!func_253(iParam0))
	{
		return;
	}
	((*Global_1888801)[iParam0 /*35*/])->f_19 = iParam1;
}

void func_256(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_257(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

void func_258(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_259()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_257(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1888801)[iVar1 /*35*/])->f_26)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1888801)[iVar1 /*35*/])->f_26));
			}
		}
		if (((*Global_1888801)[iVar1 /*35*/])->f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1888801)[iVar1 /*35*/])->f_9, false))
			{
				if (func_20() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1888801)[iVar1 /*35*/])->f_9, 523);
				}
				else if (!SCRIPTS::_0x30BED53646C86D11(((*Global_1888801)[iVar1 /*35*/])->f_9))
				{
					SCRIPTS::_0x7DE4643157AD646C(((*Global_1888801)[iVar1 /*35*/])->f_9);
				}
			}
			else if (func_257(iVar1, 2))
			{
				if (func_20() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(((*Global_1888801)[iVar1 /*35*/])->f_26), 523);
				}
				else
				{
					SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(((*Global_1888801)[iVar1 /*35*/])->f_26)));
				}
			}
			if (!SCRIPTS::_DOES_THREAD_EXIST(((*Global_1888801)[iVar1 /*35*/])->f_9))
			{
				((*Global_1888801)[iVar1 /*35*/])->f_9 = 0;
				func_294(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

int func_260(var uParam0)
{
	if (func_528(uParam0, 1) || func_528(uParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool func_261(int iParam0, var uParam1)
{
	return ITEMSET::IS_ITEMSET_VALID(iParam0);
}

int func_262(struct<2> Param0)
{
	if (!func_261(Param0))
	{
		return 0;
	}
	return ITEMSET::GET_ITEMSET_SIZE(Param0);
}

int func_263(struct<2> Param0, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (!func_261(Param0))
	{
		return 0;
	}
	uVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam2, Param0);
	uVar1 = uVar0;
	return uVar1;
}

bool func_264(int iParam0)
{
	if (!func_529(iParam0))
	{
		return false;
	}
	if (!func_530(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_265(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_529(iParam1))
	{
		return;
	}
	if (!func_264(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_22(uParam0) != 0 && func_154(uParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		func_531(uParam0, iParam2);
		func_532(iParam2);
	}
	func_533(iParam1);
	func_534(iParam1, 0);
	func_535(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

var func_266(var uParam0)
{
	return uParam0->f_5411;
}

int func_267(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_268(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_3;
}

void func_269(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	func_536(iParam0);
	if (func_537(iParam0))
	{
		if (func_268(iParam0) != iVar0)
		{
			return;
		}
	}
	func_538(iParam0);
	func_539(iParam0);
	iVar1 = func_220(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
		}
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (PED::_0xAA9F048DCF69B6DC(iVar2))
		{
			if (!func_540(iVar2))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, false);
			}
		}
		func_541(iParam0);
	}
}

void func_270(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_542(iParam0))
	{
		return;
	}
	iVar0 = func_267(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_536(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_268(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_537(iVar0))
		{
			return;
		}
	}
	func_543(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_271(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 - (uParam0->f_5308 && iParam1));
}

int func_272(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_273(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 - (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1));
}

void func_274()
{
	if (func_544(0))
	{
		func_545(0);
	}
	if (func_544(1))
	{
		func_545(1);
	}
	if (func_544(5))
	{
		func_545(5);
	}
	if (func_544(6))
	{
		func_538(6);
	}
}

struct<2> func_275(int iParam0)
{
	struct<2> Var0;
	
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_276(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_275(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_277(var uParam0)
{
	PLAYER::_0xEBFF94328FF7A18A(-3.141593f, 3.141593f);
	if (HUD::_UIPROMPT_IS_VALID(uParam0->f_11))
	{
		HUD::_UIPROMPT_DELETE(uParam0->f_11);
	}
}

int func_278(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_546(func_491(iParam0));
}

bool func_279(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_280(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_281(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_547(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_548(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_548(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_548(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_548(iParam0));
			}
		}
	}
	func_549(iParam0, 4);
	func_549(iParam0, 8);
	func_549(iParam0, 16);
}

void func_282(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_279(iVar0))
		{
			if (func_280(iVar0, 4))
			{
				func_283(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_283(int iParam0, bool bParam1)
{
	if (!func_280(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_547(iParam0), func_548(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_547(iParam0), func_548(iParam0), 2, "");
		func_550(iParam0, 16);
	}
	else
	{
		if (func_280(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_547(iParam0), func_548(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_547(iParam0), func_548(iParam0), 0, "");
		}
		func_549(iParam0, 16);
	}
}

void func_284(int iParam0, bool bParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_280(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_547(iParam0), func_548(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_280(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_547(iParam0), func_548(iParam0), 1, "");
		}
		func_550(iParam0, 8);
	}
	else
	{
		if (func_280(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_547(iParam0), func_548(iParam0), 0, "");
		}
		func_549(iParam0, 8);
	}
}

int func_285(var uParam0)
{
	if (func_120(uParam0, 8388608))
	{
		return 2;
	}
	if (func_120(uParam0, 4194304))
	{
		return 4;
	}
	if (func_120(uParam0, 4))
	{
		return 1;
	}
	if (func_128(uParam0, 1) && func_82(32768))
	{
		return 3;
	}
	return 0;
}

void func_286(int iParam0, int iParam1)
{
	if (func_544(0))
	{
		if (func_551(0))
		{
			func_552(0);
		}
	}
	if (func_544(1))
	{
		if (func_551(1))
		{
			func_552(1);
		}
	}
}

void func_287(var uParam0)
{
	if (func_120(uParam0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
	{
		if (func_120(uParam0, 16))
		{
			func_58(uParam0, 0);
		}
		if (func_440(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

int func_288(var uParam0)
{
	return 0;
	switch (uParam0->f_607)
	{
		case 11:
		case 12:
			return 1;
	}
	return 0;
}

void func_289(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_553(iParam0, sParam4, iParam5);
	}
	func_554(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_290(int iParam0)
{
	if (!func_253(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_291()
{
	return &Global_1899515;
}

void func_292(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_2 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_2 = iParam1;
}

void func_293(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

void func_294(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_295(int iParam0)
{
	if (!func_253(iParam0))
	{
		return;
	}
	if (func_555(iParam0))
	{
		func_556(iParam0);
	}
	else
	{
		func_557(iParam0);
	}
}

int func_296(int iParam0)
{
	if (func_558(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_297(int iParam0)
{
	if (func_559(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_298(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return iParam1;
		
		case 3:
			return iParam1;
		
		case 11:
		case 12:
		case 13:
		case 14:
			return 1;
		
		case 53:
			return 1;
		
		case 24:
			return iParam1;
		
		case 23:
			return iParam1;
		
		case 21:
			return iParam1;
		
		case 26:
			return iParam1;
		
		case 35:
			return 1;
		
		case 34:
			return iParam1;
		
		case 32:
			return iParam1;
		
		case 29:
			return 1;
		
		case 31:
			return 1;
		
		case 37:
			return iParam1;
		
		case 39:
			return iParam1;
		
		case 42:
			return iParam1;
		
		case 43:
			return iParam1;
		
		case 44:
			return iParam1;
		
		case 46:
			return iParam1;
		
		case 54:
			return 1;
		
		case 50:
			return 1;
		
		case 51:
			return iParam1;
		
		case 52:
			return 1;
		
		case 49:
			return 1;
		
		case 58:
			return iParam1;
		
		case 57:
			return 1;
		
		case 59:
			return iParam1;
		
		default:
			break;
	}
	return 0;
}

void func_299(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_560(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_561(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_562(iVar0) < func_563(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_301(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_300(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	fVar0 = func_564();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

void func_301(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		
		case 1:
			fVar2 = 1f;
			break;
		
		case 2:
			fVar2 = 2f;
			break;
		
		case 3:
			fVar2 = 3f;
			break;
		
		case 4:
			fVar2 = 4f;
			break;
		
		case 5:
			fVar2 = 6f;
			break;
		
		case 6:
			fVar2 = 8f;
			break;
		
		case 7:
			fVar2 = 12f;
			break;
		
		case 8:
			fVar3 = 1f;
			break;
		
		case 9:
			fVar3 = 2f;
			break;
		
		case 10:
			fVar3 = 3f;
			break;
		
		case 11:
			fVar3 = 4f;
			break;
		
		case 12:
			fVar3 = 5f;
			break;
		
		case 13:
			fVar3 = 6f;
			break;
		
		case 14:
			fVar3 = 7f;
			break;
		
		case 15:
			fVar3 = 8f;
			break;
		
		case 16:
			fVar3 = 10f;
			break;
		
		case 17:
			fVar3 = 12f;
			break;
		
		case 18:
			fVar3 = 15f;
			break;
		
		case 19:
			fVar3 = 18f;
			break;
		
		case 20:
			fVar3 = 20f;
			break;
		
		case 21:
			fVar3 = 25f;
			break;
		
		case 22:
			fVar2 = -1f;
			break;
		
		case 23:
			fVar3 = -5f;
			break;
		
		case 24:
			fVar3 = -7f;
			break;
		
		case 25:
			fVar3 = -8f;
			break;
	}
	func_565(iParam0, iParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

int func_302(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_199(iParam0);
}

void func_303(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = iParam1;
}

int func_304(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!bParam0 && func_501(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(752193127) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(752193127, iVar0);
	func_209(bParam0);
	return 1;
}

void func_305()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;
	
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_529(iVar17))
		{
			iVar18 = func_566(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_464(&(Global_1359489->f_55));
	if (func_567(1777191912, 1))
	{
		func_568(1777191912, 1, 0);
	}
}

void func_306(int iParam0)
{
	if (!func_195(iParam0))
	{
		return;
	}
	func_570(iParam0, (func_569(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

bool func_307(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_308()
{
	return func_571() > 0;
}

void func_309(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_572(-1032423150, iParam1);
			break;
		
		case 18:
			func_572(294066959, iParam1);
			func_572(-1925639563, iParam1);
			func_572(-378582304, iParam1);
			func_572(-338306437, iParam1);
			break;
		
		case 20:
			func_572(437270255, iParam1);
			break;
		
		case 2:
			func_572(-304000413, iParam1);
			func_572(-533612796, iParam1);
			func_572(48036954, iParam1);
			break;
		
		case 23:
			func_572(193108691, iParam1);
			func_572(491732588, iParam1);
			func_572(671962088, iParam1);
			func_573(1);
			break;
		
		case 16:
			func_572(-1836056650, iParam1);
			func_572(-754657922, iParam1);
			func_572(-1752355838, iParam1);
			func_572(-1375324510, iParam1);
			break;
		
		case 59:
			func_572(-514392105, iParam1);
			func_572(-822060246, iParam1);
			if (func_574(146))
			{
				func_572(1372748575, iParam1);
			}
			func_573(1);
			break;
		
		case 76:
			func_572(1991352213, iParam1);
			if (func_575() == 0)
			{
				func_572(1852488616, iParam1);
			}
			else
			{
				func_572(-9866350, iParam1);
			}
			break;
		
		case 44:
			func_572(863852599, iParam1);
			func_572(1228374935, iParam1);
			func_572(1517889050, iParam1);
			func_572(830657578, iParam1);
			func_572(1901354958, iParam1);
			break;
		
		case 46:
			func_572(-582805654, iParam1);
			func_572(250378940, iParam1);
			func_572(-2143265426, iParam1);
			break;
		
		case 17:
			func_572(-941494139, iParam1);
			func_572(1641489521, iParam1);
			break;
		
		case 19:
			func_572(-1829423531, iParam1);
			func_572(-1590504752, iParam1);
			func_572(1357221321, iParam1);
			break;
		
		case 21:
			func_572(-1037992610, iParam1);
			func_572(-1286414399, iParam1);
			func_573(0);
			break;
		
		case 15:
			func_572(-1014460309, iParam1);
			func_572(-1030502825, iParam1);
			break;
		
		case 33:
			func_572(479388090, iParam1);
			func_572(-1396342239, iParam1);
			func_572(-619618632, iParam1);
			break;
		
		case 34:
			func_572(1193561641, iParam1);
			break;
		
		case 64:
			func_572(1363960851, iParam1);
			break;
		
		case 60:
			func_572(-1232453926, iParam1);
			func_572(-882833584, iParam1);
			break;
		
		case 73:
			func_572(2023205767, iParam1);
			break;
		
		case 74:
			func_572(-2135286513, iParam1);
			if (func_575() == 0)
			{
				func_572(33799444, iParam1);
			}
			else
			{
				func_572(-161343203, iParam1);
			}
			break;
		
		case 8:
			func_572(841639693, iParam1);
			func_572(358952323, iParam1);
			break;
		
		case 36:
			func_572(852538149, iParam1);
			func_572(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_572(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_572(1116039310, iParam1);
			}
			break;
		
		case 27:
			func_572(107633428, iParam1);
			func_572(335902282, iParam1);
			func_572(575673055, iParam1);
			func_572(-425944207, iParam1);
			break;
		
		case 28:
			func_572(-1941530250, iParam1);
			func_572(1399269304, iParam1);
			func_572(1839684664, iParam1);
			func_572(923168503, iParam1);
			func_572(-1485078322, iParam1);
			break;
		
		case 29:
			func_572(574995900, iParam1);
			func_572(-1691275407, iParam1);
			func_572(-1725307861, iParam1);
			break;
		
		case 31:
			func_572(-2108383238, iParam1);
			func_572(-1321828931, iParam1);
			func_572(-1632118592, iParam1);
			func_572(334938948, iParam1);
			break;
		
		case 4:
			func_572(115823701, iParam1);
			func_572(-1896939736, iParam1);
			func_572(-1830746356, iParam1);
			func_572(-1235169781, iParam1);
			func_573(0);
			break;
		
		case 6:
			func_572(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_572(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_572(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_572(-384176140, iParam1);
			}
			break;
		
		case 25:
			func_572(1056132658, iParam1);
			break;
		
		case 24:
			if (&Global_1357515 == -1)
			{
				func_572(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_572(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_572(-1374849484, iParam1);
			}
			break;
		
		case 48:
			func_572(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_572(217772674, iParam1);
			}
			else
			{
				func_572(2071798160, iParam1);
			}
			if (func_576(51))
			{
				func_572(-792802286, iParam1);
			}
			break;
		
		case 49:
			func_572(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_572(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_572(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_572(1402120602, iParam1);
			}
			break;
		
		case 58:
			func_572(-1661934591, iParam1);
			break;
		
		case 50:
			func_572(-1713759426, iParam1);
			break;
		
		case 52:
			func_572(-314799932, iParam1);
			func_572(-462260432, iParam1);
			func_572(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_572(345256028, iParam1);
				func_572(-1635084094, iParam1);
			}
			else
			{
				func_572(114267347, iParam1);
			}
			break;
		
		case 32:
			func_572(615304157, iParam1);
			break;
		
		case 47:
			func_572(415434835, iParam1);
			break;
		
		case 69:
			func_572(1373465877, iParam1);
			if (func_333(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_572(-2058273527, iParam1);
			}
			break;
		
		case 70:
			func_572(451334985, iParam1);
			if (func_575() == 0)
			{
				func_572(-224150200, iParam1);
			}
			else
			{
				func_572(289012628, iParam1);
			}
			break;
		
		case 71:
			if (func_575() == 0)
			{
				func_572(-41692120, iParam1);
			}
			else
			{
				func_572(1537840678, iParam1);
			}
			break;
		
		case 37:
			func_572(1520478365, iParam1);
			break;
		
		case 9:
			if (&Global_1357515 == -1)
			{
				func_572(1842132550, iParam1);
			}
			else
			{
				func_572(-785735240, iParam1);
			}
			func_572(-1605690566, iParam1);
			break;
		
		case 13:
			func_572(-731367459, iParam1);
			func_572(224176585, iParam1);
			func_572(-14545580, iParam1);
			break;
		
		case 53:
			func_572(1095274522, iParam1);
			break;
		
		case 54:
			func_572(-572027988, iParam1);
			break;
		
		case 56:
			func_572(1339307101, iParam1);
			func_572(2102267732, iParam1);
			break;
		
		case 57:
			func_572(710102686, iParam1);
			break;
		
		case 22:
			func_572(-1754368482, iParam1);
			func_572(-2071408557, iParam1);
			break;
		
		case 12:
			func_572(-181334543, iParam1);
			break;
		
		case 0:
			func_572(-2134669864, iParam1);
			func_572(-548289709, iParam1);
			func_572(-911271922, iParam1);
			func_572(-604455775, iParam1);
			break;
		
		case 1:
			func_573(1);
			break;
		
		case 3:
			if (func_344())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
				{
					func_572(-1286192062, iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1286192062))
			{
				func_572(-1478534115, iParam1);
			}
			break;
		
		default:
			break;
	}
}

int func_310()
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_311(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_572(-145926707, iParam1);
			func_572(-604922090, iParam1);
			func_572(-848690769, iParam1);
			break;
		
		case 1:
			func_572(-1477631591, iParam1);
			break;
		
		case 2:
			func_572(76112544, iParam1);
			break;
		
		case 9:
			func_572(1396404308, iParam1);
			func_572(-1357381228, iParam1);
			if (func_333(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_572(1902679064, iParam1);
			}
			else
			{
				func_572(-2146422425, iParam1);
			}
			break;
		
		case 22:
			func_572(-1534761730, iParam1);
			break;
		
		case 26:
			if (bParam3 == 1)
			{
				func_572(-1934184559, iParam1);
				func_572(1281755988, iParam1);
			}
			else
			{
				func_572(-1745220872, iParam1);
				func_572(-1044976796, iParam1);
			}
			break;
		
		case 29:
			if (bParam3 == 1)
			{
				func_572(-1641504538, iParam1);
				func_572(-988014485, iParam1);
			}
			else if (func_574(26))
			{
				func_572(-343043950, iParam1);
				func_572(-640062214, iParam1);
			}
			else
			{
				func_572(-1272028496, iParam1);
			}
			break;
		
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_572(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_572(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_572(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_572(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_572(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_572(1301690984, iParam1);
				}
			}
			else
			{
				func_572(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_572(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_572(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_572(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_572(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_572(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_572(-1868882771, iParam1);
				}
			}
			break;
		
		case 35:
			if (bParam3 == 1)
			{
				func_572(-754570528, iParam1);
			}
			else
			{
				func_572(1690083163, iParam1);
			}
			break;
		
		case 36:
			if (bParam3 == 1)
			{
				func_572(-2072125821, iParam1);
			}
			else
			{
				func_572(270040030, iParam1);
			}
			break;
		
		case 37:
			func_572(-870030001, iParam1);
			break;
		
		case 53:
			if (bParam3 == 1)
			{
				func_572(-505314737, iParam1);
				func_572(-1853052860, iParam1);
			}
			else
			{
				func_572(-1975624994, iParam1);
				func_572(1648135852, iParam1);
			}
			break;
		
		case 54:
			if (bParam3 == 1)
			{
				func_572(1690231002, iParam1);
			}
			else
			{
				func_572(517031924, iParam1);
			}
			break;
		
		case 55:
			if (bParam3 == 1)
			{
				func_572(1225386280, iParam1);
			}
			else if (func_574(54))
			{
				func_572(-283235773, iParam1);
			}
			else
			{
				func_572(701962369, iParam1);
			}
			break;
		
		case 38:
			if (bParam3 == 1)
			{
				func_572(1355398007, iParam1);
			}
			else
			{
				func_572(-1900349467, iParam1);
			}
			break;
		
		case 39:
			if (bParam3 == 1)
			{
				func_572(574636806, iParam1);
			}
			else
			{
				func_572(-196256251, iParam1);
			}
			break;
		
		case 40:
			if (bParam3 == 1)
			{
				func_572(821118338, iParam1);
			}
			else if (func_574(39))
			{
				func_572(846829260, iParam1);
			}
			else
			{
				func_572(-1212247553, iParam1);
			}
			break;
		
		case 43:
			if (bParam3 == 1)
			{
				if (func_367(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_572(1422779093, iParam1);
				}
				else
				{
					func_572(-1769536986, iParam1);
				}
			}
			else
			{
				func_572(-600786233, iParam1);
			}
			break;
		
		case 45:
			if (bParam3 == 1)
			{
				func_572(352134789, iParam1);
			}
			else if (func_574(43))
			{
				func_572(260723113, iParam1);
			}
			else
			{
				func_572(1080243038, iParam1);
			}
			break;
		
		case 41:
			if (bParam3 == 1)
			{
				func_572(-457958799, iParam1);
			}
			else
			{
				func_572(2076458086, iParam1);
			}
			break;
		
		case 42:
			if (func_574(41))
			{
				func_572(-546824600, iParam1);
			}
			else
			{
				func_572(-308364587, iParam1);
			}
			break;
		
		case 49:
			if (bParam3 == 1)
			{
				func_572(1297261593, iParam1);
			}
			else
			{
				func_572(1940089142, iParam1);
			}
			break;
		
		case 50:
			if (bParam3 == 1)
			{
				func_572(2068484886, iParam1);
			}
			else if (func_574(49))
			{
				func_572(-1489080639, iParam1);
				func_572(-2102244050, iParam1);
			}
			else
			{
				func_572(-1863040467, iParam1);
			}
			break;
		
		case 51:
			func_572(-2055943209, iParam1);
			break;
		
		case 58:
			if (func_333(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_572(1650066845, iParam1);
			}
			else
			{
				func_572(151370023, iParam1);
			}
			func_572(1426057961, iParam1);
			func_572(476379584, iParam1);
			break;
		
		case 59:
			func_572(-1638117866, iParam1);
			break;
		
		case 62:
			func_572(199541730, iParam1);
			break;
		
		case 63:
			func_572(1703485804, iParam1);
			func_572(-800449045, iParam1);
			break;
		
		case 65:
			func_572(-1678210868, iParam1);
			func_572(-1448238026, iParam1);
			func_572(-1200864845, iParam1);
			func_572(1473511536, iParam1);
			break;
		
		case 66:
			func_572(-1774490051, iParam1);
			func_572(-34645921, iParam1);
			func_572(174027075, iParam1);
			func_572(-1155999, iParam1);
			func_573(1);
			break;
		
		case 67:
			func_572(701612593, iParam1);
			func_572(-1069631343, iParam1);
			func_572(1673428882, iParam1);
			break;
		
		case 68:
			func_572(-739133286, iParam1);
			func_572(-2130089358, iParam1);
			func_572(2056190391, iParam1);
			func_572(1941753817, iParam1);
			func_573(0);
			break;
		
		case 70:
			func_572(-1217555753, iParam1);
			break;
		
		case 71:
			func_572(697048821, iParam1);
			break;
		
		case 73:
			func_572(-553148661, iParam1);
			break;
		
		case 75:
			func_572(1349250531, iParam1);
			break;
		
		case 77:
			if (bParam3 == 1)
			{
				func_572(1414263863, iParam1);
			}
			else
			{
				func_572(-1772294468, iParam1);
			}
			break;
		
		case 79:
			if (bParam3 == 1)
			{
				func_572(1835465936, iParam1);
				func_572(523715611, iParam1);
			}
			else if (func_574(78))
			{
				func_572(1420338873, iParam1);
			}
			else
			{
				func_572(-46362051, iParam1);
			}
			break;
		
		case 80:
			if (bParam3 == 1)
			{
				func_572(10180941, iParam1);
			}
			else if (func_574(79))
			{
				func_572(768420635, iParam1);
			}
			else
			{
				func_572(-1734012650, iParam1);
			}
			break;
		
		case 85:
			if (bParam3 == 1)
			{
				func_572(-383601523, iParam1);
			}
			else
			{
				func_572(1004812390, iParam1);
			}
			break;
		
		case 86:
			if (bParam3 == 1)
			{
				func_572(1606472408, iParam1);
			}
			else
			{
				func_572(1405690220, iParam1);
			}
			break;
		
		case 87:
			if (bParam3 == 1)
			{
				func_572(-203571927, iParam1);
			}
			else
			{
				func_572(640033630, iParam1);
			}
			break;
		
		case 88:
			if (bParam3 == 1)
			{
				func_572(729886222, iParam1);
			}
			else
			{
				func_572(-158717807, iParam1);
			}
			break;
		
		case 89:
			if (bParam3 == 1)
			{
				func_572(-714816362, iParam1);
			}
			else
			{
				func_572(1160146336, iParam1);
			}
			break;
		
		case 92:
			if (bParam3 == 1)
			{
				func_572(-932932179, iParam1);
				func_572(-1458537240, iParam1);
			}
			else
			{
				func_572(-1764383885, iParam1);
				func_572(894349517, iParam1);
			}
			break;
		
		case 93:
			if (bParam3 == 1)
			{
				func_572(1741466706, iParam1);
			}
			else
			{
				func_572(1405815775, iParam1);
			}
			break;
		
		case 94:
			func_572(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_572(1905280979, iParam1);
			}
			else
			{
				func_572(-1966245299, iParam1);
			}
			func_572(721468880, iParam1);
			break;
		
		case 99:
			func_572(800644248, iParam1);
			break;
		
		case 101:
			if (bParam3 == 1)
			{
				func_572(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_572(-1117781095, iParam1);
				}
				else
				{
					func_572(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_572(141494548, iParam1);
			}
			else
			{
				func_572(-633957459, iParam1);
			}
			break;
		
		case 102:
			if (bParam3 == 1)
			{
				func_572(-369525697, iParam1);
			}
			else if (func_574(101))
			{
				func_572(1595015219, iParam1);
			}
			else
			{
				func_572(-321486961, iParam1);
			}
			break;
		
		case 103:
			func_572(1422724221, iParam1);
			break;
		
		case 104:
			if (bParam3 == 1)
			{
				func_572(793460477, iParam1);
				func_572(-1610242176, iParam1);
			}
			else if (func_574(103))
			{
				func_572(1830897187, iParam1);
			}
			else
			{
				func_572(1419017828, iParam1);
			}
			break;
		
		case 105:
			if (bParam3 == 1)
			{
				func_572(1528309077, iParam1);
			}
			else if (func_574(104))
			{
				func_572(1864966105, iParam1);
			}
			else
			{
				func_572(-103336013, iParam1);
			}
			break;
		
		case 108:
			func_572(1175579551, iParam1);
			break;
		
		case 109:
			if (bParam3 == 1)
			{
				func_572(-1123227713, iParam1);
				func_572(-889574341, iParam1);
			}
			else
			{
				func_572(2065385917, iParam1);
				func_572(780305039, iParam1);
			}
			break;
		
		case 110:
			if (bParam3 == 1)
			{
				func_572(-887421691, iParam1);
			}
			else if (func_574(109))
			{
				func_572(-1318117949, iParam1);
			}
			else
			{
				func_572(1632244327, iParam1);
			}
			break;
		
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_572(284822762, iParam1);
				}
				else
				{
					func_572(-1425017554, iParam1);
				}
			}
			else if (func_574(110))
			{
				if (&Global_1357515 == 0)
				{
					func_572(553087292, iParam1);
				}
				else
				{
					func_572(-1766870331, iParam1);
					func_572(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_572(-1980598735, iParam1);
			}
			else
			{
				func_572(-442732098, iParam1);
				func_572(1955756409, iParam1);
			}
			break;
		
		case 115:
			func_572(394303528, iParam1);
			func_572(-2040171028, iParam1);
			break;
		
		case 143:
			if (bParam3 == 1)
			{
				func_572(1182403394, iParam1);
			}
			else
			{
				func_572(-2116547899, iParam1);
			}
			break;
		
		case 144:
			if (bParam3 == 1)
			{
				func_572(924445424, iParam1);
			}
			else
			{
				func_572(1227062271, iParam1);
			}
			break;
		
		case 117:
			if (bParam3 == 1)
			{
				func_572(430755273, iParam1);
				func_572(-1473879802, iParam1);
			}
			else
			{
				func_572(1121266049, iParam1);
			}
			break;
		
		case 118:
			if (bParam3 == 1)
			{
				func_572(73885747, iParam1);
			}
			else if (func_574(117))
			{
				func_572(1559707913, iParam1);
			}
			else
			{
				func_572(926897873, iParam1);
			}
			break;
		
		case 119:
			if (bParam3 == 1)
			{
				func_572(-2103887972, iParam1);
			}
			else if (func_574(118))
			{
				func_572(-435828462, iParam1);
			}
			else
			{
				func_572(-516020583, iParam1);
			}
			break;
		
		case 121:
			if (bParam3 == 1)
			{
				func_572(2054486196, iParam1);
			}
			else
			{
				func_572(1809320262, iParam1);
			}
			break;
		
		case 122:
			if (bParam3 == 1)
			{
				func_572(-570086056, iParam1);
			}
			else if (func_574(121))
			{
				func_572(32337856, iParam1);
			}
			else
			{
				func_572(-206811842, iParam1);
			}
			break;
		
		case 124:
			if (bParam3 == 1)
			{
				func_572(813493663, iParam1);
			}
			else if (func_574(122))
			{
				func_572(-2132763590, iParam1);
			}
			else
			{
				func_572(477901035, iParam1);
			}
			break;
		
		case 125:
			if (bParam3 == 1)
			{
				func_572(-66240572, iParam1);
				func_572(1563075046, iParam1);
			}
			else
			{
				func_572(-787011772, iParam1);
				func_572(-1523377438, iParam1);
			}
			break;
		
		case 127:
			func_572(61020800, iParam1);
			break;
		
		case 129:
			func_572(428985222, iParam1);
			break;
		
		case 131:
			func_572(-1393851036, iParam1);
			break;
		
		case 133:
			func_572(1559531342, iParam1);
			break;
		
		case 134:
			func_572(-718846442, iParam1);
			break;
		
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_572(-1374407408, iParam1);
				}
				else
				{
					func_572(471210931, iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(1732474719) && HUD::_JOURNAL_CAN_WRITE_ENTRY(801682048)) && HUD::_JOURNAL_CAN_WRITE_ENTRY(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_572(-472672138, iParam1);
				}
				else
				{
					func_572(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_572(-1678710489, iParam1);
			}
			else
			{
				func_572(1522210661, iParam1);
			}
			break;
		
		case 136:
			if (bParam3 == 1)
			{
				func_572(1717582460, iParam1);
			}
			else
			{
				func_572(343644664, iParam1);
			}
			break;
		
		case 137:
			if (bParam3 == 1)
			{
				func_572(1568112362, iParam1);
				func_572(1388317526, iParam1);
			}
			else if (func_574(136))
			{
				func_572(-1597534828, iParam1);
				func_572(-1207918353, iParam1);
			}
			else
			{
				func_572(-1940891082, iParam1);
				func_572(-598277294, iParam1);
			}
			break;
		
		case 142:
			if (bParam2 == 1)
			{
				func_572(448334530, iParam1);
				func_572(2145375502, iParam1);
			}
			else
			{
				func_572(-1891994685, iParam1);
			}
			break;
		
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_572(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_572(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_572(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_572(848633571, iParam1);
			}
			break;
		
		case 147:
			if (bParam3 == 1)
			{
				func_572(-66616327, iParam1);
			}
			else
			{
				func_572(1978361607, iParam1);
			}
			break;
		
		case 148:
			if (bParam3 == 1)
			{
				func_572(1862916706, iParam1);
			}
			else if (func_574(147))
			{
				func_572(675105199, iParam1);
			}
			else
			{
				func_572(-1993800776, iParam1);
			}
			break;
		
		case 149:
			if (bParam3 == 1)
			{
				func_572(174409701, iParam1);
			}
			else if (func_574(148))
			{
				func_572(-1730895475, iParam1);
			}
			else
			{
				func_572(-342396910, iParam1);
			}
			break;
		
		case 150:
			if (bParam3 == 1)
			{
				func_572(1295237052, iParam1);
			}
			else if (func_574(149))
			{
				func_572(-788577684, iParam1);
			}
			else
			{
				func_572(1527015024, iParam1);
			}
			break;
		
		default:
			break;
	}
}

int func_312(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 1137976064;
	*uParam2 = -1;
	iVar0 = func_200(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_516(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				
				case 1:
					return -694047360;
				
				case 2:
					return -757336127;
				
				case 3:
					return -164763388;
				
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				
				case 5:
					return 2030928096;
				
				case 6:
					return -332258016;
				
				case 10:
					return 1817180056;
				
				case 13:
					return 545240164;
				
				case 15:
					return 1141344854;
				
				case 8:
					return 1796786552;
				
				case 25:
					return 1783253542;
				
				case 14:
					return -2129915369;
				
				case 7:
					return -1393633441;
				
				case 9:
					if (func_367(((*Global_1835011)[9 /*74*/])->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				
				case 11:
					return 278608719;
				
				case 12:
					return -561040434;
				
				case 16:
					return 95619635;
				
				case 17:
					return 1185998732;
				
				case 53:
					return -221923309;
				
				case 18:
					return -620369863;
				
				case 19:
					return -1738185394;
				
				case 20:
					return -637873918;
				
				case 22:
					return 561912024;
				
				case 23:
					return 951007010;
				
				case 24:
					return -1512720465;
				
				case 21:
					return 920901415;
				
				case 26:
					return -1664107227;
				
				case 27:
					return -1934704933;
				
				case 28:
					return -582523927;
				
				case 29:
					return -259827569;
				
				case 30:
					return -1633236438;
				
				case 31:
					return -1396074730;
				
				case 32:
					return -248683070;
				
				case 33:
					return 1454698172;
				
				case 34:
					return -1548165899;
				
				case 35:
					return -1486701482;
				
				case 36:
					return 1249990864;
				
				case 37:
					return -164125056;
				
				case 38:
					return -1198456774;
				
				case 39:
					return -820014425;
				
				case 40:
					return -2071373019;
				
				case 41:
					return -162152912;
				
				case 42:
					return -532430534;
				
				case 43:
					return -695655810;
				
				case 44:
					return -1238376790;
				
				case 45:
					return 1927460276;
				
				case 46:
					return 1824331150;
				
				case 47:
					return 1888528254;
				
				case 48:
					return 1971155641;
				
				case 49:
					return -1757085331;
				
				case 50:
					return 1264235360;
				
				case 51:
					return 1157034909;
				
				case 52:
					return 512067206;
				
				case 54:
					return -258855820;
				
				case 55:
					return 2143139308;
				
				case 56:
					return -18183703;
				
				case 57:
					return 692218123;
				
				case 58:
					return 127002552;
				
				case 59:
					return 1769573516;
				
				case 60:
					return 501194998;
				
				case 61:
					return -219249641;
				
				case 62:
					return 1935952956;
				
				case 63:
					return 121222228;
				
				case 64:
					return -1381943684;
				
				case 65:
					return -1417145007;
				
				case 66:
					return -314300362;
				
				case 67:
					return -445710060;
				
				case 68:
					return 122725574;
				
				case 69:
					return -935212592;
				
				case 70:
					return -597010176;
				
				case 71:
					return 534386033;
				
				case 72:
					return -330340613;
				
				case 73:
					return 1425403638;
				
				case 74:
					return 124507607;
				
				case 75:
					return 747937920;
				
				case 76:
					return 1636680094;
			}
			break;
		
		case 8:
			iVar2 = func_278(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				
				case 0:
					return -172442174;
				
				case 63:
					return 569547151;
				
				case 97:
					return 1150653348;
				
				case 98:
					return -2075517304;
				
				case 94:
					return -1048889581;
				
				case 59:
					return 2137967386;
				
				case 61:
					return -1955429862;
				
				case 62:
					return 1899640864;
				
				case 112:
					return 1469701481;
				
				case 113:
					return -954047483;
				
				case 114:
					return -1868521635;
				
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				
				case 76:
					return 281905065;
				
				case 134:
					return 1132574871;
				
				case 3:
					return 709886296;
				
				case 5:
					return -1646431667;
				
				case 21:
					return 2143106360;
				
				case 37:
					return 1073595144;
				
				case 138:
					return -1582252733;
				
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				
				case 106:
					return 195634974;
				
				case 107:
					return 1508162848;
				
				case 115:
					return -1971110347;
				
				case 116:
					return 446631778;
				
				case 22:
					return 1909655985;
				
				case 23:
					return -303175962;
				
				case 82:
					return 437096661;
				
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				
				case 140:
					return 1593516439;
				
				case 142:
					return 1234351222;
				
				case 58:
					return -1988547710;
				
				case 64:
					return 98434060;
				
				case 65:
					return 1937922313;
				
				case 108:
					return -713369135;
				
				case 8:
					return -1538781541;
				
				case 10:
					return -925475803;
				
				case 2:
					return -1479860879;
				
				case 96:
					return -1025265051;
				
				case 52:
					return -270246276;
				
				default:
					break;
			}
			break;
		
		case 11:
			iVar3 = func_278(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				
				case -1220302226:
					return 703663141;
				
				case -839878969:
					return 1534808110;
				
				case -360730635:
					return -742985447;
				
				case 687859577:
					return -331451824;
				
				case 1202375449:
					return 1344816618;
				
				case -1891229662:
					return 597768834;
				
				case -668333238:
					return -120359954;
				
				case 99378894:
					return -290258665;
				
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_313(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_577(iParam0);
	uVar3 = func_578(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = uParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_291();
				func_340(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_579(iParam0, 1);
			if (func_580(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_581(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_582(1, iParam0);
				}
				else
				{
					func_583(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_314(int iParam0, var uParam1)
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*uParam1 = 35;
			return 70;
		
		case 76:
			*uParam1 = 35;
			return 70;
		
		case 70:
			*uParam1 = 35;
			return 70;
		
		case 73:
			*uParam1 = 35;
			return 70;
		
		case 19:
			*uParam1 = 25;
			return 50;
		
		case 21:
			*uParam1 = 35;
			return 70;
		
		case 60:
			*uParam1 = 35;
			return 70;
		
		case 61:
			*uParam1 = 35;
			return 70;
		
		case 62:
			*uParam1 = 35;
			return 70;
		
		case 63:
			*uParam1 = 35;
			return 70;
		
		case 64:
			*uParam1 = 35;
			return 70;
		
		case 65:
			*uParam1 = 35;
			return 70;
		
		case 66:
			*uParam1 = 35;
			return 70;
		
		case 67:
			*uParam1 = 35;
			return 70;
		
		case 32:
			*uParam1 = 35;
			return 70;
		
		case 48:
			*uParam1 = 35;
			return 70;
		
		case 49:
			*uParam1 = 35;
			return 70;
		
		case 47:
			*uParam1 = 30;
			return 60;
		
		case 58:
			*uParam1 = 30;
			return 60;
		
		case 27:
			*uParam1 = 30;
			return 60;
		
		case 29:
			*uParam1 = 40;
			return 100;
		
		case 30:
			*uParam1 = 50;
			return 100;
		
		case 33:
			*uParam1 = 30;
			return 60;
		
		case 23:
			*uParam1 = 30;
			return 60;
		
		case 10:
			*uParam1 = 30;
			return 60;
		
		case 5:
			*uParam1 = 45;
			return 60;
		
		case 11:
			*uParam1 = 35;
			return 70;
		
		case 9:
			*uParam1 = 45;
			return 70;
		
		case 15:
			*uParam1 = 15;
			return 35;
		
		case 35:
			*uParam1 = 50;
			return 70;
		
		case 8:
			*uParam1 = 50;
			return 100;
		
		case 36:
			*uParam1 = 40;
			return 80;
		
		case 22:
			*uParam1 = 25;
			return 45;
		
		case 39:
		case 41:
		case 42:
		case 43:
			*uParam1 = 20;
			return 40;
	}
	return 120;
}

int func_315(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_316(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_317(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_584(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

int func_318(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		
		case 60:
			*iParam1 = 0;
			return 0;
		
		case 74:
			*iParam1 = 45;
			return 75;
		
		case 119:
			*iParam1 = 45;
			return 75;
		
		case 84:
			*iParam1 = 45;
			return 75;
		
		case 85:
			*iParam1 = 45;
			return 75;
		
		case 106:
			*iParam1 = 20;
			return 35;
		
		case 107:
			*iParam1 = 20;
			return 35;
		
		case 8:
			*iParam1 = 45;
			return 75;
		
		case 9:
			*iParam1 = 45;
			return 75;
		
		case 10:
			*iParam1 = 45;
			return 75;
		
		case 98:
			*iParam1 = 30;
			return 50;
		
		case 82:
			*iParam1 = 30;
			return 50;
		
		case 83:
			*iParam1 = 30;
			return 50;
		
		case 99:
			*iParam1 = 30;
			return 50;
		
		case 138:
			*iParam1 = 30;
			return 50;
		
		case 139:
			*iParam1 = 30;
			return 50;
		
		case 140:
			*iParam1 = 30;
			return 50;
		
		case 141:
			*iParam1 = 30;
			return 50;
		
		case 142:
			*iParam1 = 30;
			return 50;
		
		case 21:
			*iParam1 = 30;
			return 50;
		
		case 136:
			*iParam1 = 30;
			return 50;
		
		case 137:
			*iParam1 = 40;
			return 80;
		
		case 124:
			*iParam1 = 30;
			return 50;
		
		case 125:
			*iParam1 = 30;
			return 50;
		
		case 127:
			*iParam1 = 30;
			return 50;
		
		case 128:
			*iParam1 = 30;
			return 50;
		
		case 131:
			*iParam1 = 30;
			return 50;
		
		case 133:
			*iParam1 = 30;
			return 50;
		
		case 105:
			*iParam1 = 30;
			return 50;
		
		case 89:
			*iParam1 = 30;
			return 50;
		
		case 93:
			*iParam1 = 30;
			return 50;
		
		case 75:
			*iParam1 = 30;
			return 50;
		
		case 5:
			*iParam1 = 50;
			return 100;
		
		case 6:
			*iParam1 = 30;
			return 50;
		
		case 77:
			*iParam1 = 30;
			return 50;
		
		case 78:
			*iParam1 = 30;
			return 50;
		
		case 30:
			*iParam1 = 30;
			return 50;
		
		case 31:
			*iParam1 = 30;
			return 50;
		
		case 32:
			*iParam1 = 30;
			return 50;
		
		case 33:
			*iParam1 = 30;
			return 50;
		
		case 34:
			*iParam1 = 30;
			return 50;
		
		case 35:
			*iParam1 = 30;
			return 50;
		
		case 36:
			*iParam1 = 30;
			return 50;
		
		case 24:
			*iParam1 = 30;
			return 50;
		
		case 25:
			*iParam1 = 30;
			return 50;
		
		case 26:
			*iParam1 = 30;
			return 50;
		
		case 27:
			*iParam1 = 30;
			return 50;
		
		case 28:
			*iParam1 = 30;
			return 50;
		
		case 66:
			*iParam1 = 30;
			return 50;
		
		case 67:
			*iParam1 = 50;
			return 100;
		
		case 146:
			*iParam1 = 30;
			return 50;
		
		case 38:
			*iParam1 = 30;
			return 45;
		
		case 39:
			*iParam1 = 30;
			return 45;
		
		case 40:
			*iParam1 = 30;
			return 45;
		
		case 41:
			*iParam1 = 30;
			return 45;
		
		case 42:
			*iParam1 = 30;
			return 45;
		
		case 43:
			*iParam1 = 30;
			return 45;
		
		case 44:
			*iParam1 = 30;
			return 45;
		
		case 45:
			*iParam1 = 30;
			return 45;
		
		case 46:
			*iParam1 = 30;
			return 45;
		
		case 47:
			*iParam1 = 30;
			return 45;
		
		case 48:
			*iParam1 = 30;
			return 45;
		
		case 49:
			*iParam1 = 30;
			return 45;
		
		case 50:
			*iParam1 = 30;
			return 45;
		
		case 51:
			*iParam1 = 30;
			return 45;
		
		case 112:
			*iParam1 = 10;
			return 20;
		
		case 113:
			*iParam1 = 25;
			return 45;
		
		case 114:
			*iParam1 = 10;
			return 20;
		
		case 59:
			*iParam1 = 15;
			return 35;
		
		case 61:
			*iParam1 = 15;
			return 35;
		
		case 97:
			*iParam1 = 15;
			return 35;
		
		case 94:
			*iParam1 = 20;
			return 30;
		
		case 0:
			*iParam1 = 45;
			return 75;
		
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return 1;
	}
	return 0;
}

void func_320(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36615 && func_585(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_586(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_587(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_588(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_587(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_321(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_589(func_491(iParam0));
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_323()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

int func_324(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (!func_592(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_593(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_594(iParam0, bParam2);
	iVar2 = 0;
	if (func_595(iParam0, 0, 0) == 0)
	{
		if (func_596(iParam0))
		{
			iVar5 = func_597(iParam0);
			iVar6 = func_598(iVar5);
			iVar7 = func_599(iVar6) + 1;
			func_600(iVar5);
			if (func_601(38))
			{
				func_331(483, 0);
			}
			else
			{
				func_331(482, 0);
			}
			if (iVar7 == func_602(iVar6))
			{
				func_324(func_603(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_405() && func_604(4))
				{
					if (func_405() && (func_605(38) || func_601(38)))
					{
						func_607(38, func_603(iVar6), 0, 0, func_606(), 0, -1, 0);
						func_608(2);
					}
					else
					{
						func_607(38, func_603(iVar6), 0, 0, func_606(), 0, -1, 0);
						func_608(1);
					}
				}
			}
			else if (func_405() && func_604(4))
			{
				if (func_405() && (func_605(38) || func_601(38)))
				{
					func_607(38, 0, 0, 0, func_606(), 0, -1, 0);
					func_608(2);
				}
				else
				{
					func_607(38, 0, 0, 0, func_606(), 0, -1, 0);
					func_608(1);
				}
			}
			if (func_405() && func_604(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_405() && (func_605(38) || func_601(38)))
					{
						func_609(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_609(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_610(iParam0) == -1037537535)
	{
		if ((!func_611(iParam0, 866047851) && !func_611(iParam0, -1979000645)) && !func_611(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_612(iParam0, 8388608) && !func_613(28))
	{
		func_614(28);
	}
	if (!bVar3)
	{
		if (func_611(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_615(iParam0) == -1447088266)
			{
				iVar1 = func_617(func_616(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_20() == -1)
					{
						func_618(iVar1);
					}
					if (func_619(0) && func_620(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_621(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_20() == -1)
					{
						func_618(iParam0);
					}
					if (func_619(0) && func_620(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_621(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_610(iParam0) == -427144552)
		{
			if (!func_622(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_610(iParam0) == 307971639 && func_623(iParam0))
		{
			if (!func_624(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_611(iParam0, 866047851))
		{
			func_625(iParam0);
		}
		else if (func_611(iParam0, 2000026003))
		{
			func_626(iParam0);
		}
		else if (func_611(iParam0, -103750053))
		{
			func_95(func_627(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_628(-717883113, 2091222383), iVar0);
		}
		else if (func_611(iParam0, -121341956) && !func_611(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_333(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_331(498, 0);
				}
			}
			if (func_611(iParam0, -2017733358) || func_611(iParam0, -1369131378))
			{
				func_629(iParam0);
			}
		}
		else if (func_611(iParam0, -136654233))
		{
			if (func_611(iParam0, -1021472396))
			{
			}
		}
		else if (func_611(iParam0, -1466706512) && func_611(iParam0, 1147021565))
		{
			func_331(484, 0);
		}
		else if (func_611(iParam0, 1147021565) && func_611(iParam0, -524514947))
		{
		}
		else if (func_611(iParam0, 554195525))
		{
		}
		else if (func_611(iParam0, 589988438))
		{
			if (func_630())
			{
				func_631(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_611(iParam0, 787083290) && func_611(iParam0, 949916894))
		{
			func_632(iParam0);
		}
		else if (func_611(iParam0, -1718133314))
		{
			func_633(iParam0);
		}
		else if (func_611(iParam0, -1738650224))
		{
			func_634(iParam0);
		}
		else if (func_611(iParam0, -1112814642) && func_611(iParam0, 949916894))
		{
			func_635(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_611(iParam0, 1841149704))
		{
			func_636();
		}
		else if (func_611(iParam0, 606799272))
		{
			func_637(iParam0, iParam1);
			func_638(iParam0);
		}
		else if (func_611(iParam0, -1112814642) && func_611(iParam0, -1697809989))
		{
			func_639(iParam0, 0, 0, 0);
		}
		else if (func_611(iParam0, -2017733358) || func_611(iParam0, -1369131378))
		{
			func_629(iParam0);
		}
		else if (func_611(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return 0;
			}
			func_640(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_611(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_353(215778062, 1, 0))
					{
						func_324(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1334018438:
					if (!func_353(670273567, 1, 0))
					{
						func_324(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1055480217:
					if (!func_353(-967317137, 1, 0))
					{
						func_324(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -978159653:
					if (!func_353(526074061, 1, 0))
					{
						func_324(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 2100131425:
					if (!func_353(-1045488665, 1, 0))
					{
						func_324(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -2041382104:
					if (!func_353(471514780, 1, 0))
					{
						func_324(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_611(iParam0, -839724752) && func_612(iParam0, 4))
		{
			if (!func_601(42))
			{
				func_641(iParam0);
			}
		}
		else if (func_611(iParam0, 1399091007))
		{
			func_642(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_611(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				
				case -1421669656:
					iVar8 = -59585102;
					break;
				
				case -830181022:
					iVar8 = 1018123892;
					break;
				
				case 917695895:
					iVar8 = -1455768246;
					break;
				
				case -1580595448:
					iVar8 = -921879912;
					break;
				
				case 1309992709:
					iVar8 = 982182330;
					break;
				
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_324(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case -1185145312:
				func_614(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_643(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_644(&iVar9, 0))
				{
					func_620(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_643(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			
			case -160924582:
				break;
			
			case 2131771850:
				func_331(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_645();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_646();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_647();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_648();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_649();
				break;
			
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			
			case -1937935584:
				func_650(499813453, 854119837, 0);
				func_651(499813453, 0);
				func_652(1);
				break;
			
			case 2127812557:
				func_650(499813453, -1292544588, 0);
				func_651(499813453, 0);
				func_652(2);
				break;
			
			case 808991383:
				func_650(499813453, -1003325394, 0);
				func_651(499813453, 0);
				func_652(4);
				break;
			
			case 1134518629:
				func_650(666607663, -335460405, 0);
				func_651(666607663, 0);
				func_653(1);
				break;
			
			case 902940106:
				func_650(666607663, 903797617, 0);
				func_651(666607663, 0);
				func_653(2);
				break;
			
			case -418174898:
				func_650(666607663, 669728650, 0);
				func_651(666607663, 0);
				func_653(4);
				break;
			
			case -648114971:
				func_650(-220219788, 1214120047, 0);
				func_651(-220219788, 0);
				func_654(1);
				break;
			
			case 211153747:
				func_650(-220219788, 655769340, 0);
				func_651(-220219788, 0);
				func_654(2);
				break;
			
			case -32876996:
				func_650(-220219788, 885316185, 0);
				func_651(-220219788, 0);
				func_654(4);
				break;
			
			case 1191437462:
				func_650(218622660, -1491419385, 0);
				func_651(218622660, 0);
				func_655(1);
				break;
			
			case 1119149048:
				func_650(218622660, 1809565830, 0);
				func_651(218622660, 0);
				func_655(2);
				break;
			
			case 506073827:
				func_650(390004462, -628873767, 0);
				func_651(390004462, 0);
				func_656(1);
				break;
			
			case -1876986168:
				func_650(390004462, -405421956, 0);
				func_651(390004462, 0);
				func_656(2);
				break;
			
			case 2142623221:
				func_650(390004462, -1108972386, 0);
				func_651(390004462, 0);
				func_656(4);
				break;
			
			case 1508215381:
				func_650(6410548, 1053716392, 0);
				func_651(6410548, 0);
				func_657(1);
				break;
			
			case -888935280:
				func_650(6410548, 806507056, 0);
				func_651(6410548, 0);
				func_657(2);
				break;
			
			case -1252474566:
				func_650(6410548, 1571925350, 0);
				func_651(6410548, 0);
				func_657(4);
				break;
			
			case -1465702449:
				func_650(6410548, 1330352282, 0);
				func_651(6410548, 0);
				func_657(8);
				break;
			
			case -21093309:
				func_659(242, func_658(-21093309), 0);
				break;
			
			case 204375141:
				func_659(240, func_658(204375141), 0);
				break;
			
			case -417963070:
				func_659(241, func_658(-417963070), 0);
				break;
			
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_660(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_660(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_660(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_660(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_660(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_660(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 80178851:
				func_331(488, 0);
				break;
			
			case 1613651027:
				func_331(491, 0);
				break;
			
			case -885810591:
				func_331(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_324(func_661(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_324(func_662(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			
			case -601932535:
				if (func_613(1))
				{
					func_331(487, 0);
				}
				break;
			
			case -898386032:
				func_331(486, 0);
				break;
			
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			
			case 1510719693:
				func_331(496, 0);
				break;
			
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_663(&iVar10);
		if (!func_664(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_619(0))
		{
			return 1;
		}
		if (func_610(iParam0) == -1037537535)
		{
			func_665(iParam0);
		}
		if (func_611(iParam0, -1979000645))
		{
			func_666(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_619(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_324(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_667(iVar2, 0);
		}
	}
	Var35 = { func_668(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_669(iParam0);
	if (sParam6 > 0f)
	{
		if (func_611(iParam0, -839724752))
		{
			func_670(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_671(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_325(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (func_611(iParam0, 1989861793))
	{
		iVar0 = func_672(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_673(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_674(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_675(iVar14, iVar1);
					if (iVar15 != iParam0 && func_591(iVar15, 0))
					{
						if (func_676(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_677(iVar1);
				if (bVar13)
				{
					func_678(iParam0);
				}
				else
				{
					func_331(306, 0);
				}
			}
		}
	}
}

void func_326()
{
	if (func_20() != -1)
	{
		return;
	}
	func_679();
	func_680();
	func_681();
	func_682();
	func_683();
	func_684();
	func_685();
}

void func_327(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	
	func_686(iParam0, 1, 1, -142743235, 1);
	if (func_687(iParam0))
	{
		func_688(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_690(func_689(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_691(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_692() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_693(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_693(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_694(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_694(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_694(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_694(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_694(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_694(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_694(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_694(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_694(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_695(iVar8, iVar0))
				{
					func_696(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_695(iVar8, iVar0))
		{
			func_696(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
			{
				*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
		{
			*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
		if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar1 /*3*/]) };
		iVar1++;
	}
}

void func_328()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_695(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_692() == -2125499975 || func_692() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_696(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_696(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5 /*11*/] == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/]) = { vVar2 };
	}
}

void func_329()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_330(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		
		case 1:
			return "COMP_JOHN";
		
		case 2:
			return "COMP_JAVIER";
		
		case 3:
			return "COMP_BILL";
		
		case 4:
			return "COMP_UNCLE";
		
		case 5:
			return "COMP_HOSEA";
		
		case 6:
			return "COMP_MICAH";
		
		case 7:
			return "COMP_CHARLES";
		
		case 8:
			return "COMP_SEAN";
		
		case 9:
			return "COMP_LENNY";
		
		case 10:
			return "COMP_KIERAN";
		
		case 23:
			return "COMP_TRELAWNY";
		
		case 17:
			return "COMP_PEARSON";
		
		case 18:
			return "COMP_STRAUSS";
		
		case 13:
			return "COMP_ABIGAIL";
		
		case 14:
			return "COMP_JACK";
		
		case 16:
			return "COMP_MOLLY_OSHEA";
		
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		
		case 15:
			return "COMP_MARY_BETH";
		
		case 20:
			return "COMP_KAREN";
		
		case 22:
			return "COMP_TILLY";
		
		case 11:
			return "COMP_SADIE";
		
		case 24:
			return "COMP_CLEET";
		
		case 25:
			return "COMP_JOE";
		
		case 26:
			return "COMP_EAGLE_FLIES";
		
		case 12:
			if ((func_333(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_333(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_196(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_567(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_331(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_699(iVar0, iVar1);
}

void func_332(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_690(iParam0, 1);
	func_700(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_700(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_701(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_700((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_700((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

int func_333(int iParam0, bool bParam1)
{
	switch (func_302(iParam0))
	{
		case 5:
			return 1;
		
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_334()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_335()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_336(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<5> Var0;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_702(iParam1, 1, 0) };
		iParam3 = func_703(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_704(iParam3);
	return func_643(iParam0, iParam1, iParam2, iParam3, bParam4, iParam5, 1, 0, 1, 0);
}

bool func_337()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

void func_338(int iParam0)
{
	int iVar0;
	
	if (!func_705(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_VISIBLE(iVar0, true);
}

int func_339(int iParam0, int iParam1)
{
	if (!func_706(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_707(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_708(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_709(*iParam0);
	iVar1 = func_710(*iParam0);
	iVar2 = func_711(*iParam0);
	iVar3 = func_712(*iParam0);
	iVar4 = func_713(*iParam0);
	iVar5 = func_714(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_715(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_715(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_716(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_341(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_706(iParam0))
	{
		return;
	}
	if (!func_717(iParam1))
	{
		return;
	}
	if (func_718(iParam1, 1))
	{
		return;
	}
	iVar0 = func_707(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_339(iParam0, -1))
	{
		return;
	}
	else
	{
		func_719(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_202(0, 0, 1))
		{
			func_373(0, 17);
		}
	}
}

void func_342()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_343()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_344()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_345()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_346()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_347()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_348()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_349()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_350()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_351(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_352(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

bool func_353(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_591(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_610(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_720(iParam0, 1))
		{
			return false;
		}
	}
	return func_595(iParam0, 0, bParam2) >= iParam1;
}

void func_354(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_721(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_721(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_355()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_356()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_357()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_358()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_359()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_590(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_360()
{
	if (func_722() > 1)
	{
		func_723();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_331(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_331(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_331(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_331(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_331(452, 1);
		}
	}
}

bool func_361(int iParam0)
{
	return func_724(iParam0, 4, 1);
}

void func_362(int iParam0)
{
	func_725(iParam0, 4, 1);
}

void func_363(int iParam0)
{
	struct<2> Var0;
	
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_364(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_82(32768))
	{
		return;
	}
	if (!func_195(iParam0))
	{
		return;
	}
	func_235(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_200(iParam0))
	{
		case 1:
			func_95(func_628(909007663, -587839005), 1);
			iVar0 = func_278(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_494(iVar0))
			{
				case 0:
					func_95(func_628(909007663, 1325140787), 1);
					break;
				
				case 1:
					func_95(func_628(909007663, 2101241783), 1);
					break;
				
				case 2:
					func_95(func_628(909007663, -1296936294), 1);
					break;
				
				case 3:
					func_95(func_628(909007663, -798388728), 1);
					break;
				
				case 4:
					func_95(func_628(909007663, -1787586531), 1);
					break;
				
				case 5:
					func_95(func_628(909007663, -1002834519), 1);
					break;
				
				case 6:
					func_95(func_628(909007663, -50600144), 1);
					break;
				
				case 7:
					func_95(func_628(909007663, -348503123), 1);
					break;
				
				case 8:
					func_95(func_628(909007663, -528798161), 1);
					break;
				
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_628(909007663, -406093146), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_95(func_628(909007663, 532323983), 1);
			}
			break;
		
		case 8:
			iVar1 = func_278(iParam0);
			if (func_307(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_307(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_307(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_95(func_628(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_628(909007663, -2049243343), 1);
				}
			}
			if (func_307(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_495(iVar1))
				{
					case 0:
						func_95(func_628(909007663, 1325140787), 1);
						break;
					
					case 1:
						func_95(func_628(909007663, 2101241783), 1);
						break;
					
					case 2:
						func_95(func_628(909007663, -1296936294), 1);
						break;
					
					case 3:
						func_95(func_628(909007663, -798388728), 1);
						break;
					
					case 4:
						func_95(func_628(909007663, -1787586531), 1);
						break;
					
					case 5:
						func_95(func_628(909007663, -1002834519), 1);
						break;
					
					case 6:
						func_95(func_628(909007663, -50600144), 1);
						break;
					
					case 7:
						func_95(func_628(909007663, -348503123), 1);
						break;
					
					case 8:
						func_95(func_628(909007663, -528798161), 1);
						break;
					
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_95(func_628(909007663, 532323983), 1);
				}
			}
			else if (func_307(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_307(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_307(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_95(func_628(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_628(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_365()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	if (func_20() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_2)
	{
		return;
	}
	if (!func_3(64))
	{
		return;
	}
	else if (func_203(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_202(0, 0, 1) || func_726()) || func_129())
	{
		return;
	}
	iVar0 = func_206();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_727(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_728(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_728(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_729(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_373(0, -1);
	}
	if (iVar2 > 0)
	{
		func_730("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_731(1, 0);
	Global_1956575->f_2 = 1;
}

void func_366(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_289(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_732(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_367(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_733(iParam0);
}

int func_368(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_734(iParam0))
	{
		return 0;
	}
	if (!func_405())
	{
		return 0;
	}
	if (!func_735(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_369(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			
			case 10:
				return -1;
			
			case 12:
				return -1;
			
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			
			case 8:
				return -1;
			
			case 7:
				return -1;
			
			case 6:
				return -1;
			
			default:
				return -1;
		}
	}
	if (iVar2 >= func_736())
	{
		iVar2 = func_736();
	}
	iVar5 = func_737(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_491(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_491(iVar6) == 0)
			{
				return func_738(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_491(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_491(iVar6) == 0)
			{
				return func_738(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_738(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_739(1330954593, 0, -1);
		
		case 1:
			return func_739(1330954593, 0, -1);
		
		case 2:
			return func_739(1330954593, 0, -1) * 2;
		
		case 4:
			return func_739(1330954593, 0, -1);
		
		case 5:
			return func_739(1330954593, 0, -1);
		
		case 6:
			return func_739(1330954593, 0, -1) * 2;
		
		case 12:
			return 75000;
		
		case 8:
			return func_739(1330954593, 0, -1) * 3;
		
		case 9:
			return func_739(1330954593, 0, -1) * 3;
		
		case 10:
			return func_739(1330954593, 0, -1) * 3;
		
		case 11:
			return func_739(1330954593, 0, -1);
		
		default:
			break;
	}
	return 0;
}

var func_371(int iParam0)
{
	char[] cVar0[8];
	
	if (!func_195(iParam0))
	{
		return cVar0;
	}
	switch (func_200(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_516(iParam0) /*74*/])->f_8;
			break;
		
		case 8:
			cVar0 = ((*Global_1347702)[func_278(iParam0) /*49*/])->f_3;
			break;
		
		case 11:
			if (iParam0 == func_369(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_372(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_1879514->f_11)
	{
		iVar0 = func_374();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_200(Global_1879514->f_1) == 1)
			{
				func_368(5, 1);
			}
			else if (func_200(Global_1879514->f_1) == 8 && (func_307(((*Global_1347702)[func_278(Global_1879514->f_1) /*49*/])->f_12, 1) || func_307(((*Global_1347702)[func_278(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_368(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_373(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_740(&Global_0, 8);
	}
	if (!func_405() || func_20() != -1)
	{
		return;
	}
	func_740(&Global_0, 1);
}

int func_374()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_741(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_742(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

Vector3 func_375(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, int iParam10)
{
	vector3 vVar0;
	
	vVar0 = { func_743(vParam0, uParam3, uParam4, bParam5, bParam6, 1, iParam7, bParam8, fParam9, iParam10, -1, 1103626240) };
	if (func_406(vVar0))
	{
		vVar0 = { func_743(vParam0, uParam3, uParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_376(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_377(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_378(vector3 vParam0, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_77();
	if (func_253(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_744(vParam0, bParam3);
}

void func_379()
{
	func_745();
	func_746();
	func_747();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

void func_380(struct<16> Param0, int iParam16)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_748(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_749(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1934603)[iVar0 /*16*/]) = { Param0 };
			Global_1934603->f_161++;
			func_750(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_381(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_382(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_383()
{
	return Global_1572864->f_12;
}

void func_384(bool bParam0)
{
	int iVar0;
	struct<16> Var1;
	
	if (func_507(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_751();
	Var1.f_3.f_3 = iVar0;
	if ((!func_752(Global_1347343->f_2) && !func_381(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_753();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_381(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_754();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_381(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_755();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_756(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_757(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_382(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_382(&(Global_1347343->f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

void func_385(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	struct<11> Var1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	func_758(uParam0);
	iVar0 = func_759(uParam0, iParam1);
	if (bParam3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			sParam2 = func_396(iParam1);
		}
		iVar0 = func_760(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_761(uParam0);
		}
		else
		{
			Var1.f_10 = joaat("weapon_unarmed");
			MISC::_COPY_MEMORY(uParam0->f_3[iVar0 /*13*/], &Var1, 13);
		}
	}
	else if (iVar0 != -1)
	{
	}
	else
	{
		iVar0 = func_761(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	(uParam0->f_3[iVar0 /*13*/])->f_2 = iParam1;
	(uParam0->f_3[iVar0 /*13*/])->f_1 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_3[iVar0 /*13*/])->f_9))
	{
		(uParam0->f_3[iVar0 /*13*/])->f_9 = sParam2;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL((uParam0->f_3[iVar0 /*13*/])->f_9, sParam2))
		{
		}
		(uParam0->f_3[iVar0 /*13*/])->f_9 = sParam2;
	}
	func_762(uParam0, 2);
}

void func_386(var uParam0, int iParam1)
{
	func_763(&(uParam0->f_7375), iParam1);
}

int func_387(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar1 /*12*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_388()
{
	return func_516(func_764());
}

void func_389(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_407())
	{
		func_765(uParam0, iVar0);
		iVar0++;
	}
}

int func_390(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_391(var uParam0, var uParam1)
{
	uParam0->f_607 = uParam1;
}

void func_392(var uParam0)
{
	func_771(uParam0, iLocal_16, iLocal_17, 109003/*func_766*/, 109048/*func_767*/, 109153/*func_768*/, 109363/*func_769*/, 110084/*func_770*/, "MAR2_INT", 4098, -1);
	func_771(uParam0, iLocal_17, iLocal_18, 110334/*func_772*/, 110359/*func_773*/, 110564/*func_774*/, 110684/*func_775*/, 111061/*func_776*/, "", 4096, -1);
	func_771(uParam0, iLocal_18, iLocal_19, 111181/*func_777*/, 111195/*func_778*/, 111413/*func_779*/, 111493/*func_780*/, 111977/*func_781*/, "", 4096, -1);
	func_771(uParam0, iLocal_19, iLocal_20, 112022/*func_782*/, 112047/*func_783*/, 112265/*func_784*/, 112547/*func_785*/, 112855/*func_786*/, "", 4352, -1);
	func_771(uParam0, iLocal_20, iLocal_21, 112921/*func_787*/, 112941/*func_788*/, 113182/*func_789*/, 113298/*func_790*/, 113831/*func_791*/, "MAR2_MCS2", 4098, -1);
	func_771(uParam0, iLocal_21, iLocal_22, 113876/*func_792*/, 113901/*func_793*/, 114157/*func_794*/, 114246/*func_795*/, 114544/*func_796*/, "", 4096, -1);
	func_771(uParam0, iLocal_22, iLocal_23, 114571/*func_797*/, 114596/*func_798*/, 115066/*func_799*/, 115307/*func_800*/, 115720/*func_801*/, "", 4096, -1);
	func_771(uParam0, iLocal_23, iLocal_24, 115739/*func_802*/, 115835/*func_803*/, 116247/*func_804*/, 116456/*func_805*/, 116698/*func_806*/, "MAR2_MCS3", 4162, -1);
	func_771(uParam0, iLocal_24, iLocal_25, 116777/*func_807*/, 116818/*func_808*/, 116888/*func_809*/, 117117/*func_810*/, 117366/*func_811*/, "", 4608, -1);
	func_771(uParam0, iLocal_25, iLocal_26, 117424/*func_812*/, 117502/*func_813*/, 117676/*func_814*/, 117820/*func_815*/, 118271/*func_816*/, "MAR2_MCS4", 4610, -1);
	func_771(uParam0, iLocal_26, iLocal_27, 118298/*func_817*/, 118361/*func_818*/, 118546/*func_819*/, 118677/*func_820*/, 119445/*func_821*/, "", 4608, -1);
	func_771(uParam0, iLocal_27, 26, 119477/*func_822*/, 119497/*func_823*/, 119658/*func_824*/, 119731/*func_825*/, 119765/*func_826*/, "MAR2_EXT", 4610, -1);
}

void func_393(var uParam0, int iParam1)
{
	uParam0->f_5410 = iParam1;
}

void func_394(var uParam0, int iParam1)
{
	uParam0->f_13105 = iParam1;
}

int func_395(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43615))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(Global_43615))
	{
		iVar1 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43615));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43615), func_827()) && ENTITY::GET_ENTITY_MODEL(iVar1) == iParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
				}
				if (bParam2)
				{
					ITEMSET::REMOVE_FROM_ITEMSET(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43615), Global_43615);
				}
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

char* func_396(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_828(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_829(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_830(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

void func_397(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_831(&(uParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_385(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

int func_398()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_0xA8BA0BAE0173457B(iLocal_72, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

void func_399()
{
	if (!func_832(iLocal_49, 0))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, true);
	if (PED::_0x33FA048675821DA7(iLocal_49, 3))
	{
		PED::_0x06D26A96CA1BCA75(iLocal_49, 3, 0f, 0);
	}
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_49, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_49, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_49, 301, true);
	PED::_0x1902C4CFCC5BE57C(iLocal_49, -937613161);
	PED::_0xCC8CA3E88256E58F(iLocal_49, 0, 1, 1, 1, 0);
}

void func_400(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_401(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_402(var uParam0)
{
	vector3 vVar0;
	
	if (!func_833(uParam0, 4))
	{
		if (func_834(uParam0->f_860, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_835(uParam0) };
		if (!func_834(uParam0->f_860, 524288))
		{
			func_836(&(uParam0->f_872));
		}
		func_837(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_838(uParam0, 0f, 0f, 0f);
		func_839(uParam0);
		func_840(uParam0);
		func_841(uParam0, 0f, 0f, 0f, 0, 0);
		func_842(uParam0);
		func_763(uParam0, 4);
		func_843(uParam0, 0);
		func_844(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_873)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_873));
		}
	}
}

Vector3 func_403(int iParam0)
{
	if (func_845(iParam0))
	{
		return func_846(iParam0);
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_404(vector3 vParam0, var uParam3)
{
	int iVar0;
	
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		func_519(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_847(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_848(0, 0);
		if (func_705(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_849(1, 0);
		}
	}
	else
	{
		func_849(1, 0);
	}
	func_214(0);
	func_520(0, vParam0, uParam3);
	return 1;
}

int func_405()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_406(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_407()
{
	return 26;
}

void func_408(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;
	
	if (!func_194(iParam0))
	{
		return;
	}
	uVar0 = ((*Global_1835011)[iParam0 /*74*/])->f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { ((*Global_1835011)[iParam0 /*74*/])->f_18 };
	MemCopy(&Var5, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, ((*Global_1835011)[iParam0 /*74*/])->f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, ((*Global_1835011)[iParam0 /*74*/])->f_26, 676312963);
}

void func_409(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_850((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_410(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_851((*uParam0)[iVar0 /*5*/]);
		iVar0++;
	}
}

void func_411(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_852((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_412(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_853((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_413(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_854((*uParam0)[iVar0 /*67*/]);
		iVar0++;
	}
}

void func_414(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_855((*uParam0)[iVar0 /*4*/]);
		iVar0++;
	}
}

void func_415(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_416(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_856((*uParam0)[iVar0 /*5*/]);
		iVar0++;
	}
}

void func_417(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_857((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_418(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_858((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_419(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_859((*uParam0)[iVar0 /*4*/]);
		iVar0++;
	}
}

void func_420(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_860((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_421(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_861(&(uParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_862(&(uParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_638[iVar0 /*3*/] = iParam1;
	(uParam0->f_638[iVar0 /*3*/])->f_2 = ((uParam0->f_638[iVar0 /*3*/])->f_2 || iParam2);
}

void func_422(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_863(&(uParam0->f_5147), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_864(&(uParam0->f_5147));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_5147[iVar0 /*4*/] = iParam1;
	(uParam0->f_5147[iVar0 /*4*/])->f_3 = ((uParam0->f_5147[iVar0 /*4*/])->f_3 || uParam2);
}

void func_423(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_865(&(uParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_866(&(uParam0->f_819));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_819[iVar0 /*5*/] = cParam1;
	(uParam0->f_819[iVar0 /*5*/])->f_4 = ((uParam0->f_819[iVar0 /*5*/])->f_4 || iParam2);
	(uParam0->f_819[iVar0 /*5*/])->f_1 = iParam3;
	(uParam0->f_819[iVar0 /*5*/])->f_2 = iParam4;
}

void func_424(var uParam0, char[4] cParam1, var uParam2)
{
	int iVar0;
	
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_867(&(uParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_868(&(uParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_1020[iVar0 /*3*/] = cParam1;
	(uParam0->f_1020[iVar0 /*3*/])->f_2 = ((uParam0->f_1020[iVar0 /*3*/])->f_2 || uParam2);
}

void func_425(var uParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (!func_869(iParam3, func_33(uParam0)) && !func_869(iParam3, func_35(uParam0)))
	{
		return;
	}
	if (ANIMSCENE::_0x25557E324489393C(*uParam2))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
	{
		return;
	}
	iVar0 = func_870(&(uParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_871(&(uParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!ANIMSCENE::_0x25557E324489393C(*uParam2))
	{
		*uParam2 = ANIMSCENE::_CREATE_ANIM_SCENE(cParam1, iParam4, sParam5, false, true);
	}
	(uParam0->f_1126[iVar0 /*67*/])->f_1 = *uParam2;
	uParam0->f_1126[iVar0 /*67*/] = cParam1;
	(uParam0->f_1126[iVar0 /*67*/])->f_3 = ((uParam0->f_1126[iVar0 /*67*/])->f_3 || iParam3);
	(uParam0->f_1126[iVar0 /*67*/])->f_65 = iParam6;
	(uParam0->f_1126[iVar0 /*67*/])->f_66 = bParam7;
	if (!bParam7)
	{
		func_872(&((uParam0->f_1126[iVar0 /*67*/])->f_2), 4);
	}
}

char* func_426()
{
	return "script@story@MAR2@IG@IG_9_Posse_Confrontation@IG_9_Posse_Enter_Interact_Attack";
}

void func_427(var uParam0, char[4] cParam1, var uParam2)
{
	int iVar0;
	
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_873(&(uParam0->f_1081), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_874(&(uParam0->f_1081));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_1081[iVar0 /*3*/] = cParam1;
	(uParam0->f_1081[iVar0 /*3*/])->f_2 = ((uParam0->f_1081[iVar0 /*3*/])->f_2 || uParam2);
}

char* func_428(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_IG9_POSSE_ENTER";
		
		case 1:
			return "pl_IG9_JOHN_DONT_KNOW";
		
		case 2:
			return "pl_IG9_JOHN_WHAT_OF_IT";
		
		case 3:
			return "pl_IG9_POSSE_KILL_A_FELLA";
		
		case 4:
			return "pl_IG9_JOHN_WASNT_ME";
		
		case 5:
			return "pl_IG9_JOHN_SURE_HE_HAD_IT_COMING";
		
		case 6:
			return "pl_IG9_POSSE_LEADER_DONT_MEAN_NO";
		
		case 7:
			return "pl_IG9_JOHN_IM_JUST_FARMER";
		
		case 8:
			return "pl_IG9_JOHN_I_KILLED_JOHN_MAR";
		
		case 9:
			return "pl_IG9_POSSE_WAS_MY_BRO";
		
		case 10:
			return "pl_IG9_JOHN_ROB_ME";
		
		case 11:
			return "pl_IG9_JOHN_I_SEE_THE_RESEMBLENCE";
		
		case 12:
			return "pl_IG9_POSSE_KILL_HIM_FARMER";
		
		case 13:
			return "pl_IG9_POSSE_KILL_HIM_KILLED_MARSTON";
		
		case 14:
			return "pl_IG9_POSSE_KILL_HIM";
		
		default:
			break;
	}
	return func_875();
}

void func_429(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_869(iParam3, func_33(uParam0)) && !func_869(iParam3, func_35(uParam0)))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iParam1))
	{
		return;
	}
	if (ANIMSCENE::_0xD8254CB2C586412B(iParam1, 0))
	{
		return;
	}
	iVar0 = func_876(&(uParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1126[iVar0 /*67*/])->f_4[iVar1 /*3*/])) && MISC::ARE_STRINGS_EQUAL(&((uParam0->f_1126[iVar0 /*67*/])->f_4[iVar1 /*3*/]), sParam2))
		{
			return;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1126[iVar0 /*67*/])->f_4[iVar1 /*3*/])))
		{
			(uParam0->f_1126[iVar0 /*67*/])->f_4[iVar1 /*3*/] = sParam2;
			((uParam0->f_1126[iVar0 /*67*/])->f_4[iVar1 /*3*/])->f_2 = (((uParam0->f_1126[iVar0 /*67*/])->f_4[iVar1 /*3*/])->f_2 || iParam3);
			return;
		}
		iVar1++;
	}
}

void func_430(int iParam0, int iParam1)
{
	func_877(iParam0, iParam1);
}

void func_431(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_878((*uParam0)[iVar0 /*3*/]))
		{
			if (func_869(((*uParam0)[iVar0 /*3*/])->f_2, iParam12))
			{
				func_879((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_880((*uParam1)[iVar0 /*5*/]))
		{
			if (func_869(((*uParam1)[iVar0 /*5*/])->f_4, iParam12))
			{
				func_881((*uParam1)[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_882((*uParam2)[iVar0 /*3*/]))
		{
			if (func_869(((*uParam2)[iVar0 /*3*/])->f_2, iParam12))
			{
				func_883((*uParam2)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_884((*uParam3)[iVar0 /*3*/]))
		{
			if (func_869(((*uParam3)[iVar0 /*3*/])->f_2, iParam12))
			{
				func_885((*uParam3)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (func_869(uParam4->f_1, iParam12))
	{
		func_886(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_887((*uParam5)[iVar0 /*67*/]))
		{
			if (func_869(((*uParam5)[iVar0 /*67*/])->f_3, iParam12))
			{
				func_888((*uParam5)[iVar0 /*67*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_887((*uParam5)[iVar0 /*67*/]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_889(((*uParam5)[iVar0 /*67*/])->f_4[iVar1 /*3*/]))
				{
					if (func_869((((*uParam5)[iVar0 /*67*/])->f_4[iVar1 /*3*/])->f_2, iParam12))
					{
						func_890(((*uParam5)[iVar0 /*67*/])->f_4[iVar1 /*3*/], ((*uParam5)[iVar0 /*67*/])->f_1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_891((*uParam6)[iVar0 /*4*/]))
		{
			if (func_869(((*uParam6)[iVar0 /*4*/])->f_3, iParam12))
			{
				func_892((*uParam6)[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_893((*uParam7)[iVar0 /*5*/]))
		{
			if (func_869(((*uParam7)[iVar0 /*5*/])->f_4, iParam12))
			{
				func_894((*uParam7)[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_895((*uParam8)[iVar0 /*3*/]))
		{
			if (func_869(((*uParam8)[iVar0 /*3*/])->f_2, iParam12))
			{
				func_896((*uParam8)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_897((*uParam9)[iVar0 /*3*/]))
		{
			if (func_869(((*uParam9)[iVar0 /*3*/])->f_2, iParam12))
			{
				func_898((*uParam9)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_899((*uParam10)[iVar0 /*4*/]))
		{
			if (func_869(((*uParam10)[iVar0 /*4*/])->f_3, iParam12))
			{
				func_900((*uParam10)[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_901((*uParam11)[iVar0 /*3*/]))
		{
			if (func_869(((*uParam11)[iVar0 /*3*/])->f_2, iParam12))
			{
				func_902((*uParam11)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

void func_432(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_903(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

struct<2> func_433()
{
	struct<2> Var0;
	
	Var0 = ITEMSET::CREATE_ITEMSET(true);
	return Var0;
}

void func_434(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_435(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

int func_436(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	
	iVar0 = 1;
	if (iParam2 && func_23(&(uParam0->f_8269)))
	{
		if (!func_121(uParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_904(uParam0->f_607)}, 3);
			if (func_905(&(uParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(uParam0->f_8269)))
				{
					func_906(&(uParam0->f_8269));
				}
				func_140(uParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_907(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_437(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_887((*uParam0)[iVar0 /*67*/]))
		{
			if (func_869(((*uParam0)[iVar0 /*67*/])->f_3, iParam1))
			{
				if (((*uParam0)[iVar0 /*67*/])->f_65 > 0f || func_908(((*uParam0)[iVar0 /*67*/])->f_2, 4))
				{
					if (!func_909((*uParam0)[iVar0 /*67*/]))
					{
						iVar1 = 0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_438(var uParam0)
{
	return uParam0->f_596;
}

int func_439(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_120(uParam0, 2))
	{
		return 1;
	}
	if (func_20() == 0)
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5408))
	{
		return 1;
	}
	iVar0 = func_910(func_61(uParam0));
	if (!func_29())
	{
		vVar2 = { func_126(uParam0->f_607) };
	}
	if (func_911(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, bParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return 1;
	}
	return 0;
}

int func_440(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	int iVar29;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5411))
	{
		if (!func_120(uParam0, 16777216))
		{
			if (!func_912(uParam0))
			{
				func_103(uParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = fParam2;
				Var0.f_6.f_1 = fParam3;
				Var0.f_6.f_2 = fParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = func_913(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(uParam0, 16777216);
					if (iVar11 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							func_103(uParam0, 16777216);
						}
						else if (func_914(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (func_915(iVar12))
							{
								PHYSICS::_0x0348469DAA17576C(iVar12);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar12, 0, 1);
							ENTITY::_0x203BEFFDBE12E96A(iVar12, uParam0->f_5417, uParam0->f_5420, 1, false, 1);
						}
					}
				}
			}
			return 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
		{
			return 1;
		}
	}
	if (func_120(uParam0, 1))
	{
		return 1;
	}
	vVar14 = { func_126(uParam0->f_607) };
	if (func_20() == 0)
	{
		STREAMING::REQUEST_MODEL(func_125(uParam0), false);
		if (!STREAMING::HAS_MODEL_LOADED(func_125(uParam0)))
		{
			return 0;
		}
		if (func_916(&iVar17, func_125(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar17, true);
			iVar13 = NETWORK::NET_TO_PED(iVar17);
		}
	}
	else
	{
		if (((((uParam0->f_607 == 38 || uParam0->f_607 == 39) || uParam0->f_607 == 43) || uParam0->f_607 == 40) || uParam0->f_607 == 41) || uParam0->f_607 == 42)
		{
			func_103(uParam0, 1);
			return 0;
		}
		Var18.f_10 = 7;
		Var18 = iParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = fParam2;
		Var18.f_6.f_1 = fParam3;
		Var18.f_6.f_2 = fParam4;
		Var18.f_9 = fParam5;
		if (func_120(uParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_120(uParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = func_913(&iVar29, &Var18);
		if (iVar29 == 0)
		{
			return 0;
		}
		else if (iVar29 == 1)
		{
			return 0;
		}
		else if (iVar29 == 2)
		{
			if (!func_120(uParam0, 16))
			{
				func_103(uParam0, 16);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar13))
	{
		uParam0->f_5411 = iVar13;
		uParam0->f_5412 = iVar13;
		func_917(uParam0, iParam1);
		if (!func_120(uParam0, 256))
		{
			if (!func_120(uParam0, 32768))
			{
				vVar14.x = fParam2;
				vVar14.f_1 = fParam3;
				vVar14.f_2 = fParam4;
				if ((!func_915(iVar13) || func_918(Global_35, iVar13, 1, 1) > 200f) && !func_406(vVar14))
				{
					if (!func_29())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_919(iVar13, vVar14, fParam5, 2, 1073741824);
					}
				}
			}
		}
		else
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_10782);
		}
		return 0;
	}
	return 0;
}

void func_441(var uParam0)
{
	int iVar0;
	var uVar1;
	
	if (!func_120(uParam0, 32) && func_128(uParam0, 3))
	{
		if (func_920(uParam0->f_607, &iVar0, &uVar1))
		{
			CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
			func_103(uParam0, 32);
		}
	}
	if (!func_120(uParam0, 32))
	{
		if (func_921(&(uParam0->f_609), uParam0->f_607))
		{
			func_103(uParam0, 32);
		}
	}
}

void func_442(var uParam0)
{
	struct<4> Var0;
	
	if (!func_120(uParam0, 128))
	{
		if (func_120(uParam0, 16384))
		{
			func_922(uParam0);
			if (func_923(uParam0))
			{
				func_51(&(uParam0->f_10792));
				func_924(uParam0, 2097152);
				func_271(uParam0, 16384);
				func_103(uParam0, 128);
			}
			return;
		}
		if (func_128(uParam0, 1))
		{
			return;
		}
		if (func_120(uParam0, 64))
		{
			func_922(uParam0);
			MemCopy(&Var0, {func_155(func_61(uParam0))}, 4);
			if (func_925(uParam0, Var0))
			{
				if (func_438(uParam0) != 4)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_103(uParam0, 128);
			}
		}
		else
		{
			if (func_438(uParam0) != 4)
			{
				CAM::DO_SCREEN_FADE_OUT(1);
			}
			func_103(uParam0, 128);
		}
	}
}

void func_443(var uParam0, int iParam1)
{
	uParam0->f_596 = iParam1;
}

int func_444(var uParam0)
{
	int iVar0;
	char[] cVar1[8];
	
	iVar0 = 1;
	if (!func_926(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_439(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_440(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (!func_23(&(uParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_904(uParam0->f_607)}, 3);
		if (func_927(&(uParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_128(uParam0, 1))
	{
		if (!func_26(&(uParam0->f_13115)))
		{
			func_27(&(uParam0->f_13115), 0);
		}
		if (func_928(&(uParam0->f_13115)) < 30f)
		{
			if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
			{
				iVar0 = 0;
			}
			if (Global_1935630->f_2 != Global_40.f_39 || (!Global_1935630->f_12 && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Global_40.f_39))
			{
				iVar0 = 0;
			}
			if (Global_40.f_7729 != &Global_1905941)
			{
				iVar0 = 0;
			}
			if (!Global_1935630->f_12 && !PED::_0xA0BC8FAED8CFEB3C(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_445(var uParam0)
{
	bool bVar0;
	
	bVar0 = (PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_TELEPORT_ACTIVE());
	if (func_928(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			PLAYER::STOP_PLAYER_TELEPORT();
		}
		if ((func_82(32768) && func_929()) && func_928(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return 0;
		}
		if (func_120(uParam0, 8) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(func_126(uParam0->f_607))))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(func_126(uParam0->f_607)));
			func_271(uParam0, 8);
		}
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		func_930(0, 0);
		func_271(uParam0, 4096);
		return 1;
	}
	return 0;
}

int func_446(var uParam0)
{
	int iVar0;
	
	iVar0 = func_33(uParam0);
	if (func_128(uParam0, 2) || func_82(32768))
	{
		if (!func_931())
		{
			return 0;
		}
	}
	if (!func_932(uParam0))
	{
		return 0;
	}
	if (!func_933(uParam0))
	{
		return 0;
	}
	if (!func_934(uParam0))
	{
		return 0;
	}
	if (func_33(uParam0) == iLocal_24 && !bLocal_188)
	{
		if (!func_935(&uLocal_368, "MAR2_MCS4", 1, 1))
		{
			return 0;
		}
		else
		{
			bLocal_188 = true;
		}
	}
	func_936();
	func_937();
	func_938(uParam0);
	func_939(uParam0);
	func_940(uParam0);
	func_941(&iLocal_261, 0);
	func_942(&iLocal_280, 0);
	func_943(&uLocal_262, 0);
	func_944(&uLocal_278, 0);
	func_944(&uLocal_276, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&iLocal_172);
	func_947(&uLocal_190);
	func_948(883);
	func_948(884);
	func_948(943);
	func_948(485);
	func_948(477);
	func_948(943);
	func_949(883, 32);
	func_949(884, 32);
	func_949(943, 32);
	func_949(485, 32);
	func_949(477, 32);
	func_949(943, 32);
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[0])))
	{
		POPULATION::_0x18262CAFEBB5FBE1(&(iLocal_93[0]), 4096, 0, 0, -1, -1, 0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[0])))
	{
		POPULATION::_0xB56D41A694E42E86(&(iLocal_93[0]), 4096, 0, 0, -1, -1, 0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[50])))
	{
		POPULATION::_0x18262CAFEBB5FBE1(&(iLocal_93[50]), 1024, 0, 0, -1, -1, 0);
	}
	if (iVar0 >= iLocal_18 && iVar0 <= iLocal_24)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (iVar0 >= iLocal_22 && iVar0 <= iLocal_24)
	{
		PED::_0xAB0D553FE20A6E25(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		POPULATION::_0xF45E46DEECF7DF6E(10240, 0, 0, -1, -1);
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[4])))
		{
			func_950(&(iLocal_93[4]), 0);
		}
	}
	if (iVar0 >= iLocal_16 && iVar0 <= iLocal_24)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[5])))
		{
			PATHFIND::_0xC1799FAFD2FDF52B(&(iLocal_93[5]), 0, 0, 0);
		}
	}
	else if (iVar0 >= iLocal_25 && iVar0 <= iLocal_27)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[5])))
		{
			PATHFIND::_0xC1799FAFD2FDF52B(&(iLocal_93[5]), 0, 0, 1);
			PATHFIND::_0xC1799FAFD2FDF52B(&(iLocal_93[68]), 0, 0, 0);
		}
	}
	if (iVar0 >= iLocal_18 && iVar0 <= iLocal_20)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[19])))
		{
			func_460(&(iLocal_93[19]), 0, 0, 0);
		}
	}
	if (!iLocal_187)
	{
		iLocal_187 = 1;
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[5])))
		{
			func_951(&(iLocal_93[5]), 0, 0, 0, 0, 0);
		}
	}
	func_174(0);
	func_952(uParam0);
	if (iVar0 != iLocal_16)
	{
		func_953(uParam0);
	}
	func_954(uParam0);
	func_956(uParam0, 136542/*func_955*/);
	func_958(uParam0, 136642/*func_957*/);
	func_960(uParam0, 136793/*func_959*/);
	func_186(64, 0);
	func_187(64, 1);
	func_188(64, 22, 1, 1);
	ENTITY::CREATE_MODEL_HIDE(-1773.528f, -393.6541f, 155.5415f, 0.5f, 1152089151, true);
	func_961(uParam0);
	if (iVar0 != iLocal_16)
	{
		func_169(0);
	}
	if (func_832(func_220(7), 0))
	{
		ENTITY::_0x203BEFFDBE12E96A(func_220(7), -2590.037f, 465.5254f, 145.1149f, 79.8012f, 1, false, 1);
		TASK::TASK_STAND_STILL(func_220(7), -1);
	}
	if (func_832(func_220(1), 0))
	{
		ENTITY::_0x203BEFFDBE12E96A(func_220(1), -2589.972f, 467.1571f, 145.0408f, 83.5558f, 1, false, 1);
		TASK::TASK_STAND_STILL(func_220(1), -1);
	}
	func_962(func_220(7));
	func_962(func_220(1));
	iLocal_338 = 0;
	func_963(26, 0, 350);
	return 1;
}

void func_447(var uParam0, int iParam1)
{
	func_66(iParam1);
	uParam0->f_10783 = iParam1;
}

int func_448(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_964(uParam0);
	func_965(uParam0);
	iVar0 = func_33(uParam0);
	iVar1 = func_35(uParam0);
	iVar2 = func_162(uParam0, iVar0);
	if (func_8(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_923(uParam0);
		}
	}
	func_966(uParam0);
	func_967(uParam0);
	func_968(uParam0);
	func_969(uParam0);
	func_970(uParam0);
	func_971(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_972(uParam0);
	}
	if ((func_33(uParam0) == 0 && iVar2 < 3) && func_285(uParam0) == 0)
	{
		func_442(uParam0);
	}
	if (func_121(uParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_74(uParam0);
	switch (iVar2)
	{
		case 0:
			if (func_973(uParam0, iVar0, 0))
			{
				if (func_974(uParam0, func_33(uParam0)) != -1 && PED::_0x62DE46F061CAA468() < func_974(uParam0, func_33(uParam0)))
				{
					PED::_0xF008E0BA1FE1D644((func_974(uParam0, func_33(uParam0)) - PED::_0x62DE46F061CAA468()));
				}
				if ((func_33(uParam0) == 25 || func_33(uParam0) == 26) && func_82(32768))
				{
					func_386(uParam0, 524288);
				}
				if (func_120(uParam0, 4))
				{
					if (!func_8(uParam0, 4))
					{
						func_975(uParam0, iVar0);
						func_99(uParam0, 4);
					}
					func_976(uParam0);
					func_977(uParam0, iVar0, 1);
				}
				else
				{
					func_977(uParam0, iVar0, 1);
				}
			}
			break;
		
		case 1:
			if (func_926(uParam0))
			{
				if (func_978(uParam0))
				{
					if (func_8(uParam0, 4))
					{
						func_924(uParam0, 4);
					}
					func_977(uParam0, iVar0, 2);
				}
			}
			else if (func_979(uParam0) >= uParam0->f_13144)
			{
				if (func_8(uParam0, 4))
				{
					func_924(uParam0, 4);
				}
				func_977(uParam0, iVar0, 2);
			}
			break;
		
		case 2:
			if (func_973(uParam0, iVar0, 2))
			{
				if (!func_980(uParam0))
				{
					func_977(uParam0, iVar0, 4);
					if (func_981(uParam0, iVar0, iVar1))
					{
						func_977(uParam0, iVar0, 5);
					}
				}
				else
				{
					func_982(uParam0);
					func_977(uParam0, iVar0, 3);
					if (func_983(uParam0, iVar0))
					{
						func_977(uParam0, iVar0, 4);
						if (func_981(uParam0, iVar0, iVar1))
						{
							func_977(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_984(uParam0))
			{
				func_983(uParam0, iVar0);
			}
			break;
		
		case 3:
			if (func_983(uParam0, iVar0))
			{
				func_977(uParam0, iVar0, 4);
				if (func_981(uParam0, iVar0, iVar1))
				{
					func_977(uParam0, iVar0, 5);
				}
			}
			break;
		
		case 4:
			if (func_981(uParam0, iVar0, iVar1))
			{
				func_977(uParam0, iVar0, 5);
			}
			break;
		
		case 5:
			if (!func_20() == 0)
			{
				func_985(uParam0);
				func_986(uParam0, iVar0);
				func_987(uParam0);
				func_988(uParam0);
				if (func_121(uParam0, iVar1, 2))
				{
					if (func_989(uParam0, iVar1))
					{
						func_990(uParam0, iVar1);
					}
				}
			}
			if (func_973(uParam0, iVar0, 5))
			{
				if (func_973(uParam0, iVar0, 7))
				{
					if (!func_121(uParam0, func_33(uParam0), 67108864))
					{
						func_991(uParam0, func_33(uParam0));
					}
					func_992(uParam0, iVar1);
					func_965(uParam0);
					return 1;
				}
				else
				{
					func_977(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(uParam0, func_33(uParam0), 4194304))
				{
					if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !func_121(uParam0, func_33(uParam0), 16))
					{
						CAM::DO_SCREEN_FADE_IN(0);
						func_993(0);
					}
					func_140(uParam0, func_33(uParam0), 4194304);
				}
				if ((func_994(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !func_120(uParam0, 8192)) && !func_121(uParam0, func_33(uParam0), 8))
				{
					func_47(1, 0);
					func_995("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_996(uParam0))
					{
						func_977(uParam0, iVar0, 6);
					}
				}
				if (func_8(uParam0, 268435456))
				{
					if (MISC::_0x1B065A2BF7953815(1) != 1)
					{
						func_36(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_924(uParam0, 268435456);
					}
				}
				if (func_120(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_271(uParam0, 1048576);
					}
				}
			}
			break;
		
		case 6:
			if (!func_20() == 0)
			{
				func_985(uParam0);
				func_986(uParam0, iVar0);
				func_987(uParam0);
				func_988(uParam0);
				if (func_121(uParam0, func_35(uParam0), 2))
				{
					if (func_989(uParam0, func_35(uParam0)))
					{
						func_990(uParam0, func_35(uParam0));
					}
				}
			}
			if ((!func_994(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || func_120(uParam0, 8192)) || func_121(uParam0, func_33(uParam0), 8))
			{
				if (func_973(uParam0, iVar0, 5))
				{
					if (func_997(uParam0))
					{
						func_977(uParam0, iVar0, 7);
					}
				}
				else
				{
					func_997(uParam0);
					func_977(uParam0, iVar0, 5);
				}
			}
			else
			{
				func_973(uParam0, iVar0, 5);
				func_998(uParam0);
			}
			break;
		
		case 7:
			if (func_973(uParam0, iVar0, 7))
			{
				if (!func_121(uParam0, func_33(uParam0), 67108864))
				{
					func_991(uParam0, func_33(uParam0));
				}
				func_992(uParam0, iVar1);
				func_965(uParam0);
				return 1;
			}
			break;
		
		default:
			func_977(uParam0, iVar0, 7);
			break;
	}
	return 0;
}

bool func_449(int iParam0)
{
	return AUDIO::_0xFE5C6177064BD390(iParam0);
}

float func_450(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_451(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	
	if (func_20() != -1)
	{
		return;
	}
	if (!func_613(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_999(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_1000(iParam0), iVar0);
	func_1002(func_1001(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_1003(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_331(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_331(func_1004(iParam0), 1);
	}
	sVar1 = func_1005(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

void func_452(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		return;
	}
	if (Global_43890)
	{
		return;
	}
	WEAPON::_0xE9BD19F8121ADE3E(Global_35, iParam0);
}

void func_453(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_273(iParam0, 64);
	func_274();
}

void func_454()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_538(iVar0);
		func_539(iVar0);
		iVar0++;
	}
}

void func_455(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1006(iParam0, 64);
	func_274();
}

bool func_456(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_457(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_458(int iParam0)
{
	return iParam0 != 0;
}

int func_459(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_460(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	func_950(iParam0, bParam1);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam2, iParam3, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam2, iParam3, 0, -1, -1, 2);
}

void func_461(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	bVar0 = (ENTITY::IS_ENTITY_A_PED(iParam1) && func_1007(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)));
	if (bVar0)
	{
		iVar1 = func_1008(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
		if (bVar0)
		{
			func_533(iVar1);
			if (MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(iVar2)))
			{
				MAP::_0xB059D7BD3D78C16F(MAP::GET_BLIP_FROM_ENTITY(iVar2), -546708623);
				MAP::_0xB059D7BD3D78C16F(MAP::GET_BLIP_FROM_ENTITY(iVar2), 231194138);
			}
		}
		else if (func_1009(uParam0, iParam1) && MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(iParam1)))
		{
			MAP::_0xB059D7BD3D78C16F(MAP::GET_BLIP_FROM_ENTITY(iParam1), -546708623);
			MAP::_0xB059D7BD3D78C16F(MAP::GET_BLIP_FROM_ENTITY(iParam1), 231194138);
		}
		else
		{
			func_1010(iParam1);
		}
	}
	if (func_1009(uParam0, iParam1))
	{
		func_1011(uParam0, iParam1, 1024);
		if (bParam2)
		{
			func_1012(uParam0, iParam1, 128);
		}
		else
		{
			func_1011(uParam0, iParam1, 128);
		}
		if (func_1013(uParam0, iParam1, &iVar3))
		{
			func_1014(uParam0->f_5423[iVar3 /*65*/]);
		}
	}
	if (bVar0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		func_1015(iVar1);
	}
}

void func_462(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_463(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_462((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_464(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_465(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		((*uParam0)[iVar0 /*3*/])->f_1 = 0f;
		((*uParam0)[iVar0 /*3*/])->f_2 = 0f;
		(*uParam0)[iVar0 /*3*/] = 0;
		iVar0++;
	}
}

bool func_466(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar1)));
	return (uLocal_345[iVar0] && iVar2) == iVar2;
}

void func_467(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar1)));
	bVar3 = (uLocal_345[iVar0] && iVar2) == iVar2;
	if (!bVar3 && bParam1)
	{
		uLocal_345[iVar0] = (uLocal_345[iVar0] || iVar2);
	}
	else if (bVar3 && !bParam1)
	{
		iVar4 = (-1 - iVar2);
		uLocal_345[iVar0] = (uLocal_345[iVar0] && iVar4);
	}
}

void func_468(int iParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(&(uLocal_202[iParam0])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(uLocal_202[iParam0]));
	}
}

void func_469()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		func_1016(iVar0);
		iVar0++;
	}
}

void func_470(int* iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (bParam1)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
	else
	{
		func_1017(iParam0);
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

void func_471(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_60[iVar0])))
		{
			if (bParam0)
			{
				if (iVar0 == 0)
				{
					if (func_1018(710, 0))
					{
						func_1019(710, 0, 1, 0, 0);
					}
				}
			}
			else if (func_1018(710, 0))
			{
				func_1019(710, 1, 1, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_472(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true))
			{
			}
			PED::DELETE_PED(iParam0);
		}
	}
}

void func_473(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_472((*iParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_474()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_472(iLocal_62[iVar0], 0);
		iVar0++;
	}
}

void func_475(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_10(iParam0))
	{
		return;
	}
	iVar0 = func_192(iParam0);
	if (bParam1)
	{
		func_1020(iParam0, 4);
		func_1021(iVar0, 1);
		func_1022(iVar0, 1);
	}
	else
	{
		func_1023(iParam0, 4);
		func_1022(iVar0, 0);
	}
}

void func_476(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_10(iParam0))
	{
		return;
	}
	iVar0 = func_192(iParam0);
	func_1021(iVar0, iParam1);
}

bool func_477(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_478(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_479(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_480(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		
		case 22:
			return 17;
		
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		
		case 17:
		case 47:
			return 7;
		
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		
		case 9:
		case 37:
		case 69:
			return 8;
		
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		
		case 136:
			return 5;
		
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		
		case 48:
			return 12;
		
		case 49:
			return 13;
		
		case 50:
			return 14;
		
		case 62:
		case 79:
			return 20;
		
		case 101:
			return 11;
		
		case 149:
			return 23;
		
		case 150:
			return 24;
		
		case 151:
			return 25;
		
		case 12:
		case 54:
			return 21;
		
		case 127:
			return 34;
		
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		
		case 152:
			return 24;
		
		default:
			break;
	}
	return -1;
}

void func_481(int iParam0, bool bParam1)
{
	if (!func_1024(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1025(iParam0, 512)) || (!bParam1 && !func_1025(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_1026(iParam0, 512);
	}
	else
	{
		func_1027(iParam0, 512);
	}
	if (func_1028(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

bool func_482(int iParam0)
{
	return func_1029(iParam0, 67108864);
}

int func_483(int iParam0)
{
	int iVar0;
	
	if (!func_477(iParam0))
	{
		return 0;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return 0;
	}
	iVar0 = func_480(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return 1;
	}
	return 0;
}

bool func_484(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return false;
	}
	return (Global_20709.f_2246[iParam0] && iParam1) != 0;
}

void func_485(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (Global_20709.f_2246[iParam0] || iParam1);
	}
}

void func_486(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (&Global_20709.f_2246[iParam0] - (Global_20709.f_2246[iParam0] && iParam1));
	}
}

void func_487(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1914319->f_15922 = iParam0;
	}
}

void func_488(bool bParam0, float fParam1)
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1030();
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 6)
	{
		return;
	}
	if (iVar0 == Global_1934765->f_338)
	{
		return;
	}
	if (func_1031(&(Global_1934765->f_318[iVar0 /*3*/]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

bool func_489(int iParam0)
{
	return func_1032(iParam0, 2);
}

int func_490(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_491(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_492(int iParam0)
{
	return iParam0 & 31;
}

int func_493()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		
		case 59:
			return 6;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		
		case 115:
		case 116:
			return 3;
		
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_496(int iParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_497()
{
	float fVar0;
	
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_498(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 112;
		
		case 2:
			return 113;
		
		case 3:
			return 2;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 8:
			return 7;
		
		case 9:
			return 8;
		
		case 10:
			return 9;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 15:
			return 12;
		
		case 16:
			return 13;
		
		case 17:
			return 15;
		
		case 19:
			return 17;
		
		case 20:
			return 18;
		
		case 21:
			return 19;
		
		case 22:
			return 20;
		
		case 23:
			return 21;
		
		case 25:
			return 23;
		
		case 26:
			return 25;
		
		case 27:
			return 26;
		
		case 28:
			return 62;
		
		case 29:
			return 27;
		
		case 49:
			return 28;
		
		case 30:
			return 29;
		
		case 31:
			return 30;
		
		case 32:
			return 31;
		
		case 120:
			return 32;
		
		case 124:
			return 33;
		
		case 125:
			return 34;
		
		case 33:
			return 35;
		
		case 83:
			return 40;
		
		case 35:
			return 42;
		
		case 36:
			return 43;
		
		case 89:
			return 44;
		
		case 115:
			return 46;
		
		case 37:
			return 47;
		
		case 38:
			return 48;
		
		case 39:
			return 49;
		
		case 40:
			return 50;
		
		case 50:
			return 51;
		
		case 42:
			return 52;
		
		case 52:
			return 53;
		
		case 43:
			return 54;
		
		case 45:
			return 57;
		
		case 48:
			return 61;
		
		case 56:
			return 63;
		
		case 57:
			return 64;
		
		case 58:
			return 65;
		
		case 59:
			return 66;
		
		case 60:
			return 67;
		
		case 61:
			return 68;
		
		case 126:
			return 69;
		
		case 127:
			return 70;
		
		case 62:
			return 71;
		
		case 77:
			return 72;
		
		case 64:
			return 73;
		
		case 65:
			return 74;
		
		case 67:
			return 76;
		
		case 68:
			return 78;
		
		case 69:
			return 79;
		
		case 70:
			return 80;
		
		case 71:
			return 81;
		
		case 72:
			return 82;
		
		case 75:
			return 84;
		
		case 76:
			return 85;
		
		case 117:
			return 86;
		
		case 78:
			return 87;
		
		case 79:
			return 88;
		
		case 80:
			return 90;
		
		case 81:
			return 91;
		
		case 82:
			return 92;
		
		case 87:
			return 96;
		
		case 88:
			return 97;
		
		case 91:
			return 98;
		
		case 92:
			return 99;
		
		case 93:
			return 100;
		
		case 94:
			return 101;
		
		case 95:
			return 102;
		
		case 96:
			return 103;
		
		case 97:
			return 104;
		
		case 98:
			return 105;
		
		case 99:
			return 106;
		
		case 100:
			return 107;
		
		case 104:
			return 114;
		
		case 105:
			return 115;
		
		case 107:
			return 118;
		
		case 109:
			return 119;
		
		case 110:
			return 120;
		
		case 111:
			return 121;
		
		case 112:
			return 122;
		
		case 128:
			return 123;
		
		default:
			break;
	}
	return 0;
}

void func_499(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_500(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1033(iParam0);
	}
	else
	{
		func_1034(iParam0, iParam1);
	}
	func_1035();
}

bool func_501(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_1036(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_502(int iParam0)
{
	if (!func_195(iParam0))
	{
		return 0;
	}
	switch (func_200(iParam0))
	{
		case 1:
			switch (func_278(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		
		case 8:
			switch (func_278(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_503(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_1037(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_615(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1039(func_1038(iParam0), 6);
}

void func_504(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_1037(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_615(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1040(func_1038(iParam0), 6);
}

int func_505(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_506(int iParam0)
{
	struct<5> Var0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_1041(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_507(int iParam0)
{
	return iParam0 != 0;
}

int func_508(int iParam0)
{
	if (iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_509(int iParam0, var uParam1)
{
	if (!func_508(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1042(iParam0, *uParam1, 0);
	func_1043(uParam1);
	Global_1935183->f_24 = 1;
}

void func_510(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_511(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_564() - fParam1);
	func_1044(uParam0, 1);
	func_1045(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_512(var uParam0)
{
	return func_224(*uParam0, 2);
}

int func_513()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_514(int iParam0)
{
	if (func_1046())
	{
		Global_1357509 = 1;
	}
	if (func_1047(-92416669))
	{
	}
	if (iParam0 && Global_1935630->f_44 == -1016714371)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1935630->f_44 = joaat("weapon_unarmed");
	}
}

struct<4> func_515(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0 = { func_1048(iParam0, iParam1) };
	Var0.f_3 = func_1049(iParam0, iParam1);
	return Var0;
}

int func_516(int iParam0)
{
	if (func_200(iParam0) == 1)
	{
		return func_278(iParam0);
	}
	return -1;
}

int func_517(int iParam0)
{
	if (func_200(iParam0) == 8)
	{
		return func_278(iParam0);
	}
	return -1;
}

var func_518(int iParam0)
{
	var uVar0;
	
	if (!func_279(iParam0))
	{
		return uVar0;
	}
	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return uVar0;
}

void func_519(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_82(32768))
	{
		return;
	}
	if (!func_82(32768))
	{
		func_1050(1, bParam1);
	}
	MISC::_0x279B0696DA4657EB(iParam0);
	MISC::_COPY_MEMORY((*Global_2621440)[iParam0 /*12065*/], &Global_40, 12065);
	MISC::_COPY_MEMORY((*Global_2645571)[iParam0 /*5398*/], &Global_12105, 5398);
	MISC::_COPY_MEMORY((*Global_2656368)[iParam0 /*3206*/], &Global_17503, 3206);
	MISC::_COPY_MEMORY((*Global_2662781)[iParam0 /*2408*/], &Global_20709, 2408);
	MISC::_COPY_MEMORY((*Global_2667598)[iParam0 /*1769*/], &Global_23117, 1769);
	MISC::_COPY_MEMORY((*Global_2671137)[iParam0 /*1909*/], &Global_24886, 1909);
	MISC::_COPY_MEMORY((*Global_2674956)[iParam0 /*777*/], &Global_26795, 777);
	MISC::_COPY_MEMORY((*Global_2676511)[iParam0 /*4501*/], &Global_27572, 4501);
	MISC::_COPY_MEMORY((*Global_2685514)[iParam0 /*4234*/], &Global_32073, 4234);
	if (func_82(32768))
	{
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_291();
	}
}

void func_520(int iParam0, vector3 vParam1, var uParam4)
{
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_7 = { vParam1 };
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_13 = uParam4;
	((*Global_2621440)[iParam0 /*12065*/])->f_9 = 5;
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_15 = func_378(vParam1, 1);
}

int func_521(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

bool func_522(int iParam0)
{
	return Global_43883 == iParam0;
}

void func_523(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_524(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_525(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_526(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_527()
{
	return Global_1109400->f_244;
}

bool func_528(var uParam0, int iParam1)
{
	return func_401(uParam0->f_64, iParam1);
}

int func_529(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_530(int iParam0)
{
	return func_724(iParam0, 16, 1);
}

void func_531(var uParam0, int iParam1)
{
	int iVar0;
	struct<24> Var1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!func_1013(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1) && func_1051(uParam0, ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		EVENT::_0x4465C3D1475BD3FD(ENTITY::GET_ENTITY_MODEL(iParam1));
	}
	if (MAP::DOES_BLIP_EXIST((uParam0->f_5423[iVar0 /*65*/])->f_8))
	{
		MAP::REMOVE_BLIP(&((uParam0->f_5423[iVar0 /*65*/])->f_8));
	}
	Var1.f_5 = 3;
	Var1.f_10 = -1;
	Var1.f_12 = 5;
	Var1.f_23 = 10;
	Var1.f_23.f_1 = 3;
	Var1.f_23.f_1.f_1 = 500;
	Var1.f_23.f_1.f_2 = 10000;
	Var1.f_23.f_1.f_4 = 3;
	Var1.f_23.f_1.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	MISC::_COPY_MEMORY(uParam0->f_5423[iVar0 /*65*/], uParam0->f_5423[(uParam0->f_13145 - 1) /*65*/], 65);
	MISC::_COPY_MEMORY(uParam0->f_5423[(uParam0->f_13145 - 1) /*65*/], &Var1, 65);
	uParam0->f_13145 = (uParam0->f_13145 - 1);
}

void func_532(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_GROUP(iParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		PED::SET_PED_CAN_RAGDOLL(iParam0, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
	}
}

void func_533(int iParam0)
{
	func_1052(iParam0, 8, 0);
}

void func_534(int iParam0, bool bParam1)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1054(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_1052(iParam0, 1, 0);
		}
	}
	func_1052(iParam0, 16, bParam1);
}

void func_535(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!func_529(iParam0))
	{
		return;
	}
	if (func_530(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1055(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_534(iParam0, 0);
	func_1052(iParam0, 4, 0);
	func_533(iParam0);
	func_1056(iParam0);
	func_1057(iParam0, 37, 1);
	bVar0 = func_832(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_1058(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_1059(iParam0, 64, 1))
	{
		func_1057(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1057(iParam0, 33, 1);
		func_1057(iParam0, 34, 1);
		func_1060(iParam0, 1056964608, -1, 1061158912);
		func_1061(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1055(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1055(iParam0, 35, 1);
			if (bParam8)
			{
				func_1055(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1062(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_1057(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_1055(iParam0, 33, 1);
		func_1061(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_27(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_464(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_1055(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_1063(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_1059(iParam0, 45, 1))
	{
		func_1057(iParam0, 45, 1);
	}
	func_1064(iParam0, 16, 1);
	func_1057(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_832(func_1065(iParam0), 0))
		{
			func_1066(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_536(int iParam0)
{
	int iVar0;
	
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_543(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_543(iParam0);
	}
}

int func_537(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_2;
}

void func_538(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

void func_539(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
}

int func_540(int iParam0)
{
	if (!func_1067(iParam0))
	{
		return 0;
	}
	if (!func_337())
	{
		return 1;
	}
	return 0;
}

void func_541(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_544(iParam0))
	{
		return;
	}
	iVar0 = func_220(iParam0);
	func_1068(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_540(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1069(iParam0, 0);
	func_543(iParam0);
}

int func_542(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_267(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

void func_543(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
}

int func_544(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

void func_545(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_220(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (func_1070(iParam0, 64))
	{
		func_538(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && !MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_613(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::_0x23F74C2FDA6E7C61(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_1071(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && bVar4)
	{
		func_538(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_1072(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
			{
				MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::_0x23F74C2FDA6E7C61(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_1073(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1070(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1074(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_1075(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1076(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 3)
		{
			iVar17 = -401963276;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_0xEBE89623EB861271(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1077(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_1078(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_915(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_1072(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			
			case 1:
				iVar22 = 13992470;
				break;
			
			case 2:
				iVar22 = 396341162;
				break;
			
			case 3:
				iVar22 = 623069873;
				break;
			
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			
			case 1:
				iVar22 = 489732756;
				break;
			
			case 2:
				iVar22 = 195204984;
				break;
			
			case 3:
				iVar22 = -103418913;
				break;
			
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

int func_546(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_547(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_548(int iParam0)
{
	var uVar0;
	
	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_549(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_550(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

int func_551(int iParam0)
{
	int iVar0;
	
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_544(iParam0))
	{
		return 0;
	}
	iVar0 = func_220(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_552(int iParam0)
{
	int iVar0;
	
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_544(iParam0))
	{
		return;
	}
	iVar0 = func_220(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_553(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_721(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_554(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1079())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_721(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1080(iVar0);
			func_1081(iVar0, 0, 0);
		}
		func_721(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_95(func_94(1644987397), iVar1);
	}
}

int func_555(int iParam0)
{
	if (!func_253(iParam0))
	{
		return 0;
	}
	return func_257(iParam0, 67108864);
}

void func_556(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	
	StringCopy(&cVar0, func_1082(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1083(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_557(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;
	
	StringCopy(&cVar0, func_1082(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1083(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

bool func_558(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::CLEAR_BIT((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_559(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::SET_BIT((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_560(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

bool func_561(int iParam0)
{
	if (!func_524(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

int func_562(int iParam0)
{
	if (func_524(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_563(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		
		case 1:
			fVar2 = 1f;
			break;
		
		case 2:
			fVar2 = 2f;
			break;
		
		case 3:
			fVar2 = 3f;
			break;
		
		case 4:
			fVar2 = 4f;
			break;
		
		case 5:
			fVar2 = 6f;
			break;
		
		case 6:
			fVar2 = 8f;
			break;
		
		case 7:
			fVar2 = 12f;
			break;
		
		case 8:
			fVar3 = 1f;
			break;
		
		case 9:
			fVar3 = 2f;
			break;
		
		case 10:
			fVar3 = 3f;
			break;
		
		case 11:
			fVar3 = 4f;
			break;
		
		case 12:
			fVar3 = 5f;
			break;
		
		case 13:
			fVar3 = 6f;
			break;
		
		case 14:
			fVar3 = 7f;
			break;
		
		case 15:
			fVar3 = 8f;
			break;
		
		case 16:
			fVar3 = 10f;
			break;
		
		case 17:
			fVar3 = 12f;
			break;
		
		case 18:
			fVar3 = 15f;
			break;
		
		case 19:
			fVar3 = 18f;
			break;
		
		case 20:
			fVar3 = 20f;
			break;
		
		case 21:
			fVar3 = 25f;
			break;
		
		case 22:
			fVar2 = -1f;
			break;
		
		case 23:
			fVar3 = -5f;
			break;
		
		case 24:
			fVar3 = -7f;
			break;
		
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

float func_564()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_565(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1084(iParam0) == 1 && iParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((uParam1 || bParam6) || func_20() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

int func_566(int iParam0)
{
	if (!func_1053(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_567(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return func_1085(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_568(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_581(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_569(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

void func_570(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

int func_571()
{
	return Global_40.f_11095.f_35;
}

void func_572(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 1)
	{
		func_1086(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_573(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_573(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_1086(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1087(1);
	}
}

bool func_574(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_575()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1088(((*Global_1347702)[9 /*49*/])->f_15);
	iVar1 = func_1088(((*Global_1835011)[69 /*74*/])->f_1);
	if (func_1089(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

int func_576(int iParam0)
{
	if (!func_194(iParam0))
	{
		return 0;
	}
	return func_333(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_577(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1090(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1091(iVar6);
	}
	return iVar5;
}

int func_578(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1092(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_579(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_1093(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_580(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 0;
		
		case 7:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 0;
		
		case 11:
			return 1;
		
		case 8:
			return 1;
		
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0;
		
		default:
			break;
	}
	return 0;
}

void func_581(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_579(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_582(2, *uParam0);
		}
		else
		{
			func_583(2, *uParam0);
		}
	}
	func_1094(uParam0);
}

void func_582(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_583(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

void func_584(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_1095(iParam0, iParam1, bParam2);
}

int func_585(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 2139774588:
			return 1;
		
		case 1142025875:
			return 2;
		
		case 1587891565:
			return 4;
		
		case 1877013492:
			return 32;
		
		case -643014279:
			return 64;
		
		case -597116214:
			return 128;
		
		case 551416228:
			return 256;
		
		case 1022576842:
			return 512;
		
		case 953325896:
			return 1024;
		
		case 508358508:
			return 2048;
		
		case -735200598:
			return 4096;
		
		case -856432278:
			return 8192;
		
		case -2010847721:
			return 16384;
		
		case 446961221:
			return 32768;
		
		case -1972216640:
			return 65536;
		
		case 530833824:
			return 131072;
		
		case 1682361219:
			return 262144;
		
		case 158959085:
			return 524288;
		
		case 1919819559:
			return 1048576;
		
		case 1461411082:
			return 2097152;
		
		case -549508280:
			return 4194304;
		
		default:
			break;
	}
	return 0;
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 1:
			return -2;
		
		case 2:
			return -5;
		
		case 3:
			return -10;
		
		case 4:
			return -20;
		
		case 5:
			return -40;
		
		case 6:
			return -160;
		
		case 7:
			return -320;
		
		case 8:
			return -480;
		
		case 18:
			return -640;
		
		case 9:
			return 0;
		
		case 10:
			return 1;
		
		case 11:
			return 2;
		
		case 12:
			return 5;
		
		case 13:
			return 10;
		
		case 14:
			return 20;
		
		case 15:
			return 40;
		
		case 16:
			return 160;
		
		case 17:
			return 640;
		
		default:
			break;
	}
	return 0;
}

void func_587(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	iVar0 = func_1096();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1097(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_613(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1098())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_315(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1096();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_1099(iVar1);
		func_1101(func_1100(), 0, 4000);
		func_1102(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1103(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_95(func_94(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_586(14))
				{
					iVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					iVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1104(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_721(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", iVar7, 0, 1);
				}
				else
				{
					func_721(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", iVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_586(4))
				{
					iVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					iVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1104(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_721(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", iVar7, 0, 1);
				}
				else
				{
					func_721(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", iVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_94(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_368(10, 1);
	}
}

void func_588(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_589(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

int func_590(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_591(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_592(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1105(iParam0) && func_1106(iParam0))
		{
			func_1107(iParam0, iParam1, 1, &iParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		iParam2 = 1;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_593(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	*uParam1 = iParam2;
	func_1108(iParam0, uParam1);
	Var0 = { func_702(iParam0, 0, 1) };
	iVar5 = func_1109(iParam0, &Var0, 0, 0);
	iVar6 = func_1110(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_611(iParam0, -2051813666))
		{
			func_331(583, 1);
		}
		else
		{
			func_331(582, 0);
		}
	}
	if (func_1111(iParam0, &Var0, *uParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*uParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_594(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_672(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_595(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_610(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1112(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1113(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_1037(bParam2), iParam0, 0);
	return iVar2;
}

bool func_596(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_597(iParam0) != 0;
}

int func_597(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < func_1114())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1115(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_598(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_599(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < func_1114())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_598(iVar0))
		{
			if (func_353(func_1115(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_600(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1116(48);
	func_373(0, -1);
}

int func_601(int iParam0)
{
	if (func_20() != -1)
	{
		return 0;
	}
	return func_333(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_602(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_603(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_604(int iParam0)
{
	if (func_20() != -1)
	{
		return 0;
	}
	return func_333(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_605(int iParam0)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_279(iParam0))
	{
		return 0;
	}
	return func_196(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_606()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_353(func_1117(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_607(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_405() && (func_605(38) || func_601(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		
		case 39:
			if (func_405() && (func_605(39) || func_601(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_1118(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		
		case 41:
			if (func_405() && (func_605(41) || func_601(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		
		case 49:
			if (func_405() && (func_605(49) || func_601(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_1118(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1119(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1120(iParam0, iVar13, iVar14))
	{
	}
	if (func_1121(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1122(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1123(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1124(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1125(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_608(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_609(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_405() && (func_605(38) || func_601(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_405() && (func_605(39) || func_601(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_405() && (func_605(49) || func_601(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_405() && (func_605(38) || func_601(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_1126(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1126(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_728(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_1127(func_603(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1126(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1126(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_405() && (func_605(39) || func_601(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1126(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1126(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_405() && (func_605(49) || func_601(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1126(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1126(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1126(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1126(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_610(int iParam0)
{
	vector3 vVar0;
	
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_611(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_612(int iParam0, int iParam1)
{
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_613(int iParam0)
{
	if (!func_1128(iParam0))
	{
		return 0;
	}
	return func_1129(iParam0);
}

void func_614(int iParam0)
{
	if (!func_1128(iParam0))
	{
		return;
	}
	func_1130(iParam0);
	func_1131(iParam0);
}

int func_615(int iParam0)
{
	struct<2> Var0;
	
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_616(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		
		case 1222378998:
			iVar0 = -764310200;
			break;
		
		case 2074469742:
			iVar0 = -764310200;
			break;
		
		case 480079517:
			iVar0 = -1504859554;
			break;
		
		case 840671577:
			iVar0 = -1504859554;
			break;
		
		case joaat("ammo_molotov"):
			iVar0 = 1885857703;
			break;
		
		case -2006166057:
			iVar0 = 1885857703;
			break;
		
		case 1235846615:
			iVar0 = -1511427369;
			break;
		
		case -228768324:
			iVar0 = 2133046983;
			break;
		
		case -1411922943:
			iVar0 = -1511427369;
			break;
		
		case -834103244:
			iVar0 = -1511427369;
			break;
		
		case 424030678:
			iVar0 = 165751297;
			break;
		
		case 446901936:
			iVar0 = 710736342;
			break;
		
		case -1092841802:
			iVar0 = -462374995;
			break;
		
		case -1452241321:
			iVar0 = 567069252;
			break;
		
		case -1188697038:
			iVar0 = -281894307;
			break;
		
		case 1671758975:
			iVar0 = -1127860381;
			break;
		
		case -893514737:
			iVar0 = -1894785522;
			break;
		
		case -2063089161:
			iVar0 = 469927692;
			break;
		
		case -452897925:
			iVar0 = 1960591597;
			break;
		
		default:
			break;
	}
	if (func_591(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1132(iVar0) || func_122(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_617(int iParam0, bool bParam1)
{
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_618(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_705(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_619(bool bParam0)
{
	if (func_20() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_1037(bParam0));
}

int func_620(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { func_702(bParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1133((375 + iVar28), 1);
			if (func_1134(bParam0, &Var0, iVar5, 0))
			{
				if (func_1135(bParam0, &Var6, iVar5))
				{
					Var29 = { func_1136(bParam0, Var0, iVar5, 0) };
					func_1137(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_619(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_621(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_1138(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

int func_621(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_623(iParam0))
	{
		return 0;
	}
	if (!func_619(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_622(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	
	iVar0 = func_617(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_20() == -1)
		{
			func_618(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1139(iVar0);
			}
		}
		if (!func_1111(iParam0, &uVar1, 1, 0, 0))
		{
			func_1107(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1140(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_620(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_620(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_620(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == 494733111 && !func_1098())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_1141(iVar0))
				{
					func_620(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_620(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_1142(Global_35, 2, 0, 1);
				if ((((func_705(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_353(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_705(iVar7) && func_353(-1185145312, 1, 0))
				{
					if (!func_620(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_620(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_620(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_331(480, 1);
	}
	return 1;
}

bool func_623(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_624(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_623(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_705(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == -2002235300)
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_353(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_659(func_1143(iParam0), func_658(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_333(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_331(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_619(0))
	{
		if (func_621(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_664(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_625(int iParam0)
{
	var uVar0;
	
	if ((iParam0 == -615217896 && !func_344()) || iParam0 != -615217896)
	{
		if (func_1144(Global_35, iParam0, &uVar0))
		{
			func_643(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_649();
			break;
		
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_649();
			break;
		
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_649();
			break;
		
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_647();
			break;
		
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_645();
			break;
	}
}

void func_626(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_645();
			break;
		
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_646();
			break;
		
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_647();
			break;
		
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_648();
			break;
		
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_649();
			break;
		
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1145();
			break;
		
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1146();
			break;
		
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_627(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_628(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_629(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_611(iParam0, -2017733358);
	if (func_1147() < 3)
	{
		if (bVar0)
		{
			if (func_1149(func_1148(iParam0), iParam0))
			{
				func_659(79, func_658(func_1148(iParam0)), 1);
			}
			else
			{
				func_659(78, func_658(func_1148(iParam0)), 1);
			}
		}
		else
		{
			func_659(80, func_658(func_1150(iParam0)), 1);
		}
	}
}

int func_630()
{
	if (((((func_1151(839908568, 400) || func_1151(-1134030454, 400)) || func_1151(623353496, 400)) || func_1151(-344413337, 400)) || func_1151(-1664948962, 400)) || func_1151(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_631(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_739(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_553(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_554(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_632(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_607(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_609(51, 0, 0, 0, 0, -1, 0);
			func_1152(8192);
			break;
		
		case 581047644:
			func_607(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_609(51, 0, 0, 0, 0, -1, 0);
			func_1152(524288);
			break;
		
		case -644199619:
			func_607(39, 0, 0, 0, 0, 0, 1, 0);
			func_609(39, 0, 0, 0, 0, -1, 0);
			func_1153(16);
			break;
		
		case 684296857:
			func_607(41, 0, 0, 0, 0, 0, 1, 0);
			func_609(41, 0, 0, 0, 0, -1, 0);
			func_1154(8);
			break;
		
		case 466137807:
			func_607(49, 0, 0, 0, 0, 0, 1, 0);
			func_609(49, 0, 0, 0, 0, -1, 0);
			func_1155(16);
			break;
		
		case -1087522507:
			func_607(43, 0, 0, -1791518714, func_1156(1), 0, -1, 0);
			func_1157(1);
			break;
		
		case -405829000:
			func_607(43, 0, 0, -2087881550, func_1156(2), 0, -1, 0);
			func_1157(2);
			break;
		
		case 378660860:
			func_607(43, 0, 0, 1908068621, func_1156(4), 0, -1, 0);
			func_1157(4);
			break;
		
		case 1566111097:
			func_607(43, 0, 0, 1611247019, func_1156(8), 0, -1, 0);
			func_1157(8);
			break;
		
		case 1276007140:
			func_607(43, 0, 0, 1319635688, func_1156(16), 0, -1, 0);
			func_1157(16);
			break;
	}
}

void func_633(int iParam0)
{
	if (func_1158() == 1)
	{
		if (func_601(39))
		{
			func_331(342, 0);
		}
		else
		{
			func_331(343, 0);
			func_1153(1);
		}
	}
	if (func_1158() >= 30)
	{
		func_331(344, 0);
	}
	func_607(39, 0, 0, 0, 0, 0, -1, 0);
	func_609(39, 0, 0, func_1158(), 30, 1, 0);
}

void func_634(int iParam0)
{
	if (func_1159() == 1)
	{
		if (func_601(49))
		{
			func_331(409, 0);
		}
		else
		{
			func_331(410, 0);
			func_1155(1);
		}
	}
	if (func_1159() >= 10)
	{
		func_331(411, 0);
	}
	func_607(49, 0, 0, 0, 0, 0, -1, 0);
	func_609(49, 0, 0, func_1159(), 10, 1, 0);
}

void func_635(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_331(437, 0);
			func_331(440, 0);
			func_1160(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_607(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_609(51, 0, 0, iVar0, func_1118(-949689219, 20), 1, 0);
			func_1152(1);
			func_1161(-748969569, 0, 0);
			break;
		
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_1160(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_607(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_609(51, 0, 0, iVar0, func_1118(-1248968496, 20), 1, 0);
			func_1152(8);
			break;
		
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_1160(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_607(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_609(51, 0, 0, iVar0, func_1118(1706369307, 20), 1, 0);
			func_1152(64);
			break;
		
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_1160(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_607(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_609(51, 0, 0, iVar0, func_1118(1520110311, 20), 1, 0);
			func_1152(512);
			break;
		
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_331(438, 0);
			func_1160(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_607(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_609(51, 0, 0, iVar0, func_1118(-1992824800, 20), 1, 0);
			func_1152(32768);
			break;
		
		default:
			func_331(439, 0);
			break;
	}
}

void func_636()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_637(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_601(43))
		{
			if (iParam0 == 281887510)
			{
				func_331(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_331(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_331(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_331(400, 0);
			}
		}
		else if (func_611(iParam0, 412399755))
		{
			func_1162(-1791518714);
			if (func_1163() == 0)
			{
				func_373(0, 10);
				iVar1 = func_1164(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1165(iParam0) < func_1166(iParam0))
					{
						func_607(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_609(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_601(44))
		{
			if (iParam0 == -222563712)
			{
				func_331(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_331(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_331(401, 0);
			}
		}
		else if (func_611(iParam0, 709057512))
		{
			func_1162(-2087881550);
			if (func_1163() == 1)
			{
				func_373(0, 10);
				iVar1 = func_1164(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1165(iParam0) < func_1166(iParam0))
					{
						func_607(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_609(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_601(45))
		{
			if (iParam0 == 2116770557)
			{
				func_331(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_331(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_331(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_331(398, 0);
			}
		}
		else if (func_611(iParam0, -1478961327))
		{
			func_1162(1908068621);
			if (func_1163() == 2)
			{
				func_373(0, 10);
				iVar1 = func_1164(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1167(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_1168(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_1116(48);
					}
					if (func_1165(iParam0) < func_1166(iParam0))
					{
						func_607(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_609(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1165(iParam0) < func_1166(iParam0))
					{
						func_607(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_609(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_601(46))
		{
			if (iParam0 == 2085530337)
			{
				func_331(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_331(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_331(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_331(406, 0);
			}
		}
		else if (func_611(iParam0, -1238404098))
		{
			func_1162(1611247019);
			if (func_1163() == 3)
			{
				func_373(0, 10);
				iVar1 = func_1164(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1165(iParam0) < func_1166(iParam0))
					{
						func_607(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_609(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_601(47))
		{
			if (iParam0 == -1521783510)
			{
				func_331(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_331(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_331(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_331(403, 0);
			}
		}
		else if (func_611(iParam0, 1160548794))
		{
			func_1162(1319635688);
			if (func_1163() == 4)
			{
				func_373(0, 10);
				iVar1 = func_1164(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1165(iParam0) < func_1166(iParam0))
					{
						func_607(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_609(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_638(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 2116770557)
	{
		if (!func_1167(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_1168(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_1116(48);
		}
	}
}

void func_639(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_353(func_1169(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1170(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1171(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_640(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_20() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_631(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_631(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1394529493:
			func_631(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1262623627:
			func_631(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1124867377:
			func_631(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1790920086:
			func_631(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -2001202686:
			func_631(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1111063991:
			func_631(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1576210101:
			func_631(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 675090918:
			func_631(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 355838765:
			func_631(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -343824903:
			func_631(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1142684684:
			func_631(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1243851340:
			if (!func_1172())
			{
				func_631(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		
		case -525490740:
			func_631(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1736635264:
			func_631(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1302860970:
			func_631(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1027115192:
			func_631(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1064332555:
			func_631(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1954478446:
			func_631(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -518592739:
			func_631(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -2010073778:
			func_631(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -700133011:
			func_631(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1415414735:
			func_631(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 2045548742:
			func_631(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 830381058:
			func_631(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_641(int iParam0)
{
	if (func_601(41))
	{
		func_331(363, 0);
	}
	else
	{
		func_331(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1173(-1865241121);
			func_1174(-642026005);
			func_1175(-642026005);
			func_373(0, 10);
			break;
		
		case -2108314374:
			func_1173(2117142684);
			func_1174(-940584364);
			func_1175(-940584364);
			func_373(0, 10);
			break;
		
		case -1193798153:
			func_1173(-1409326024);
			func_1174(1972645282);
			func_1175(1972645282);
			func_373(0, 10);
			break;
		
		case -787702678:
			func_1173(-641744968);
			func_1174(1667205433);
			func_1175(1667205433);
			func_373(0, 10);
			break;
		
		case -804542901:
			func_1173(-946988203);
			func_1174(1362715885);
			func_1175(1362715885);
			func_373(0, 10);
			break;
		
		case -1696275132:
			func_1173(-646136018);
			func_1174(1053540370);
			func_1175(1053540370);
			func_373(0, 10);
			break;
		
		case -161595323:
			func_1173(-955835837);
			func_1174(-1100103852);
			func_1175(-1100103852);
			func_373(0, 10);
			break;
		
		case -1114363619:
			func_1173(-179276075);
			func_1174(-1409869209);
			func_1175(-1409869209);
			func_373(0, 10);
			break;
		
		case -368407134:
			func_1173(-492711560);
			func_1174(-1760235357);
			func_1175(-1760235357);
			func_373(0, 10);
			break;
		
		case 1997759228:
			func_1173(1764383959);
			func_1174(-138366827);
			func_1175(-138366827);
			func_373(0, 10);
			break;
		
		case 1265573293:
			func_1173(317501533);
			func_1174(-1261163843);
			func_1175(-1261163843);
			func_373(0, 10);
			break;
		
		case -1030441283:
			func_1173(817753087);
			func_1174(-963523016);
			func_1175(-963523016);
			func_373(0, 10);
			break;
		
		case -1490884871:
			func_1173(576606016);
			func_1174(560825326);
			func_1175(560825326);
			func_373(0, 10);
			break;
		
		case -395458616:
			func_1173(814934957);
			func_1174(858269539);
			func_1175(858269539);
			break;
	}
}

void func_642(int iParam0, int iParam1)
{
	var uVar0;
	
	func_1176(iParam0, iParam1, &uVar0);
}

int func_643(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_702(iParam1, 1, 0) };
		iParam3 = func_703(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1177(iParam1, iParam2, func_690(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1178(1, (func_20() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_690(iParam3, 1) /*11*/])
			{
				func_701(31, 0, 0, 0, 0);
			}
			break;
		
		case 1108822547:
			if (func_1179(32768) && iParam1 != &Global_1946804->f_57[func_690(iParam3, 1) /*11*/])
			{
				func_1180();
				func_701(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_701(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1181(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_701(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1182(0);
			func_1183(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_701(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_644(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;
	
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*uParam0 = 0;
	iVar18 = func_1142(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_1142(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1184("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1185(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*uParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_1186(iVar0);
						if (*uParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_645()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_646()
{
	float fVar0;
	float fVar1;
	
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_647()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_648()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_649()
{
	func_1187();
	func_1188();
	func_1189();
}

void func_650(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_651(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_1126(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_652(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_653(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_654(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_655(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_656(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_657(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_658(int iParam0)
{
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_659(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1190(iParam0, 1024))
	{
		return;
	}
	func_699(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_660(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1190(iParam0, 1024))
	{
		return;
	}
	func_699(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_661()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_1114())
	{
		return func_662();
	}
	iVar4 = (func_1114() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1114())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1191(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1115(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_662()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_1114());
	return func_1115(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_663(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		
		case 998010398:
			*iParam0 = -324053813;
			break;
		
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_664(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_702(iParam0, 0, 1) };
	Var5 = { func_1136(iParam0, Var0, Var0.f_4, 0) };
	return func_1192(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_665(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_20() != -1)
	{
		return;
	}
	switch (func_615(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1193(81053684, 0) <= 0)
			{
				func_701(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_701(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -999503751:
			iVar0 = func_1194(iParam0);
			if (func_1195(iVar0))
			{
				func_1196(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_701(30, iParam0, 0, 0, 0);
			}
			if (func_692() == -2125499975 || func_692() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_701(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_692() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_701(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		
		case -525676072:
			if (!func_1197(-525676072, 0))
			{
				if (func_1198(-525676072, &iVar1))
				{
					func_701(33, iVar1, 0, 0, 0);
				}
			}
			func_701(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1199(99217379))
		{
			func_643(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_614(24);
		if (func_644(&iVar2, 0))
		{
			func_620(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_666(int iParam0)
{
	if (func_611(iParam0, 943695443))
	{
		func_1200(0, iParam0);
	}
	else if (func_611(iParam0, -2096528786))
	{
		func_1200(1, iParam0);
	}
	else if (func_611(iParam0, -1094167013))
	{
		func_1200(2, iParam0);
	}
	else if (func_611(iParam0, 1936654645))
	{
		func_1200(3, iParam0);
	}
	else if (func_611(iParam0, 1306489306))
	{
		func_1200(4, iParam0);
	}
	else if (func_611(iParam0, 435762317))
	{
		func_1200(5, iParam0);
	}
	else if (func_611(iParam0, 1259363210))
	{
		func_1200(6, iParam0);
	}
	else if (func_611(iParam0, 881398259))
	{
		func_1200(7, iParam0);
	}
	else if (func_611(iParam0, -541549214))
	{
		func_1200(8, iParam0);
	}
	else if (func_611(iParam0, 130796156))
	{
		func_1200(-1, iParam0);
	}
}

int func_667(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;
	
	Var4.f_1 = 10;
	func_1201(&Var4, 1356624740);
	return func_1202(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_668(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!func_591(iParam0, 0))
	{
		return Var0;
	}
	if (func_611(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_611(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_611(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_611(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_669(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_333(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_331(109, 1);
				}
			}
			break;
	}
}

void func_670(int iParam0, char* sParam1)
{
	char* sVar0;
	
	sVar0 = func_1204(func_1203(0));
	func_721(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1205(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_671(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	char* sVar15;
	
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_591(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1206())
	{
		func_1207(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1208(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1208(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_612(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_610(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1209(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	iVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		iVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_1210(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_658(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_611(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_658(iParam0));
	}
	func_721(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", iVar13, 0, 1);
}

int func_672(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_673(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_674(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_675(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_676(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;
	
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_1211(iParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_1211(iParam0, Var2, 1))
				{
					if (func_1212(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1212(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_331(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_202(0, 0, 1))
		{
			func_373(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_677(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_678(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		
		case -1704241585:
			iVar0 = 308;
			break;
		
		case -1267972061:
			iVar0 = 309;
			break;
		
		case -142033055:
			iVar0 = 310;
			break;
		
		case 890514341:
			iVar0 = 311;
			break;
		
		case -58963793:
			iVar0 = 312;
			break;
		
		case 1882019322:
			iVar0 = 313;
			break;
		
		case 807302083:
			iVar0 = 314;
			break;
		
		case 617759310:
			iVar0 = 315;
			break;
		
		case -378547623:
			iVar0 = 316;
			break;
		
		case 829545206:
			iVar0 = 317;
			break;
		
		case 891318243:
			iVar0 = 319;
			break;
		
		case 431374225:
			iVar0 = 320;
			break;
		
		case 1619534881:
			iVar0 = 321;
			break;
		
		case -755457379:
			iVar0 = 322;
			break;
		
		case 2141714005:
			iVar0 = 323;
			break;
		
		case 1015404643:
			iVar0 = 324;
			break;
		
		case 983875052:
			iVar0 = 325;
			break;
		
		case -1753730528:
			iVar0 = 326;
			break;
		
		case 2131765035:
			iVar0 = 327;
			break;
		
		case -1740272183:
			iVar0 = 328;
			break;
		
		case 1310680212:
			iVar0 = 329;
			break;
		
		case -1724192342:
			iVar0 = 330;
			break;
		
		case 912296423:
			iVar0 = 331;
			break;
		
		case -566881549:
			iVar0 = 332;
			break;
		
		case 147796381:
			iVar0 = 333;
			break;
		
		case -120865369:
			iVar0 = 334;
			break;
		
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_331(iVar0, 0);
	}
}

void func_679()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(33819255);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 0);
			func_1213(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
			func_1214();
		}
		return;
	}
	if (!func_333(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	func_1215();
	if (MISSIONDATA::_0x57E798B54C45EE1A(1685912227) >= 2)
	{
		if (MISSIONDATA::_0x57E798B54C45EE1A(2116153146) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(645322743))
	{
		return;
	}
	func_1213(1);
}

void func_680()
{
	if (!func_333(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(304788622))
	{
		return;
	}
	func_324(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1968398307))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, true);
}

void func_681()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-751383868);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
		{
			func_1216(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1383789777))
	{
		return;
	}
	if (!func_333(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, true);
	func_1216(1);
}

void func_682()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-1499823613);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
		{
			func_1217(15000, 0, 0, 0, 1);
			func_1216(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1651350587))
	{
		return;
	}
	if (!func_333(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, true);
	func_289(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1216(1);
}

void func_683()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if ((!func_353(1191437462, 1, 0) && !func_196(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_324(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1218(1))
			{
				func_655(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if ((!func_353(1119149048, 1, 0) && !func_196(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_324(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1218(2))
			{
				func_655(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(2056119786) > 0 && !func_1218(4))
		{
			func_655(4);
		}
		if (func_1218(0))
		{
			func_1219(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if (func_353(1191437462, 1, 0))
			{
				func_686(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if (func_353(1119149048, 1, 0))
			{
				func_686(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1218(1))
		{
			func_1219(1);
		}
		if (func_1218(2))
		{
			func_1219(2);
		}
		if (func_1218(4))
		{
			func_1219(4);
		}
		if (!func_1218(0))
		{
			func_655(0);
		}
	}
}

void func_684()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;
	
	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_333(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-236259196))
	{
		return;
	}
	Var1 = { func_1220() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_618(127400949);
		if (func_620(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1220() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_1221(-2055673461, Var1, 1423542233);
		func_1221(-202131179, Var1, -1264898804);
		func_1221(2013836545, Var1, 1592019450);
		func_1221(1497476650, Var1, 1117400455);
		func_1221(1063571467, Var1, 1150213537);
		func_1221(2107224237, Var1, 1598825281);
		func_1221(1747981656, Var1, -712527121);
		func_1221(-1371140647, Var1, 454332195);
		func_1221(-19142973, Var1, 256105670);
		func_1221(-2074737817, Var1, -1328061889);
		func_1221(-1114256243, Var1, -782241404);
		func_1221(-1653277288, Var1, 1669853467);
		func_1221(1869398132, Var1, -1559225678);
		func_1221(459868358, Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !func_29())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_705(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (WEAPON::_0xD955FEE4B87AFA07(iVar16))
					{
						if (func_613(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 0, false, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01(iVar16))
					{
						if ((func_613(24) && func_705(iVar15)) && iVar15 != 127400949)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_705(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_613(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, true);
	}
}

void func_685()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(99890643))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
}

int func_686(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1112(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_671(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_353(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_668(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_595(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_595(iParam0, 0, 0) - iParam1) < 0)
		{
			func_686(iParam0, func_595(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_610(iParam0) == -427144552)
	{
		if (!func_1222(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1223(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_619(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_671(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1224(iParam0, iParam1);
	return 1;
}

int func_687(int iParam0)
{
	switch (func_615(iParam0))
	{
		case -2061583405:
			return 1;
		
		case -1719060085:
			return 1;
		
		case -999503751:
			return 1;
		
		case -525676072:
			return 1;
		
		case 81053684:
			return 1;
		
		case -413129408:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_688(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	switch (func_615(iParam0))
	{
		case -2061583405:
			bVar0 = func_1225(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		
		case 81053684:
			bVar0 = func_1225(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		
		case -999503751:
			bVar0 = func_1225(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		
		case -525676072:
			bVar0 = func_1225(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		
		case -1719060085:
			bVar0 = func_1225(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		
		case -413129408:
			bVar0 = func_1225(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1226();
	}
	if (bParam1)
	{
		func_1227(0, 0);
	}
}

int func_689(int iParam0)
{
	struct<5> Var0;
	
	Var0 = { func_702(iParam0, 1, 0) };
	return func_703(Var0.f_4);
}

int func_690(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		
		case -1889597427:
			return 0;
		
		case -1884748965:
			return 32;
		
		case -1586649372:
			return 33;
		
		case -1506259487:
			return 5;
		
		case -1505978566:
			return 22;
		
		case -1489346253:
			return 38;
		
		case -1364808185:
			return 19;
		
		case -1292426046:
			return 8;
		
		case -1197751823:
			return 20;
		
		case -1176744536:
			return 24;
		
		case -1130865351:
			return 31;
		
		case -1130352927:
			return 1;
		
		case -893163968:
			return 17;
		
		case -735900586:
			return 28;
		
		case -676503695:
			return 6;
		
		case -450913544:
			return 18;
		
		case -426430150:
			return 29;
		
		case -358215195:
			return 39;
		
		case -338487716:
			return 11;
		
		case -207860920:
			return 26;
		
		case 99217379:
			return 27;
		
		case 304805134:
			return 21;
		
		case 383349088:
			return 7;
		
		case 389988485:
			return 2;
		
		case 673166414:
			return 25;
		
		case 788010710:
			return 34;
		
		case 1108822547:
			return 10;
		
		case 1145151482:
			return 23;
		
		case 1250092473:
			return 16;
		
		case 1367443060:
			return 4;
		
		case 1422688607:
			return 9;
		
		case 1600962399:
			return 13;
		
		case 1672288269:
			return 15;
		
		case 1742327865:
			return 12;
		
		case 1780904876:
			return 3;
		
		case 1788623170:
			return 30;
		
		case 1849504272:
			return 14;
		
		case 1900541263:
			return 37;
		
		case 1958421083:
			return 35;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_691(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	
	if (func_20() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_690(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1228(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
		}
	}
}

int func_692()
{
	return Global_1946804->f_1;
}

int func_693(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	
	Var4 = func_1229(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1231(uParam0, func_1230(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_690(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1232(iVar3) && func_1233(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_1234(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

Vector3 func_694(int iParam0, int iParam1)
{
	if (func_20() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

int func_695(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { func_694(iParam0, iParam1) };
	return vVar0.x;
}

void func_696(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_697(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_698(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1235(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1236(iParam0))
	{
		return 0;
	}
	if (func_1237(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1190(iParam0, 1)) || func_82(32768))
	{
		if (!func_1190(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1238())
	{
		return 0;
	}
	return 1;
}

void func_699(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_700(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_701(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	
	if (bParam4)
	{
		func_1239(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1240(Var0);
}

struct<5> func_702(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	
	Var0 = { func_1241(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_610(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_1136(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		
		case -427144552:
			Var0 = { func_1242(bParam1) };
			if (iParam2 && func_1243(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1134(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1134(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1135(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_1244(bParam1) };
			switch (func_615(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		
		case -2130996531:
			if (func_1245(iParam0, -1823706425))
			{
				Var0 = { func_1136(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_1245(iParam0, -1483207246))
			{
				Var0 = { func_1136(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_1246(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_703(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1247(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_704(int iParam0)
{
	func_1228(Global_1946804->f_1497.f_1[func_690(iParam0, 1) /*3*/], 2, 6);
	func_1228(Global_1946804->f_1378.f_1[func_690(iParam0, 1) /*3*/], 2, 6);
}

bool func_705(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

bool func_706(int iParam0)
{
	return iParam0 != 0;
}

int func_707(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (!func_706(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_708(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_709(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1248(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_710(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_711(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_712(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_713(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_714(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_715(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		
		default:
			break;
	}
	return 30;
}

void func_716(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1249(uParam0, iParam6);
	func_1250(uParam0, iParam5);
	func_1251(uParam0, iParam4);
	func_1252(uParam0, iParam3);
	func_1253(uParam0, iParam2);
	func_1254(uParam0, iParam1);
}

int func_717(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_714(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_713(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_712(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_709(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_710(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_711(iParam0);
	if (iVar5 < 1 || iVar5 > func_715(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_718(int iParam0, bool bParam1)
{
	return func_1089(func_291(), iParam0, bParam1);
}

void func_719(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_720(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_1112(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1184("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1185(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_705(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_1186(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1186(iVar1);
	}
	return 0;
}

var func_721(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;
	
	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1255(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_722()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1256(iVar1);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1257(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_723()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1256(iVar0);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1257(iVar1)))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(func_1257(iVar1), true);
		}
		iVar0++;
	}
}

bool func_724(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1053(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_725(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_529(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

bool func_726()
{
	return (func_203(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1637780761) > 0);
}

int func_727(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	
	if (func_20() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_591(iVar0, 0))
	{
		return 0;
	}
	if (!func_1258(iVar0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1259(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_611(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_702(iVar0, 0, 1) };
	iVar10 = func_1260(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1261(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1262(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_324(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	func_1217(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

var func_728(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_729(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_721(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_730(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_731(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;
	
	if (func_20() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_732(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	sVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1079())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(sVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = sVar1;
	if (func_1079())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_0xE6DC9B21AC7A8729(func_198(iParam0), iVar3, sVar1, iParam3);
	iVar4 = func_278(iParam0);
	if (func_200(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_200(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1263(1, sVar1);
					func_1263(8, sVar1);
					func_1263(7, sVar1);
					break;
				
				case 12:
					func_1263(6, sVar1);
					break;
				
				case 53:
					func_1263(3, sVar1);
					func_1263(7, sVar1);
					func_1263(4, sVar1);
					break;
				
				case 20:
					func_1263(8, sVar1);
					break;
				
				case 19:
					func_1263(1, sVar1);
					func_1263(2, sVar1);
					break;
				
				case 24:
					func_1263(3, sVar1);
					func_1263(9, sVar1);
					func_1263(20, sVar1);
					break;
				
				case 28:
					func_1263(1, sVar1);
					break;
				
				case 34:
					func_1263(23, sVar1);
					func_1263(2, sVar1);
					func_1263(18, sVar1);
					break;
				
				case 29:
					func_1263(0, sVar1);
					func_1263(9, sVar1);
					break;
				
				case 37:
					break;
				
				case 58:
					break;
				
				case 57:
					func_1263(0, sVar1);
					func_1263(3, sVar1);
					func_1263(2, sVar1);
					func_1263(11, sVar1);
					func_1263(6, sVar1);
					func_1263(25, sVar1);
					func_1263(24, sVar1);
					break;
			}
			break;
		
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1263(5, sVar1);
					break;
				
				case 63:
					func_1263(1, sVar1);
					func_1263(3, sVar1);
					break;
				
				case 37:
					func_1263(23, sVar1);
					break;
				
				case 116:
					break;
			}
			break;
		
		case 11:
			if (iParam0 == func_369(0, 10, 11, 2116153146))
			{
				func_1263(7, sVar1);
				func_1263(4, sVar1);
			}
			else if (iParam0 == func_369(0, 7, 11, -379687487))
			{
				func_1263(8, sVar1);
				func_1263(15, sVar1);
			}
			else if (iParam0 == func_369(0, 8, 11, -1386089015))
			{
				func_1263(3, sVar1);
			}
			else if (iParam0 == func_369(0, 11, 11, -1952009645))
			{
				func_1263(6, sVar1);
				func_1263(3, sVar1);
			}
			else if (iParam0 == func_369(0, 12, 11, 2065895756))
			{
				func_1263(9, sVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1264()));
	if (!func_1265(629))
	{
		func_331(629, 0);
	}
}

int func_733(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_734(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_735(int iParam0, var uParam1, var uParam2)
{
	if (!func_734(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_736()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_737(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_738(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_1266(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_736())
	{
		return -1;
	}
	uVar0 = func_737(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_500(iVar1, 0);
	func_570(iVar1, 0);
	func_1267(iVar1, 0);
	func_1268(iVar1, 0);
	func_1269(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_1270(iVar1, iParam4);
	}
	return iVar1;
}

int func_739(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;
	
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (iParam1 && func_353(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_591(iVar25, 0) && func_611(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_740(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_741(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_195(iParam0))
	{
		return 0;
	}
	uVar0 = func_371(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_742(var uParam0)
{
	return STATS::_0x4DAC398297981B87(uParam0);
}

Vector3 func_743(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9, float fParam10, int iParam11, int iParam12, float fParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	
	fVar2 = 9999999f;
	func_1271(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1272() == 0 && !func_1273(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1274(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		iVar10 = func_1275();
		if (VOLUME::_0x92A78D0BEDB332A3(iVar10))
		{
		}
	}
	if (!func_1276(Global_1310720->f_21))
	{
		fParam10 = iParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_1277(iVar0, iVar1) };
			bVar11 = func_1278(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !func_406(vVar7)) && func_1279(iVar0, uParam8, iParam12)) && !func_1280(iVar0)) || bVar11)
			{
				if (func_1281(vVar7, iVar0, iVar1, bParam5, bParam6, bVar14, iVar10, bParam9, fParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*uParam3 = iVar0;
					*uParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}

int func_744(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = func_1282(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

void func_745()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
}

void func_746()
{
}

void func_747()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

bool func_748(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_749(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1934603)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_750(var uParam0)
{
	if (func_748(uParam0, 1))
	{
		func_1283(1);
	}
}

int func_751()
{
	return -1904156936;
}

int func_752(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_195(iParam0))
	{
		return 0;
	}
	switch (func_200(iParam0))
	{
		case 1:
			iVar0 = func_278(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		
		case 8:
			iVar1 = func_278(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return 0;
}

int func_753()
{
	return 166188472;
}

int func_754()
{
	return 2015838421;
}

int func_755()
{
	return 207908017;
}

var func_756(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;
	
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _NAMESPACE76::_0x9F2CC2439A04E7BA(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_757(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	var uVar3;
	
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _NAMESPACE76::_0x815C4065AE6E6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_758(var uParam0)
{
	int iVar0;
	struct<11> Var1;
	
	Var1.f_10 = joaat("weapon_unarmed");
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_3[iVar0 /*13*/])->f_9) && ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2))
		{
			MISC::_COPY_MEMORY(uParam0->f_3[iVar0 /*13*/], &Var1, 13);
		}
		iVar0++;
	}
}

int func_759(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar0 /*13*/])->f_2) && (uParam0->f_3[iVar0 /*13*/])->f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_760(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_3[iVar0 /*13*/])->f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1)) && MISC::ARE_STRINGS_EQUAL((uParam0->f_3[iVar0 /*13*/])->f_9, sParam1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_761(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar0 /*13*/])->f_2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_762(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_763(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_764()
{
	return Global_1572864->f_8;
}

void func_765(var uParam0, int iParam1)
{
	func_1284(uParam0, iParam1);
	func_1285(uParam0, iParam1, 26);
}

int func_766(var uParam0)
{
	if ((func_120(uParam0, 4) || func_128(uParam0, 2)) || func_128(uParam0, 1))
	{
	}
	return 1;
}

int func_767(var uParam0)
{
	if ((func_120(uParam0, 4) || func_128(uParam0, 2)) || func_128(uParam0, 1))
	{
	}
	func_1286();
	ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(-2594.61f, 456.53f, 147.05f, 0.5f, 305182125, false);
	func_163(&(uLocal_46[0]), 0, 1);
	func_1287(Global_35);
	PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	return 1;
}

int func_768(var uParam0)
{
	if ((func_120(uParam0, 4) || func_128(uParam0, 2)) || func_128(uParam0, 1))
	{
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
		{
			PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
		}
	}
	func_930(0f, 0f);
	func_169(0);
	func_1288(0);
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_942(&iLocal_280, 0);
	func_941(&iLocal_261, 0);
	func_943(&uLocal_262, 0);
	func_944(&uLocal_278, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&iLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	func_163(&(uLocal_46[0]), 1, 1);
	func_164(1);
	AUDIO::_0x660A8F876DF1D4F8(8);
	AUDIO::_0x660A8F876DF1D4F8(24);
	return 1;
}

bool func_769(var uParam0)
{
	int iVar0;
	
	if (func_1289(uParam0) > -1 && func_1289(uParam0) < 29)
	{
		func_1290(uParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
			{
				return false;
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_49))
		{
			return false;
		}
		func_1291(uParam0);
		func_1292(uParam0);
		func_1293(uParam0);
		func_1294(uParam0);
		func_1295();
		func_1296(uParam0);
		if (!ANIMSCENE::_0x25557E324489393C(&(uLocal_202[0])) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(uLocal_202[0]), 0))
		{
			func_934(uParam0);
		}
	}
	switch (func_1289(uParam0))
	{
		case 0:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35)
			{
				AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
				AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, &(uLocal_46[0]), 1);
				func_225(&uLocal_215);
				func_134(uParam0, 1);
			}
			break;
		
		case 1:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35 && !AITRANSPORT::_0x660639BC60157048(Global_35, iLocal_72))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[6]), true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[12]), true, 0))
				{
					if (iLocal_1261)
					{
						PAD::DISABLE_CONTROL_ACTION(0, -17122892, false);
						if (func_218())
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
						}
						if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[8]), true, 0))
						{
							if (!func_230(1))
							{
								func_1297(1);
								func_467(3, 1);
							}
						}
						func_943(&uLocal_262, 20);
						func_225(&uLocal_218);
						func_225(&uLocal_215);
						func_134(uParam0, 29);
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[7]), true, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, -17122892, false);
						if (func_218())
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
						}
						func_943(&uLocal_262, 20);
						func_225(&uLocal_218);
						func_225(&uLocal_215);
						func_134(uParam0, 29);
					}
					else if ((ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[9]), true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[10]), true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[11]), true, 0))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[9]), true, 0))
						{
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[10]), true, 0))
						{
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[11]), true, 0))
						{
						}
						PAD::DISABLE_CONTROL_ACTION(0, -17122892, false);
						if (func_218())
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
						}
						if (!func_230(1))
						{
							func_1297(1);
							func_467(3, 1);
						}
						func_943(&uLocal_262, 20);
						func_225(&uLocal_218);
						func_225(&uLocal_215);
						func_134(uParam0, 29);
					}
					bLocal_1262 = true;
				}
				else
				{
					bLocal_1262 = false;
				}
			}
			break;
		
		case 29:
			break;
	}
	return func_1289(uParam0) == 29;
}

int func_770(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, -17122892, false);
	iLocal_182[1] = 0;
	if (func_264(13))
	{
		func_265(uParam0, 13, &(uLocal_46[1]), 0, 0, 1, 0);
	}
	func_462(&iLocal_41);
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	if (!MAP::DOES_BLIP_EXIST(iLocal_41))
	{
		iLocal_41 = func_1299(408396114, func_1298(12, 0), 1);
		MAP::_0x662D364ABF16DE2F(iLocal_41, -1878373110);
		MAP::SET_GPS_FLAGS(512, 0f);
	}
	func_184();
	func_177();
	return 1;
}

void func_771(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	char cVar0[32];
	
	func_140(uParam0, iParam1, iParam9);
	func_1300(uParam0, iParam1);
	func_1285(uParam0, iParam1, iParam2);
	func_1301(uParam0, &iParam3, iParam1, 0);
	func_1301(uParam0, &iParam4, iParam1, 2);
	func_1301(uParam0, &iParam5, iParam1, 4);
	func_1301(uParam0, &iParam6, iParam1, 5);
	func_1301(uParam0, &iParam7, iParam1, 7);
	func_977(uParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1302(uParam0, iParam1, cVar0);
	func_1303(uParam0, iParam1, iParam10);
}

int func_772(var uParam0)
{
	if (func_8(uParam0, 8))
	{
	}
	func_164(1);
	return 1;
}

int func_773(var uParam0)
{
	int iVar0;
	
	if (!func_8(uParam0, 8))
	{
		if (!func_466(0))
		{
			func_467(0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
				}
				else
				{
					return 0;
				}
				iVar0 = 0;
				while (iVar0 <= (2 - 1))
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
						{
							PED::SET_PED_INTO_VEHICLE(&(uLocal_46[iVar0]), iLocal_72, 0);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, &(uLocal_46[iVar0]), 1);
						}
					}
					iVar0++;
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 3.5f);
			}
			else
			{
				return 0;
			}
			func_930(0f, 0f);
			func_225(&uLocal_215);
		}
		if (func_928(&uLocal_215) < 0.8f)
		{
			return 0;
		}
	}
	return 1;
}

int func_774(var uParam0)
{
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_942(&iLocal_280, 0);
	func_941(&iLocal_261, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&iLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_215);
	if (func_230(2))
	{
		func_1304(2);
		func_467(1, 0);
	}
	if (func_230(4))
	{
		func_1304(4);
		func_467(2, 0);
	}
	return 1;
}

bool func_775(var uParam0)
{
	int iVar0;
	
	if (func_1289(uParam0) > -1 && func_1289(uParam0) < 29)
	{
		func_1290(uParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_49))
		{
			return false;
		}
		func_1305(uParam0);
		func_1306();
		func_1307();
		func_1308(uParam0);
		func_1296(uParam0);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -17122892, false);
	switch (func_1289(uParam0))
	{
		case 0:
			if (func_1309(1))
			{
				func_225(&uLocal_215);
				func_134(uParam0, 1);
			}
			break;
		
		case 1:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35)
			{
				if (func_1310(uParam0) == 51 && func_1309(0))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[16]), true, 0))
					{
						if (!func_230(2))
						{
							func_1297(2);
							func_467(1, 1);
						}
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[17]), true, 0))
					{
						if (!func_230(4))
						{
							func_1297(4);
							func_467(2, 1);
						}
					}
					if (func_218())
					{
						_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					}
					func_943(&uLocal_262, 20);
					func_225(&uLocal_215);
					func_134(uParam0, 29);
				}
			}
			break;
		
		case 29:
			break;
	}
	return func_1289(uParam0) == 29;
}

int func_776(var uParam0)
{
	if (func_466(8))
	{
		func_467(8, 0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
	}
	if (CAM::_0xDD0B7C5AE58F721D(func_1311()))
	{
		CAM::_0x2412216FCC7B4E3E(func_1311());
	}
	CAM::_0x0A5A4F1979ABB40E(&Local_1268);
	if (CAM::_0xDD0B7C5AE58F721D(&Local_1268))
	{
		CAM::_0x798BE43C9393632B(&Local_1268);
	}
	if (STREAMING::IS_SRL_LOADED())
	{
		STREAMING::END_SRL();
	}
	func_462(&iLocal_41);
	func_177();
	return 1;
}

int func_777(var uParam0)
{
	func_164(1);
	return 1;
}

int func_778(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_8(uParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
			}
			else
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				iVar1 = iVar0;
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
				{
					if (iVar1 == 0)
					{
						PED::SET_PED_INTO_VEHICLE(&(uLocal_46[iVar0]), iLocal_72, 0);
						AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
						AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, &(uLocal_46[iVar0]), 1);
					}
				}
				iVar0++;
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 3.5f);
		}
		else
		{
			return 0;
		}
		func_930(0f, 0f);
	}
	else
	{
		func_1312(uParam0);
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[19])))
		{
			func_460(&(iLocal_93[19]), 0, 0, 0);
		}
	}
	if (func_230(1))
	{
		func_1304(1);
		func_467(3, 0);
	}
	return 1;
}

int func_779(var uParam0)
{
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_943(&uLocal_262, 0);
	func_944(&uLocal_276, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&iLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	return 1;
}

bool func_780(var uParam0)
{
	int iVar0;
	
	if (func_1289(uParam0) > -1 && func_1289(uParam0) < 29)
	{
		func_1290(uParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_49))
		{
			return false;
		}
		func_1313(uParam0);
		func_1314(uParam0);
		func_1315(uParam0);
		func_1316();
		func_1296(uParam0);
		func_1317();
		func_1318();
		func_1319();
	}
	switch (func_1289(uParam0))
	{
		case 0:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35)
			{
				func_1320(func_1298(4, 2), 100f, 1109393408, 1092616192, 1086324736, 3.5f, 1077936128);
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[19]), true, 0))
				{
					if (func_1322(iLocal_72, func_1321(4, 2), 45f) || func_1322(iLocal_72, func_1321(4, 3), 45f))
					{
						if (func_218())
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
						}
						func_462(&iLocal_41);
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						PAD::ENABLE_CONTROL_ACTION(0, -1450761377, true);
						PAD::ENABLE_CONTROL_ACTION(0, -771458680, true);
						PAD::ENABLE_CONTROL_ACTION(0, -813019446, true);
						PAD::ENABLE_CONTROL_ACTION(0, -668070958, true);
						PAD::ENABLE_CONTROL_ACTION(0, 1250966545, true);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_49))
						{
							TASK::CLEAR_PED_TASKS(iLocal_49, 1, 0);
							TASK::TASK_STAND_STILL(iLocal_49, -1);
						}
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_72, 1f, 5, false);
						func_943(&uLocal_262, 20);
						if (!func_1322(iLocal_72, func_1321(4, 2), 1119092736))
						{
							if (!func_230(1))
							{
								func_1297(1);
								func_467(3, 1);
							}
						}
						return true;
					}
				}
			}
			break;
		
		case 29:
			break;
	}
	return func_1289(uParam0) == 29;
}

int func_781(var uParam0)
{
	func_176(uParam0);
	func_177();
	func_1323();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0, 0))
	{
		VEHICLE::_0x0C3F0F7F92CA847C(iLocal_72, 13.5f);
	}
	return 1;
}

int func_782(var uParam0)
{
	if (func_8(uParam0, 8))
	{
	}
	func_164(1);
	return 1;
}

int func_783(var uParam0)
{
	int iVar0;
	
	if (!func_8(uParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
				{
					PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
				}
			}
		}
		else
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
		{
			if (iVar0 == 0)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(&(uLocal_46[iVar0]), joaat("weapon_unarmed"), true, 0, false, false);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
				{
					if (!PED::IS_PED_IN_VEHICLE(&(uLocal_46[iVar0]), iLocal_72, false))
					{
						PED::SET_PED_INTO_VEHICLE(&(uLocal_46[iVar0]), iLocal_72, 0);
					}
					AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
					AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, &(uLocal_46[iVar0]), 1);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_46[iVar0]), true);
			}
			else if (iVar0 == 1)
			{
			}
		}
		iVar0++;
	}
	return 1;
}

int func_784(var uParam0)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(0, -1450761377, true);
	PAD::ENABLE_CONTROL_ACTION(0, -771458680, true);
	PAD::ENABLE_CONTROL_ACTION(0, -813019446, true);
	PAD::ENABLE_CONTROL_ACTION(0, -668070958, true);
	PAD::ENABLE_CONTROL_ACTION(0, 1250966545, true);
	if (!func_934(uParam0))
	{
		return 0;
	}
	func_434(&(uParam0->f_7375), 100f);
	func_435(&(uParam0->f_7375), 175f);
	func_1324(uParam0);
	if (func_8(uParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		}
		func_1325(uParam0, 1);
	}
	func_1288(2);
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_941(&iLocal_261, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	func_942(&iLocal_280, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&iLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_464(&uLocal_215);
	AUDIO::_0x660A8F876DF1D4F8(21);
	AUDIO::_0x660A8F876DF1D4F8(8);
	AUDIO::_0x660A8F876DF1D4F8(24);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 445, true);
	return 1;
}

bool func_785(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_1289(uParam0) > -1 && func_1289(uParam0) < 29)
	{
		func_1290(uParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = iVar0;
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_46[iVar1])) && PED::IS_PED_DEAD_OR_DYING(&(uLocal_46[iVar1]), true))
			{
				return false;
			}
			iVar0++;
		}
		func_1326(uParam0);
		func_1327(uParam0);
		func_1328(uParam0);
		func_1329(uParam0);
		func_1330(uParam0);
		func_1331(uParam0);
		func_1296(uParam0);
		func_1332();
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(iLocal_93[18]), false, 0))
		{
			ENTITY::_0x18FF3110CF47115D(Global_35, 9, 0);
		}
		else
		{
			ENTITY::_0x18FF3110CF47115D(Global_35, 9, 1);
		}
	}
	switch (func_1289(uParam0))
	{
		case 0:
			if (func_1333(uParam0))
			{
				func_467(8, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 256, 0);
				if (func_218())
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
				}
				func_176(uParam0);
				func_1334(uParam0);
				func_225(&uLocal_218);
				func_225(&uLocal_215);
				func_135(uParam0, 51);
				func_134(uParam0, 29);
			}
			break;
	}
	return func_1289(uParam0) == 29;
}

int func_786(var uParam0)
{
	func_176(uParam0);
	func_177();
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 445, false);
	func_1335();
	func_1336();
	ENTITY::_0x18FF3110CF47115D(Global_35, 9, 1);
	return 1;
}

int func_787(var uParam0)
{
	if (func_8(uParam0, 8))
	{
	}
	return 1;
}

int func_788(var uParam0)
{
	int iVar0;
	
	if (func_230(1))
	{
		func_467(3, 1);
	}
	else
	{
		func_467(3, 0);
	}
	if (!func_8(uParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
		}
		else
		{
			return 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
		}
		else
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
			{
				if (iVar0 == 0)
				{
					PED::SET_PED_INTO_VEHICLE(&(uLocal_46[iVar0]), iLocal_72, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_46[iVar0]), true);
					TASK::TASK_STAND_STILL(&(uLocal_46[iVar0]), -1);
				}
			}
			iVar0++;
		}
	}
	func_173(1);
	MISC::_0x2FCD528A397E5C88(&(iLocal_93[19]), 2179080);
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[0])))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, true);
			AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
			AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, &(uLocal_46[0]), 1);
		}
	}
	return 1;
}

int func_789(var uParam0)
{
	if (!func_934(uParam0))
	{
		return 0;
	}
	if (func_120(uParam0, 4))
	{
		func_930(0f, 0f);
	}
	func_1288(4);
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&iLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	func_1337();
	func_164(1);
	return 1;
}

bool func_790(var uParam0)
{
	int iVar0;
	
	if (func_1289(uParam0) > -1 && func_1289(uParam0) < 29)
	{
		func_1290(uParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			return false;
		}
		func_1338(uParam0);
		func_1339();
		func_1340(uParam0);
		func_1296(uParam0);
	}
	switch (func_1289(uParam0))
	{
		case 0:
			if (func_928(&uLocal_215) >= 30f)
			{
				func_225(&uLocal_215);
				func_134(uParam0, 1);
			}
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, -1450761377, true);
			PAD::ENABLE_CONTROL_ACTION(0, -771458680, true);
			PAD::ENABLE_CONTROL_ACTION(0, -813019446, true);
			PAD::ENABLE_CONTROL_ACTION(0, -668070958, true);
			PAD::ENABLE_CONTROL_ACTION(0, 1250966545, true);
			if (ANIMSCENE::_0x25557E324489393C(&(uLocal_202[4])))
			{
				if (ANIMSCENE::_0x477122B8D05E7968(&(uLocal_202[4]), 1, 0))
				{
					if (ANIMSCENE::_0xD8254CB2C586412B(&(uLocal_202[4]), 0))
					{
						func_468(4);
						func_225(&uLocal_215);
						func_134(uParam0, 1);
					}
				}
			}
			break;
		
		case 1:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35 && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
			{
				func_225(&uLocal_215);
				func_134(uParam0, 2);
			}
			break;
		
		case 2:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35 && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[20]), true, 0))
				{
					if (func_218())
					{
						_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					}
					func_943(&uLocal_262, 20);
					func_225(&uLocal_218);
					func_225(&uLocal_215);
					func_134(uParam0, 29);
				}
				else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[21]), true, 0))
				{
					if (func_218())
					{
						_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					}
					func_943(&uLocal_262, 20);
					func_225(&uLocal_218);
					func_225(&uLocal_215);
					func_134(uParam0, 29);
				}
			}
			break;
		
		case 29:
			break;
	}
	return func_1289(uParam0) == 29;
}

int func_791(var uParam0)
{
	func_173(0);
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[19])))
	{
		func_172(&(iLocal_93[19]));
	}
	func_469();
	func_177();
	return 1;
}

int func_792(var uParam0)
{
	if (func_8(uParam0, 8))
	{
	}
	func_164(1);
	return 1;
}

int func_793(var uParam0)
{
	int iVar0;
	
	if (!func_8(uParam0, 8))
	{
		if (!func_466(0))
		{
			func_467(0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
				}
				else
				{
					return 0;
				}
				iVar0 = 0;
				while (iVar0 <= (2 - 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
					{
						if (iVar0 == 0)
						{
							PED::SET_PED_INTO_VEHICLE(&(uLocal_46[iVar0]), iLocal_72, 0);
							TASK::_0xE01F55B2896F6B37(iLocal_72, 1);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, &(uLocal_46[iVar0]), 0);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_46[iVar0]), true);
							TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(&(uLocal_46[iVar0]), iLocal_72, func_1298(12, 4), 4.5f, 69468168, 3, 5f, 5f, 0);
						}
					}
					iVar0++;
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 3.5f);
			}
			else
			{
				return 0;
			}
			func_930(0f, 0f);
			func_225(&uLocal_215);
		}
		if (func_928(&uLocal_215) < 0.8f)
		{
			return 0;
		}
	}
	return 1;
}

int func_794(var uParam0)
{
	if (func_8(uParam0, 8))
	{
		func_467(4, 0);
	}
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&iLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	return 1;
}

bool func_795(var uParam0)
{
	int iVar0;
	
	if (func_1289(uParam0) > -1 && func_1289(uParam0) < 29)
	{
		func_1290(uParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			return false;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 173, true);
		}
		func_1341(uParam0);
		func_1342(uParam0);
		func_1343(uParam0);
		func_1344();
		func_1345();
		func_1346();
		func_1296(uParam0);
	}
	switch (func_1289(uParam0))
	{
		case 0:
			if ((func_1347() && !AITRANSPORT::_0x660639BC60157048(Global_35, iLocal_72)) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[30]), true, 0))
			{
				func_225(&uLocal_218);
				func_135(uParam0, 51);
				func_225(&uLocal_215);
				func_134(uParam0, 29);
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(iLocal_93[43]), true, 0))
			{
				func_1348(iLocal_65);
			}
			break;
		
		case 29:
			break;
	}
	return func_1289(uParam0) == 29;
}

int func_796(var uParam0)
{
	func_185();
	func_176(uParam0);
	func_177();
	func_1349();
	return 1;
}

int func_797(var uParam0)
{
	if (func_8(uParam0, 8))
	{
	}
	func_164(1);
	return 1;
}

int func_798(var uParam0)
{
	int iVar0;
	
	if (!func_8(uParam0, 8))
	{
		if (!func_466(0))
		{
			func_467(0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
				}
				else
				{
					return 0;
				}
				iVar0 = 0;
				while (iVar0 <= (2 - 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
					{
						if (iVar0 == 0)
						{
							PED::SET_PED_INTO_VEHICLE(&(uLocal_46[iVar0]), iLocal_72, 0);
							TASK::_0xE01F55B2896F6B37(iLocal_72, 1);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, &(uLocal_46[iVar0]), 0);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_46[iVar0]), true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
							TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iLocal_72, func_1298(12, 4), 6f, 69468672, 3, 5f, 5f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
							TASK::TASK_PERFORM_SEQUENCE(&(uLocal_46[iVar0]), iLocal_40);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
						}
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= (3 - 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_50[iVar0])))
					{
						PED::SET_PED_RESET_FLAG(&(iLocal_50[iVar0]), 3, true);
						if (iVar0 == 0)
						{
							if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_54[iVar0])))
							{
								func_1350(&(iLocal_50[iVar0]), &(iLocal_54[iVar0]));
							}
						}
						PED::SET_PED_CONFIG_FLAG(&(iLocal_50[iVar0]), 167, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iLocal_50[iVar0]), true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
						if (iVar0 == 0)
						{
							TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(0, iLocal_72, "mar2_ride_ambush", 0f, -60f, 0, 1544, -1, 0);
						}
						else if (iVar0 == 1)
						{
						}
						else if (iVar0 == 2)
						{
						}
						TASK::TASK_STAND_STILL(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
						TASK::TASK_PERFORM_SEQUENCE(&(iLocal_50[iVar0]), iLocal_40);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
					}
					iVar0++;
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 3.5f);
			}
			else
			{
				return 0;
			}
			func_930(0f, 0f);
			func_225(&uLocal_215);
		}
		if (func_928(&uLocal_215) < 0.8f)
		{
			return 0;
		}
	}
	return 1;
}

int func_799(var uParam0)
{
	int iVar0;
	
	func_434(&(uParam0->f_7375), 250f);
	func_435(&(uParam0->f_7375), 350f);
	func_1351(uParam0);
	if (func_8(uParam0, 8))
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_46[iVar0]), true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
					TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iLocal_72, func_1298(12, 4), 6f, 69468672, 3, 5f, 5f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_46[iVar0]), iLocal_40);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
				}
			}
			iVar0++;
		}
	}
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&iLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	iLocal_337 = GRAPHICS::_0xBD3324281E8B9933(&(iLocal_93[47]), 2, 4, 0);
	return 1;
}

bool func_800(var uParam0)
{
	int iVar0;
	
	if (func_1289(uParam0) > -1 && func_1289(uParam0) < 29)
	{
		func_1290(uParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			return false;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 173, true);
		}
		func_1352(uParam0);
		func_1353(uParam0);
		func_1354(uParam0);
		func_1296(uParam0);
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[32]), true, 0))
	{
		if (ANIMSCENE::_0x25557E324489393C(&(uLocal_202[5])))
		{
			if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(&(uLocal_202[5]), 0) && !ANIMSCENE::_0xD8254CB2C586412B(&(uLocal_202[5]), 0))
			{
				func_1288(5);
			}
		}
	}
	switch (func_1289(uParam0))
	{
		case 0:
			if (!func_466(9))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[31]), true, 0))
				{
					func_467(9, 1);
					func_1325(uParam0, 2);
				}
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[33]), true, 0))
			{
				func_225(&uLocal_215);
				func_134(uParam0, 1);
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
				AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, &(uLocal_46[0]), 1);
				TASK::_0xE01F55B2896F6B37(iLocal_72, 1);
			}
			if (func_218())
			{
				_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			}
			func_943(&uLocal_262, 20);
			func_225(&uLocal_218);
			func_134(uParam0, 29);
			break;
		
		case 29:
			break;
	}
	return func_1289(uParam0) == 29;
}

int func_801(var uParam0)
{
	func_176(uParam0);
	func_177();
	return 1;
}

int func_802(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_50[iVar0])) || !PED::_0xA0BC8FAED8CFEB3C(&(iLocal_50[iVar0])))
		{
			return 0;
		}
		iVar0++;
	}
	iLocal_337 = GRAPHICS::_0xBD3324281E8B9933(&(iLocal_93[47]), 2, 4, 0);
	if (func_8(uParam0, 8))
	{
		func_467(34, 1);
	}
	return 1;
}

int func_803(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_8(uParam0, 8))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_50[iVar1])))
			{
				PED::SET_PED_CONFIG_FLAG(&(iLocal_50[iVar1]), 167, false);
				if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_54[iVar1])))
				{
					if (!PED::IS_PED_ON_MOUNT(&(iLocal_50[iVar1])))
					{
						PED::_SET_PED_ON_MOUNT(&(iLocal_50[iVar1]), &(iLocal_54[iVar1]), -1, true);
					}
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iLocal_50[iVar0]), true);
				PED::SET_PED_RESET_FLAG(&(iLocal_50[iVar1]), 3, true);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
				switch (iVar1)
				{
					case 0:
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1298(7, 12), 1.25f, 90000, 8f, false, 40000f);
						break;
					
					case 1:
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1298(7, 13), 1.25f, 90000, 8f, false, 40000f);
						break;
					
					case 2:
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1298(7, 14), 1.001f, 90000, 8f, false, 40000f);
						break;
				}
				TASK::TASK_STAND_STILL(0, -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
				TASK::TASK_PERFORM_SEQUENCE(&(iLocal_50[iVar0]), iLocal_40);
			}
			switch (iVar1)
			{
				case 0:
					func_1355(&(iLocal_54[iVar1]), func_228(7, 6), 2, 1073741824);
					break;
				
				case 1:
					func_1355(&(iLocal_54[iVar1]), func_228(7, 7), 2, 1073741824);
					break;
				
				case 2:
					func_1355(&(iLocal_54[iVar1]), func_228(7, 8), 2, 1073741824);
					break;
			}
			iVar0++;
		}
	}
	LAW::_0x710448D44A64C213(0);
	return 1;
}

int func_804(var uParam0)
{
	int iVar0;
	int iVar1;
	
	func_1356(uParam0);
	if (!func_1357() && !func_1358())
	{
		return 0;
	}
	func_467(34, 0);
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_941(&iLocal_261, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&iLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	func_1359(1);
	AUDIO::STOP_PED_SPEAKING(&(uLocal_46[0]), true);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 1999408598, true, 1, false, false);
	iVar0 = WEAPON::_0x5C2EA6C44F515F34(1999408598);
	iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar0);
	if (iVar1 < 20)
	{
		WEAPON::SET_PED_AMMO_BY_TYPE(Global_35, iVar0, 20);
	}
	func_164(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0, 0))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, false);
	}
	return 1;
}

bool func_805(var uParam0)
{
	int iVar0;
	
	if (!bLocal_188 && func_935(&uLocal_368, "MAR2_MCS4", 1, 1))
	{
		bLocal_188 = true;
	}
	if (func_1289(uParam0) > -1 && func_1289(uParam0) < 29)
	{
		func_1290(uParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		func_1356(uParam0);
		func_1360(uParam0);
		func_1361();
		func_1296(uParam0);
	}
	switch (func_1289(uParam0))
	{
		case 0:
			if (func_1362())
			{
				func_134(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_1363())
			{
				if (func_218())
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
				}
				func_225(&uLocal_215);
				func_134(uParam0, 29);
			}
			break;
		
		case 29:
			break;
	}
	return func_1289(uParam0) == 29;
}

int func_806(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0, 0, -1, 0);
	}
	TASK::REMOVE_COVER_POINT(iLocal_1351);
	TASK::REMOVE_COVER_POINT(iLocal_1352);
	func_462(&iLocal_41);
	func_1359(0);
	func_177();
	AUDIO::STOP_PED_SPEAKING(&(uLocal_46[0]), false);
	func_189(Global_35, 0);
	return 1;
}

int func_807(var uParam0)
{
	iLocal_337 = GRAPHICS::_0xBD3324281E8B9933(&(iLocal_93[47]), 2, 4, 0);
	if (func_8(uParam0, 8))
	{
	}
	LAW::_0x710448D44A64C213(0);
	return 1;
}

int func_808(var uParam0)
{
	if (func_8(uParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[0])))
		{
			if (PED::_0xB655DB7582AEC805(&(uLocal_46[0])))
			{
				PED::_0xF6262491C7704A63(&(uLocal_46[0]), 0);
			}
		}
	}
	if (bLocal_188)
	{
		func_99(uParam0, 4194304);
	}
	return 1;
}

int func_809(var uParam0)
{
	int iVar0;
	
	if (!func_8(uParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
		}
		else
		{
			return 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
		}
		else
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
			{
				if (iVar0 == 0)
				{
					AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
					AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, &(uLocal_46[iVar0]), 1);
				}
			}
			iVar0++;
		}
		func_1288(6);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
	}
	else
	{
		func_1325(uParam0, 3);
	}
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&iLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	func_164(2);
	return 1;
}

bool func_810(var uParam0)
{
	int iVar0;
	
	if (func_1289(uParam0) > -1 && func_1289(uParam0) < 29)
	{
		func_1290(uParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		func_1364(uParam0);
		func_1365(uParam0);
		func_1366();
		func_1296(uParam0);
	}
	func_1367();
	switch (func_1289(uParam0))
	{
		case 0:
			if (func_1368(uParam0, 0))
			{
				func_467(8, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
				if (func_218())
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
				}
				func_176(uParam0);
				func_943(&uLocal_262, 20);
				func_225(&uLocal_218);
				func_225(&uLocal_215);
				func_134(uParam0, 29);
				func_1369();
				func_1370(uParam0, 0);
			}
			break;
		
		case 29:
			break;
	}
	return func_1289(uParam0) == 29;
}

int func_811(var uParam0)
{
	func_176(uParam0);
	if (func_1371("MISSION_CREATE_CONVERSATION"))
	{
		func_1372("MISSION_CREATE_CONVERSATION", 0, 0);
	}
	func_177();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0, 0))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, true);
	}
	return 1;
}

int func_812(var uParam0)
{
	iLocal_337 = GRAPHICS::_0xBD3324281E8B9933(&(iLocal_93[47]), 2, 4, 0);
	func_164(2);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, 0, 0))
	{
		ENTITY::_0x203BEFFDBE12E96A(iLocal_72, -1745.369f, 312.5629f, 109.5282f, -38.69f, 0, false, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_72, 0f);
	}
	return 1;
}

int func_813(var uParam0)
{
	int iVar0;
	
	if (func_8(uParam0, 8))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[5])))
		{
			PATHFIND::_0xD17672447692478E(&(iLocal_93[5]), 0);
			PATHFIND::_0xC1799FAFD2FDF52B(&(iLocal_93[5]), 0, 0, 1);
			PATHFIND::_0xC1799FAFD2FDF52B(&(iLocal_93[68]), 0, 0, 0);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
		}
		else
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
				{
					PED::SET_PED_INTO_VEHICLE(&(uLocal_46[iVar0]), iLocal_72, 0);
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_814(var uParam0)
{
	func_467(4, 0);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
		AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, &(uLocal_46[0]), 1);
	}
	func_467(8, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	func_930(0f, 0f);
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&iLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_464(&uLocal_1433);
	func_1373();
	LAW::_0x710448D44A64C213(1);
	return 1;
}

bool func_815(var uParam0)
{
	int iVar0;
	
	if (func_1289(uParam0) > -1 && func_1289(uParam0) < 29)
	{
		func_1290(uParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		func_1374(uParam0);
		func_1375(uParam0);
		func_1296(uParam0);
		func_1376(uParam0);
	}
	func_440(uParam0, 1, -2590.037f, 465.5254f, 145.1149f, 79.8012f, 1, 1, 1);
	switch (func_1289(uParam0))
	{
		case 0:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35)
			{
				func_134(uParam0, 1);
			}
			break;
		
		case 1:
			if (!iLocal_1424)
			{
				if (func_466(4))
				{
					if (!func_1347())
					{
						func_1377();
					}
					func_1378(func_1347());
					if (func_1379())
					{
						if (func_1380())
						{
							bLocal_1423 = true;
						}
						else if (func_1381())
						{
							bLocal_1423 = false;
						}
						iLocal_1424 = 1;
						func_467(4, 0);
						func_1377();
						func_225(&uLocal_218);
					}
					if ((func_1382(&uLocal_1433, 12f) && !iLocal_1424) && func_1347())
					{
						if (func_308())
						{
							bLocal_1423 = true;
						}
						else
						{
							bLocal_1423 = false;
						}
						iLocal_1424 = 1;
						func_467(4, 0);
						func_1377();
						func_225(&uLocal_218);
					}
				}
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[6]), true, 0))
				{
					if (func_218())
					{
						_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					}
					func_943(&uLocal_262, 20);
					func_225(&uLocal_218);
					func_135(uParam0, 51);
					func_134(uParam0, 29);
				}
			}
			break;
		
		case 29:
			break;
	}
	return func_1289(uParam0) == 29;
}

int func_816(var uParam0)
{
	func_185();
	func_1377();
	func_176(uParam0);
	func_177();
	return 1;
}

int func_817(var uParam0)
{
	if (!func_440(uParam0, 1, -2590.037f, 465.5254f, 145.1149f, 79.8012f, 1, 1, 1))
	{
		return 0;
	}
	iLocal_337 = GRAPHICS::_0xBD3324281E8B9933(&(iLocal_93[47]), 2, 4, 0);
	return 1;
}

int func_818(var uParam0)
{
	int iVar0;
	
	if (func_8(uParam0, 8))
	{
		if (func_1383(uParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
			}
			else
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= (2 - 1))
			{
				if (iVar0 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
					{
						PED::SET_PED_INTO_VEHICLE(&(uLocal_46[iVar0]), iLocal_72, 0);
						AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
						AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, &(uLocal_46[iVar0]), 1);
					}
				}
				iVar0++;
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 3.5f);
		}
		else
		{
			return 0;
		}
		func_930(0f, 0f);
	}
	func_164(3);
	return 1;
}

int func_819(var uParam0)
{
	if (func_8(uParam0, 8))
	{
		func_1325(uParam0, 4);
	}
	func_434(&(uParam0->f_7375), 100f);
	func_435(&(uParam0->f_7375), 175f);
	func_175(0);
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_943(&uLocal_262, 0);
	func_944(&uLocal_278, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&iLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	return 1;
}

bool func_820(var uParam0)
{
	int iVar0;
	
	if (func_1289(uParam0) > -1 && func_1289(uParam0) < 29)
	{
		func_1290(uParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		func_1384(uParam0);
		func_1385(uParam0);
		func_1296(uParam0);
	}
	func_934(uParam0);
	switch (func_1289(uParam0))
	{
		case 0:
			if (func_1386(Global_35, -2586.254f, 455.4355f, 145.1662f, 0) < 12f)
			{
				PAD::DISABLE_CONTROL_ACTION(0, -17122892, false);
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35)
			{
				func_1320(func_1298(12, 5), 40f, 20f, 1092616192, 1086324736, 1082130432, 1077936128);
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, &(iLocal_93[13]), true, 0))
				{
					if (func_218())
					{
						_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					}
					func_462(&iLocal_41);
					MAP::CLEAR_GPS_CUSTOM_ROUTE();
					func_467(8, 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 256, 0);
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_72, 1f, 5, false);
					func_225(&uLocal_218);
					func_225(&uLocal_215);
					func_134(uParam0, 1);
				}
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_49))
			{
				TASK::CLEAR_PED_TASKS(iLocal_49, 1, 0);
				TASK::TASK_STAND_STILL(iLocal_49, -1);
			}
			if (func_1387(Global_35, &iLocal_201, 1, 0, 0, 1084227584, 100, 0, 0) || func_928(&uLocal_215) >= 5f)
			{
				func_467(7, 1);
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_72, 1f, 5, false);
				func_164(0);
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, true);
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, iLocal_72, 24, 5000);
				}
				func_225(&uLocal_215);
				func_134(uParam0, 2);
			}
			break;
		
		case 2:
			if (!iLocal_1436)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_49))
				{
					iLocal_1436 = 1;
					TASK::CLEAR_PED_TASKS(iLocal_49, 1, 0);
					TASK::TASK_STAND_STILL(iLocal_49, -1);
				}
			}
			if (func_928(&uLocal_215) >= 1.5f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_72, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1298(11, 0), 1f, 20000, 0.25f, false, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, &(uLocal_46[1]), -1, -1082130432, -1082130432, -1082130432);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
					TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_40);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
				}
				func_225(&uLocal_215);
				func_134(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_928(&uLocal_215) > 1f)
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (func_928(&uLocal_215) >= 2.5f)
			{
				if (func_218())
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
				}
				func_943(&uLocal_262, 20);
				func_225(&uLocal_218);
				func_135(uParam0, 51);
				func_225(&uLocal_215);
				func_134(uParam0, 29);
			}
			break;
		
		case 29:
			break;
	}
	return func_1289(uParam0) == 29;
}

int func_821(var uParam0)
{
	func_176(uParam0);
	func_177();
	func_1388();
	func_117(1, 16384, 1);
	return 1;
}

int func_822(var uParam0)
{
	if (func_8(uParam0, 8))
	{
	}
	return 1;
}

int func_823(var uParam0)
{
	if (func_8(uParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
				{
					PED::_0xE0B61ED8BB37712F(Global_35);
				}
			}
		}
		else
		{
			return 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_46[0])))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (PED::IS_PED_IN_VEHICLE(&(uLocal_46[0]), iLocal_72, false))
				{
					PED::_0xE0B61ED8BB37712F(&(uLocal_46[0]));
				}
			}
		}
	}
	func_167();
	ENTITY::_0x203BEFFDBE12E96A(iLocal_72, -2582.62f, 457.23f, 145.88f, 160.81f, 0, false, 1);
	func_386(uParam0, 524288);
	return 1;
}

int func_824(var uParam0)
{
	if (!func_934(uParam0))
	{
		return 0;
	}
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	if (func_1389(66))
	{
	}
	func_1390(uParam0, -1, 0);
	func_1(uParam0, 4);
	return 1;
}

int func_825(var uParam0)
{
	switch (func_1289(uParam0))
	{
		case 0:
			return 1;
	}
	return 0;
}

int func_826(var uParam0)
{
	return 1;
}

char* func_827()
{
	return "cutDeleteMe";
}

char* func_828(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_1391(iVar0);
}

char* func_829(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_1392(iVar0);
}

char* func_830(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case 1468884243:
			return "CANOE";
		
		case -283162583:
			return "WAGON02X";
		
		case 1874711736:
			return "WAGON04X";
		
		case -1758092337:
			return "WAGON05X";
		
		case 1596452133:
			return "CHUCKWAGON000X";
		
		case -293448458:
			return "WAGONCIRCUS02X";
		
		case 1761016051:
			return "COACH2";
		
		case 1192745176:
			return "PRIVATECOALCAR01X";
		
		case 703203753:
			return "NORTHPASSENGER01X";
		
		case 89913743:
			return "PRIVATESTEAMER01X";
		
		case 572854005:
			return "PRIVATEDINING01X";
		
		case 822759307:
			return "UTILLIWAG";
		
		case -623113369:
			return "SKIFF";
		
		case 1493442814:
			return "HANDCART";
		
		case -397513868:
			return "ROWBOATSWAMP";
		
		case -258491284:
			return "ROWBOATSWAMP02";
	}
	return "";
}

void func_831(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_396(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1393(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2))
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_9 != iParam3)
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_1394(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_1395(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1396(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2, 64);
		(uParam0->f_13[iVar0 /*12*/])->f_9 = iParam3;
		(uParam0->f_13[iVar0 /*12*/])->f_10 = iParam4;
		if (bParam5)
		{
			func_1397(uParam0->f_13[iVar0 /*12*/], 2);
		}
		else
		{
			func_1398(uParam0->f_13[iVar0 /*12*/], 2);
		}
	}
}

int func_832(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_401(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_401(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_401(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_401(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_401(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_401(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_401(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_401(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_833(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_834(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_835(var uParam0)
{
	return uParam0->f_862;
}

void func_836(var uParam0)
{
	int iVar0;
	
	if (func_1399(&iVar0))
	{
		if (func_591(iVar0, 0))
		{
			if (func_615(iVar0) == -525676072)
			{
				PED::_0xD710A5007C2AC539(Global_35, 1249071452, 0);
				func_643(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_0xD710A5007C2AC539(Global_35, 1606587013, 0);
			}
			if (!func_591(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_837(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_119(0, 0);
		func_1400(-1);
	}
	func_1401(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_834(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_834(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_834(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_834(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_834(*iParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam1, 1);
	}
	if (!func_834(*iParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_834(*iParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_834(*iParam0, 4) && !func_834(*iParam0, 2))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_834(*iParam0, 2048))
	{
		func_849(0, 0);
	}
	if (func_834(*iParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	if (func_834(*iParam0, 256))
	{
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
	}
	if (func_834(*iParam0, 8192))
	{
		func_1402();
	}
	if (!func_834(*iParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_834(*iParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_834(*iParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!func_834(*iParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_0xEE04C0AFD4EFAF0E(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_1403() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_406(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1404(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1405(2);
						func_1406(-1);
						func_1407(vVar3);
						func_1409(func_1408());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, 1, 0);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_834(*iParam0, 4096))
	{
		func_1410(Global_35);
	}
	if (!func_834(*iParam0, 1048576))
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!func_834(*iParam0, 2097152))
	{
		if (func_1411() || PED::_0x50F124E6EF188B22(Global_35))
		{
			func_1412(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_838(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_839(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_833(uParam0, 2048) && !func_406(func_1413(uParam0)))
	{
		bVar0 = VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4);
		iVar1 = PED::_0x4C8B59171957BCF7(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_833(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_919(iVar1, func_1413(uParam0), func_1414(uParam0), iVar2, 1073741824);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || func_833(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_919(iVar3, func_1413(uParam0), func_1414(uParam0), 2, 1073741824);
		}
	}
}

void func_840(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if ((func_833(uParam0, 268435456) && !func_406(func_1413(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_1413(uParam0) };
			func_919(iVar0, vVar1, func_1415(vVar1, Global_36, 1), 2, 1073741824);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_841(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_406(vParam1))
	{
		func_1416(uParam0, 2048, 1);
	}
	else
	{
		func_763(uParam0, 2048);
		if (bParam5)
		{
			func_763(uParam0, -2147483648);
		}
	}
}

void func_842(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/]))) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/])) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
				{
					if (!func_1417(uParam0->f_13[iVar0 /*12*/], 8))
					{
						if (func_705(func_1142(iVar1, 0, 1, 0)))
						{
							if (!func_1418(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 0, false, false);
							}
						}
						if (func_705(func_1142(iVar1, 1, 1, 0)))
						{
							if (!func_1418(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_843(var uParam0, bool bParam1)
{
	WEAPON::_0x67E21ACC5C0C970C(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::_0xD710A5007C2AC539(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_844(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	bVar4 = func_20() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_190);
			}
			func_1239(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1419(iParam1, 29, bVar4, 1, 0);
			func_1419(iParam1, 31, bVar4, 1, 0);
			func_1419(iParam1, 30, bVar4, 1, 0);
			func_1419(iParam1, 22, bVar4, 1, 0);
			func_1419(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1179(32768) && func_1420(1108822547, 8)) && func_1421(10, iParam3))
	{
		func_1422(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1247(iVar1, 1);
			if (func_1420(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_1421(iVar1, iParam3))
				{
				}
				else if ((func_1420(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_1420(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1419(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_1423(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_1419(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_1420(iVar3, 1))
							{
								func_1424(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

int func_845(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1425((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

Vector3 func_846(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_847(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_848(int iParam0, int iParam1)
{
	var uVar0;
	
	return func_1426(&uVar0, iParam0, iParam1);
}

void func_849(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_705(iVar3) && WEAPON::_0x705BE297EEBDB95D(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::_0xD3750CCC00635FC2(iVar3) * 4)
					{
						WEAPON::_0x106A811C6D3035F3(Global_35, WEAPON::_0x5C2EA6C44F515F34(iVar3), (WEAPON::_0xD3750CCC00635FC2(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::_0xD3750CCC00635FC2(iVar3))
				{
					iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (iParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_1427(1);
	}
}

void func_850(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_851(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_852(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_853(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_854(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_855(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_856(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_857(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_858(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_859(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_860(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_861(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (uParam0[iVar0 /*3*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_862(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_878((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_863(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0[iVar0 /*4*/] != 0)
		{
			if (uParam0[iVar0 /*4*/] == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_864(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_891((*uParam0)[iVar0 /*4*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_865(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*5*/]))
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0[iVar0 /*5*/], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_866(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_880((*uParam0)[iVar0 /*5*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_867(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*3*/]))
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0[iVar0 /*3*/], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_868(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_882((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_869(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_1428(iParam1);
	return (uParam0 && uVar0) != 0;
}

int func_870(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*67*/]))
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0[iVar0 /*67*/], sParam1) && ((*uParam0)[iVar0 /*67*/])->f_1 == iParam2)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_871(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_887((*uParam0)[iVar0 /*67*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_872(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_873(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*3*/]))
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0[iVar0 /*3*/], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_874(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!func_884((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_875()
{
	var uVar0;
	
	return uVar0;
}

int func_876(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*67*/]) && ((*uParam0)[iVar0 /*67*/])->f_1 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_877(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_878(var uParam0)
{
	return *uParam0 != 0;
}

void func_879(var uParam0)
{
	if (!func_908(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
		func_872(&(uParam0->f_1), 1);
	}
}

bool func_880(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_881(var uParam0)
{
	if (!func_908(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 2:
				TASK::REQUEST_WAYPOINT_RECORDING(*uParam0);
				break;
			
			case 1:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				break;
			
			default:
				break;
		}
		func_872(&(uParam0->f_3), 1);
	}
}

bool func_882(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_883(var uParam0)
{
	if (!func_908(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		func_872(&(uParam0->f_1), 1);
	}
}

bool func_884(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

int func_885(var uParam0)
{
	if (func_908(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_908(uParam0->f_1, 1))
	{
		func_1429(uParam0);
	}
	if (STREAMING::_0x85B8F04555AB49B8(*uParam0))
	{
		func_872(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

int func_886(var uParam0)
{
	if (func_908(*uParam0, 2))
	{
		return 1;
	}
	if (!func_908(*uParam0, 1))
	{
		func_1430(uParam0);
	}
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		func_872(uParam0, 2);
		return 1;
	}
	return 0;
}

bool func_887(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_888(var uParam0)
{
	char* sVar0;
	
	if (!func_908(uParam0->f_2, 1))
	{
		if (func_1431(uParam0))
		{
			if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1, 0))
			{
				sVar0 = func_1391(ENTITY::GET_ENTITY_MODEL(Global_35));
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, sVar0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, "player_zero") && func_310())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, "player_three") && func_1098())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_three", Global_35, 0);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
				func_872(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_889(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_890(var uParam0, int iParam1)
{
	if (!func_908(uParam0->f_1, 1))
	{
		if (!ANIMSCENE::_0x477122B8D05E7968(iParam1, 1, 0))
		{
			return;
		}
		ANIMSCENE::_0xDF7B5144E25CD3FE(iParam1, *uParam0);
		func_872(&(uParam0->f_1), 1);
	}
}

bool func_891(var uParam0)
{
	return *uParam0 != 0;
}

void func_892(var uParam0)
{
	if (!func_908(uParam0->f_2, 1))
	{
		PROPSET::_REQUEST_PROPSET(*uParam0);
		func_872(&(uParam0->f_2), 1);
	}
}

bool func_893(var uParam0)
{
	return *uParam0 != 0;
}

void func_894(var uParam0)
{
	if (!func_908(uParam0->f_3, 1))
	{
		WEAPON::_0x72D4CB5DB927009C(*uParam0, uParam0->f_1, uParam0->f_2);
		func_872(&(uParam0->f_3), 1);
	}
}

bool func_895(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_896(var uParam0)
{
	if (!func_908(uParam0->f_1, 1))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0);
		func_872(&(uParam0->f_1), 1);
	}
}

bool func_897(var uParam0)
{
	return func_1432(*uParam0);
}

void func_898(var uParam0)
{
	if (!func_908(uParam0->f_1, 1))
	{
		STREAMING::_REQUEST_IMAP(*uParam0);
		func_872(&(uParam0->f_1), 1);
	}
}

bool func_899(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_900(var uParam0)
{
	if (!func_908(uParam0->f_2, 1))
	{
		AUDIO::_0xE368E8422C860BA7(*uParam0, uParam0->f_1, -2);
		func_872(&(uParam0->f_2), 1);
	}
}

bool func_901(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_902(var uParam0)
{
	if (!func_908(uParam0->f_1, 1))
	{
		STREAMING::_0x2B6529C54D29037A(*uParam0);
		func_872(&(uParam0->f_1), 1);
	}
}

bool func_903(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

struct<4> func_904(int iParam0)
{
	struct<4> Var0;
	
	if (!func_194(iParam0))
	{
		return Var0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_3;
}

int func_905(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	char cVar2[128];
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_927(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return 0;
		}
	}
	if (!uParam0->f_2502)
	{
		iVar20 = uParam0->f_2509;
		while (iVar20 <= (uParam0->f_2508 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			if (func_1433(uParam0, 0))
			{
				if (func_1434(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1435(uParam0, 1, &iVar0))
					{
					}
					if (func_1436(uParam0, 3, &cVar2))
					{
					}
					if (func_1435(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1435(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1435(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1435(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1435(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1437(uParam0, &cVar2, uParam0->f_2504))
							{
								*((*uParam0)[uParam0->f_2504 /*16*/]) = { cVar2 };
								func_510((*uParam0)[uParam0->f_2504 /*16*/], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*(uParam0->f_641[uParam0->f_2505 /*16*/]) = { cVar2 };
							func_510(uParam0->f_641[uParam0->f_2505 /*16*/], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*(uParam0->f_1282[uParam0->f_2506 /*16*/]) = { cVar2 };
							func_510(uParam0->f_1282[uParam0->f_2506 /*16*/], 1048576);
							if (!bVar19 && func_222(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_1282[uParam0->f_2506 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1437(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*(uParam0->f_2243[uParam0->f_2507 /*16*/]) = { cVar2 };
							func_510(uParam0->f_2243[uParam0->f_2507 /*16*/], 1048576);
							uParam0->f_2507++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_2509 = iVar20 + 1;
				uParam0->f_2500 = 0;
				return 0;
			}
			iVar20++;
		}
		uParam0->f_2502 = 1;
	}
	if (!func_24(uParam0) && uParam0->f_2510 > 0)
	{
		iVar20 = uParam0->f_2511;
		while (iVar20 <= (uParam0->f_2510 - 1))
		{
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			iVar22 = 0;
			if (func_1433(uParam0, 12))
			{
				if (func_1435(uParam0, 13, &iVar0))
				{
				}
				if (func_1435(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (STREAMING::IS_MODEL_VALID(iVar22) && iVar22 != 0)
			{
				uParam0->f_2484[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_2511 = iVar20 + 1;
				uParam0->f_2500 = 0;
				return 0;
			}
			iVar20++;
		}
	}
	uParam0->f_2500 = 1;
	uParam0->f_2509 = 0;
	uParam0->f_2511 = 0;
	uParam0->f_2502 = 0;
	uParam0->f_2503 = 1;
	if (!bParam4)
	{
		func_38(uParam0);
	}
	return 1;
}

void func_906(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_222((*uParam0)[iVar0 /*16*/], 1048576) && ((*uParam0)[iVar0 /*16*/])->f_9 == 8) && !func_222((*uParam0)[iVar0 /*16*/], 1))
		{
			func_1438((*uParam0)[iVar0 /*16*/]);
		}
		iVar0++;
	}
}

int func_907(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_878((*uParam0)[iVar1 /*3*/]))
		{
			if (func_869(((*uParam0)[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_1439((*uParam0)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (func_880((*uParam1)[iVar1 /*5*/]))
		{
			if (func_869(((*uParam1)[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!func_1440((*uParam1)[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (func_882((*uParam2)[iVar1 /*3*/]))
		{
			if (func_869(((*uParam2)[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_1441((*uParam2)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (func_884((*uParam3)[iVar1 /*3*/]))
		{
			if (func_869(((*uParam3)[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_885((*uParam3)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_869(uParam4->f_1, iParam12))
	{
		if (!func_886(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_887((*uParam5)[iVar1 /*67*/]))
		{
			if (func_869(((*uParam5)[iVar1 /*67*/])->f_3, iParam12))
			{
				if (func_1431((*uParam5)[iVar1 /*67*/]))
				{
					if (!func_909((*uParam5)[iVar1 /*67*/]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_887((*uParam5)[iVar1 /*67*/]))
		{
			if (func_869(((*uParam5)[iVar1 /*67*/])->f_3, iParam12))
			{
				if (func_1431((*uParam5)[iVar1 /*67*/]))
				{
					if (func_909((*uParam5)[iVar1 /*67*/]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_889(((*uParam5)[iVar1 /*67*/])->f_4[iVar2 /*3*/]))
							{
								if (!func_1442(((*uParam5)[iVar1 /*67*/])->f_4[iVar2 /*3*/], ((*uParam5)[iVar1 /*67*/])->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (func_891((*uParam6)[iVar1 /*4*/]))
		{
			if (func_869(((*uParam6)[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!func_1443((*uParam6)[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (func_893((*uParam7)[iVar1 /*5*/]))
		{
			if (func_869(((*uParam7)[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!func_1444((*uParam7)[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (func_895((*uParam8)[iVar1 /*3*/]))
		{
			if (func_869(((*uParam8)[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_1445((*uParam8)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (func_897((*uParam9)[iVar1 /*3*/]))
		{
			if (func_869(((*uParam9)[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_1446((*uParam9)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (func_899((*uParam10)[iVar1 /*4*/]))
		{
			if (func_869(((*uParam10)[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!func_1447((*uParam10)[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (func_901((*uParam11)[iVar1 /*3*/]))
		{
			if (func_869(((*uParam11)[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_1448((*uParam11)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_908(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_909(var uParam0)
{
	if (func_908(uParam0->f_2, 2))
	{
		return 1;
	}
	if (!func_908(uParam0->f_2, 1))
	{
		func_888(uParam0);
	}
	if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1, 1, 0))
	{
		func_872(&(uParam0->f_2), 2);
		return 1;
	}
	return 0;
}

int func_910(int iParam0)
{
	if (!func_194(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		
		case 1:
		case 5:
		case 13:
			return 2;
		
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		
		case 6:
			return 4;
		
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		
		case 20:
			return 8;
		
		case 4:
		case 15:
		case 18:
			return 5;
		
		case 60:
		case 77:
			return 13;
		
		case 65:
			return 14;
		
		case 34:
			return 23;
		
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		
		case 10:
			return 21;
		
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		
		case 35:
			return 19;
		
		case 25:
			return 8;
		
		case 70:
			return 4;
		
		case 71:
			return 13;
		
		default:
			return 1;
	}
	return -1;
}

int func_911(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	if (!func_529(iParam1))
	{
		return 0;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && func_264(iParam1)) && func_1449(iParam1) == *uParam2)
	{
		return 1;
	}
	*uParam2 = func_1450(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, iParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, bParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1451(uParam0, *uParam2, iParam1, bParam3, (iParam8 && iParam12), bParam10, bParam13);
		func_1452(iParam1);
		return 1;
	}
	return 0;
}

bool func_912(var uParam0)
{
	if (!func_406(uParam0->f_5417))
	{
		return true;
	}
	switch (uParam0->f_607)
	{
		case 7:
			func_1453(uParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		
		case 15:
			func_1453(uParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		
		case 8:
			func_1453(uParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		
		case 25:
			func_1453(uParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		
		case 14:
			func_1453(uParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		
		case 9:
			func_1453(uParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		
		case 13:
			func_1453(uParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		
		case 11:
			func_1453(uParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		
		case 26:
			func_1453(uParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		
		case 53:
			func_1453(uParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		
		case 16:
			func_1453(uParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		
		case 17:
			func_1453(uParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		
		case 19:
			func_1453(uParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		
		case 24:
			func_1453(uParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		
		case 23:
			func_1453(uParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		
		case 22:
			func_1453(uParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		
		case 36:
			func_1453(uParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		
		case 28:
			func_1453(uParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		
		case 30:
			func_1453(uParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		
		case 37:
			func_1453(uParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		
		case 45:
			func_1453(uParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		
		case 48:
			func_1453(uParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		
		case 49:
			func_1453(uParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		
		case 50:
			func_1453(uParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		
		case 51:
			func_1453(uParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		
		case 55:
			func_1453(uParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		
		case 76:
			func_1453(uParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		
		case 73:
			func_1453(uParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		
		case 75:
			func_1453(uParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		
		case 69:
			func_1453(uParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		
		case 70:
			func_1453(uParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		
		case 71:
			func_1453(uParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		
		case 72:
			func_1453(uParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_406(uParam0->f_5417);
}

int func_913(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	
	uParam1->f_10 = func_272(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_406(uParam1->f_6))
		{
		}
	}
	bVar0 = func_405();
	if (*uParam1)
	{
		if (bVar0 && !func_333(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_1454(5))
			{
				func_541(5);
				func_1455(5);
				func_1406(0);
				func_1405(0);
			}
		}
	}
	if (func_1456(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_333(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_333(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_333(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_333(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_220(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_544(iVar1))
	{
		bVar3 = true;
		if (func_1457(iVar1))
		{
			bVar4 = true;
		}
		if (func_551(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (iVar5 && !uParam1->f_5)
			{
				func_552(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1454(0) && func_1454(1))
			{
				func_1458(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1459())
			{
				func_1460();
			}
			func_1406(0);
			func_1405(0);
			func_1407(uParam1->f_6);
		}
	}
	if (!func_544(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1461(uParam1->f_10) == 0 || func_1462(uParam1->f_10) == 0) || func_1463(uParam1->f_10) == 0)
			{
				func_1464(uParam1->f_10);
			}
			func_1465(uParam1->f_10);
			func_1466(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_220(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_544(iVar1))
	{
		bVar3 = true;
		if (func_1457(iVar1))
		{
			bVar4 = true;
		}
		if (func_551(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_0x083D497D57B7400F(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_406(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_1467(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (iVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_0xB48050D326E9A2F3(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_0xD2CB0FB0FDCB473D(iVar6, 0);
				}
			}
			Var8 = { func_1468(uParam1->f_10) };
			Var10 = { func_1469() };
			func_1470(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_537(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_1471(uParam1->f_10);
		if (uParam1->f_2 && !func_406(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_536(uParam1->f_10);
	if (func_537(uParam1->f_10))
	{
		iVar16 = func_268(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

int func_914(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

int func_915(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

int func_916(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_1472(iParam1))
	{
		return 0;
	}
	iVar0 = func_1473(iParam1, vParam2, fParam5, bParam8, 1, bParam6, iParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_0x899A04AFCC725D04(iVar0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_917(var uParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_5411))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_5411, true, true);
		}
		if ((uParam1 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_5411, -1)) && !func_120(uParam0, 32768))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_5411, 1, 0);
		}
		if (!func_20() == 0)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5411, 1030835986);
		}
		else
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5411, PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(PLAYER::PLAYER_PED_ID()));
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_5411, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5411, 136, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5411, 136, false);
		}
	}
}

float func_918(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_919(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_1474(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_1475(iParam0))
	{
		if (func_915(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_401(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_919(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_919(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_401(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_401(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_401(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_401(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_401(iParam5, 129))
	{
		if (func_401(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_401(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_401(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_401(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_1475(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_401(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_401(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_920(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = 5;
			*uParam2 = 8;
			break;
		
		case 14:
			*uParam1 = 9;
			*uParam2 = 17;
			break;
		
		case 16:
			*uParam1 = 9;
			*uParam2 = 18;
			break;
		
		case 33:
			*uParam1 = 17;
			*uParam2 = 18;
			break;
		
		case 29:
			*uParam1 = 9;
			*uParam2 = 17;
			break;
		
		case 30:
			*uParam1 = 6;
			*uParam2 = 18;
			break;
		
		case 20:
		case 26:
		case 37:
		case 40:
		case 54:
			*uParam1 = 22;
			*uParam2 = 5;
			break;
		
		case 11:
			*uParam1 = 12;
			*uParam2 = 18;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_921(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	switch (func_1476(uParam0))
	{
		case 0:
			if (!func_1477(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return 1;
			}
			func_1478(uParam0, 1);
			break;
		
		case 1:
			func_1479(uParam0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_837(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1478(uParam0, 2);
			break;
		
		case 2:
			if (func_1480(uParam0))
			{
				func_1481(uParam0->f_8, 5000f, 0);
				PED::_0x4759CC730F947C81();
				func_27(&(uParam0->f_3), 1);
				func_1478(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_928(&(uParam0->f_3)) >= 1f)
			{
				func_1478(uParam0, 4);
			}
			break;
		
		case 4:
			if (!func_29())
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(uParam0->f_2))
				{
					CAM::DESTROY_CAM(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			func_1482(&iVar1, 0);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			func_1478(uParam0, 0);
			return 1;
	}
	return 0;
}

void func_922(var uParam0)
{
	var uVar0;
	
	if (!func_120(uParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(uParam0->f_607)}, 8);
		func_1483(&uVar0, 15000, 0, 0, 0, 1);
		func_103(uParam0, 524288);
	}
}

int func_923(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = func_35(uParam0);
	if (func_162(uParam0, func_33(uParam0)) <= 3)
	{
		iVar0 = func_33(uParam0);
	}
	Var1 = { func_1484(uParam0, iVar0) };
	if (func_1486(&(uParam0->f_10792), Var1, func_1485(&(uParam0->f_10792)), 0))
	{
		func_140(uParam0, func_33(uParam0), 262144);
		if (func_1487(&(uParam0->f_10792), 524288))
		{
			func_386(uParam0, 67108864);
			func_1488(&(uParam0->f_10792), 524288);
		}
		func_1489(&(uParam0->f_7375), &(uParam0->f_10792));
		return 1;
	}
	return 0;
}

void func_924(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 - (uParam0->f_5307 && iParam1));
}

int func_925(var uParam0, struct<4> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return 1;
	}
	if (func_8(uParam0, 16777216))
	{
		func_1490(uParam0);
		func_1491(uParam0);
		return 1;
	}
	if (func_1492(Param1, &(uParam0->f_7375), uParam0))
	{
		return 1;
	}
	if (func_154(uParam0) == 0)
	{
		func_965(uParam0);
	}
	if (func_29())
	{
		if (!func_8(uParam0, 262144))
		{
			CAM::STOP_GAMEPLAY_HINT(true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_609.f_2))
			{
				CAM::DESTROY_CAM(uParam0->f_609.f_2, false);
			}
			func_51(&(uParam0->f_10792));
			func_1493(uParam0);
			func_924(uParam0, 524288);
			func_1324(uParam0);
			func_149(uParam0, 30f);
			func_150(uParam0, 40f);
			func_99(uParam0, 262144);
		}
		if (!func_8(uParam0, 524288) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_7375.f_804))
		{
			func_99(uParam0, 524288);
		}
	}
	return 0;
}

int func_926(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	char[] cVar9[8];
	
	iVar0 = 1;
	if (!func_1494(func_61(uParam0), func_120(uParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1495(func_61(uParam0)) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
	{
		if (!func_1496(func_61(uParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_436(uParam0, func_33(uParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_904(uParam0->f_607)}, 3);
	if (!func_23(&(uParam0->f_8269)))
	{
		if (!func_927(&(uParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_927(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	
	uParam0->f_2500 = 0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_2495);
	if (!bVar0)
	{
		if (!DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam1)))
		{
			return 1;
		}
		if (!bParam4)
		{
			uParam0->f_2495 = DATAFILE::_0xCA56DD6AB7A39F64(MISC::GET_HASH_KEY(sParam1));
		}
		else
		{
			uParam0->f_2495 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
		}
	}
	uParam0->f_2501 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_2495);
	if (!uParam0->f_2501)
	{
		if (!bParam4)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_1497(uParam0);
	uParam0->f_2495.f_2 = 0;
	uParam0->f_2508 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_2495));
	uParam0->f_2495.f_2 = 12;
	uParam0->f_2510 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_2495));
	uParam0->f_2501 = 1;
	uParam0->f_2509 = 0;
	uParam0->f_2511 = 0;
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

float func_928(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_512(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_564() - uParam0->f_1);
}

int func_929()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			if (&Global_1934765->f_39[iVar0] != &Global_40.f_283[iVar0])
			{
				return 1;
			}
		}
		else if (&Global_1934765->f_39[iVar0] != &Global_1058888->f_40567[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_930(int iParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

bool func_931()
{
	switch (iLocal_367)
	{
		case 0:
			func_1498(Global_35, 61, 1, 1, 0);
			func_1499(1);
			break;
		
		case 1:
			if (!func_1500())
			{
				func_1499(2);
			}
			break;
		
		case 2:
			break;
	}
	return iLocal_367 == 2;
}

bool func_932(var uParam0)
{
	return func_1501(uParam0);
}

bool func_933(var uParam0)
{
	bool bVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!&iLocal_180[0])
		{
			iLocal_180[0] = 1;
			func_1502(uParam0);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (func_1383(uParam0))
	{
	}
	else
	{
		bVar0 = true;
	}
	if (func_33(uParam0) == 0)
	{
		if (func_1503(uParam0, 1))
		{
		}
		else
		{
			bVar0 = true;
		}
	}
	if (func_33(uParam0) >= 3 && func_33(uParam0) <= 4)
	{
		if (func_1504(uParam0, 1))
		{
		}
		else
		{
			bVar0 = true;
		}
		func_1505(uParam0, 0);
	}
	if (func_33(uParam0) >= 6 && func_33(uParam0) <= 7)
	{
		func_1506(uParam0, 1);
		func_1507(uParam0, 1);
	}
	return !bVar0;
}

int func_934(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = (iVar0 && func_1508(uParam0, iVar1));
		iVar1++;
	}
	return iVar0;
}

int func_935(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;
	
	if (bParam3)
	{
		uParam0->f_871++;
		if (uParam0->f_871 < 10)
		{
			return (func_833(uParam0, 256) && !func_833(uParam0, 4194304));
		}
		uParam0->f_871 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_1509(uParam0, sParam1);
	if (!func_833(uParam0, 64))
	{
		if (!func_406(func_1510(uParam0)))
		{
			func_763(uParam0, 64);
		}
		else
		{
			vVar0 = { func_1511(uParam0) };
			if (!func_406(vVar0))
			{
				func_1512(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_1386(Global_35, func_1510(uParam0), 1);
	if (func_833(uParam0, 128) || func_833(uParam0, 256))
	{
		if ((fVar3 >= func_1513(uParam0) && !bParam2) || !ANIMSCENE::_0x25557E324489393C(uParam0->f_804))
		{
			if (uParam0->f_889)
			{
				func_1514();
				uParam0->f_889 = 0;
			}
			func_1515(uParam0);
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_804))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_804);
			}
			func_1516(uParam0);
			func_1416(uParam0, 128, 1);
			func_1416(uParam0, 256, 1);
			func_1416(uParam0, 4096, 1);
			func_1416(uParam0, 32768, 1);
			func_1416(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_1517(uParam0) || bParam2)
	{
		if (!func_833(uParam0, 128))
		{
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_804))
			{
				if (func_1517(uParam0) >= func_1513(uParam0))
				{
				}
				Var4 = { func_1518(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_1519(uParam0);
				}
				Var4 = { func_1518(uParam0) };
				iVar12 = 256;
				if (!func_833(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_804 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_800), iVar12, &Var4, false, true);
				func_1520(uParam0, 0, 0, 0, 0);
				func_763(uParam0, 128);
			}
		}
	}
	if (func_833(uParam0, 128))
	{
		if (func_833(uParam0, 256) && !func_833(uParam0, 4194304))
		{
			return 1;
		}
		func_1521(uParam0);
		if (!uParam0->f_889)
		{
			if (func_1522())
			{
				func_1182(4096);
				uParam0->f_889 = 1;
			}
		}
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_804, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_1523(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_822[iVar14 /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_822[iVar14 /*9*/], &Var15))
					{
						if (!(uParam0->f_822[iVar14 /*9*/])->f_8)
						{
							(uParam0->f_822[iVar14 /*9*/])->f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_804, uParam0->f_822[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, uParam0->f_822[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_833(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_804, &Var15))
				{
					if (!func_833(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_804, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_804, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_804, &Var15);
						}
						func_763(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_763(uParam0, 256);
			func_1416(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_936()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 71)
	{
		iVar1 = iVar0;
		func_1524(iVar1);
		iVar0++;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[37])))
	{
		iLocal_334 = PED::_0x4C39C95AE5DB1329(&(iLocal_93[37]), false, 15);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[41])))
	{
		iLocal_335 = PED::_0x4C39C95AE5DB1329(&(iLocal_93[41]), false, 15);
	}
	PATHFIND::_0x19C7567D2F2287D6(&(iLocal_93[41]), 7);
}

int func_937()
{
	int iVar0[4];
	int iVar5;
	
	if (func_466(18))
	{
		return 1;
	}
	iVar0[0] = 41;
	iVar0[1] = 19;
	iVar0[2] = 48;
	iVar0[3] = 37;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[&iVar0[iVar5]])))
		{
			return 0;
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		func_1525(&(iLocal_93[&iVar0[iVar5]]), 0, 0, 0);
		PATHFIND::_0xE5EF9DE716FF737E(&(iLocal_93[&iVar0[iVar5]]), 0, 0);
		iVar5++;
	}
	func_467(18, 1);
	return 1;
}

void func_938(var uParam0)
{
	func_1312(uParam0);
	if (func_33(uParam0) >= 5)
	{
		func_1337();
	}
}

void func_939(var uParam0)
{
	func_1526(uParam0, &(uLocal_46[0]), 14, 0);
	func_1526(uParam0, &(uLocal_46[1]), 13, 0);
}

void func_940(var uParam0)
{
	func_145(uParam0, Global_35, "JOHN", 0);
	func_145(uParam0, &(uLocal_46[0]), "TEEN_JACK", 0);
	func_145(uParam0, &(uLocal_46[1]), "ABIGAIL", 0);
}

void func_941(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_942(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_943(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_944(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_945(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_946(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_947(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_948(int iParam0)
{
	int iVar0;
	
	if (!func_456(iParam0))
	{
		return 0;
	}
	if (!func_458(func_457(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_459(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(_NAMESPACE48::_0x31C70A716CAE1FEE(func_459(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _NAMESPACE48::_0x31C70A716CAE1FEE(func_459(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	_NAMESPACE48::_0x7B204F88F6C3D287(func_459(iParam0));
	return 1;
}

void func_949(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_456(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_950(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_951(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_952(var uParam0)
{
	if (func_33(uParam0) == 0)
	{
		if (!TASK::_0x841475AC96E794D1(iLocal_165))
		{
			iLocal_165 = TASK::_0xF533D68FF970D190(func_1298(0, 16), -439112356, 1f, 0, 0);
		}
	}
}

void func_953(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_33(uParam0);
	if (iVar2 == iLocal_16)
	{
		iVar0 = 14;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_17)
	{
		iVar0 = 14;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_18)
	{
		iVar0 = 15;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_19)
	{
		iVar0 = 15;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_20)
	{
		iVar0 = 16;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_21)
	{
		iVar0 = 16;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_22)
	{
		iVar0 = 17;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_23)
	{
		iVar0 = 17;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_24)
	{
		iVar0 = 18;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_25)
	{
		iVar0 = 18;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_26)
	{
		iVar0 = 19;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_27)
	{
		iVar0 = 20;
		iVar1 = 0;
	}
	CLOCK::SET_CLOCK_TIME(iVar0, iVar1, 0);
}

void func_954(var uParam0)
{
	if (func_33(uParam0) == iLocal_16)
	{
		func_1325(uParam0, 0);
	}
	else if (func_33(uParam0) == iLocal_19 || func_33(uParam0) == iLocal_20)
	{
		func_1325(uParam0, 1);
	}
	else if (func_33(uParam0) == iLocal_22 || func_33(uParam0) == iLocal_23)
	{
		func_1325(uParam0, 2);
	}
	else if (func_33(uParam0) == iLocal_24 || func_33(uParam0) == iLocal_25)
	{
		func_1325(uParam0, 3);
	}
	else if (func_33(uParam0) == iLocal_26 || func_33(uParam0) == iLocal_27)
	{
		func_1325(uParam0, 4);
	}
}

int func_955(var uParam0)
{
	if (func_33(uParam0) == iLocal_16)
	{
	}
	else if (func_33(uParam0) == iLocal_20)
	{
	}
	else if (func_33(uParam0) == iLocal_23)
	{
	}
	else if (func_33(uParam0) == iLocal_25)
	{
	}
	else if (func_33(uParam0) == iLocal_27)
	{
	}
	return 0;
}

void func_956(var uParam0, int iParam1)
{
	uParam0->f_8265 = iParam1;
	func_103(uParam0, 2048);
}

int func_957(var uParam0)
{
	func_961(uParam0);
	if (func_33(uParam0) == iLocal_16)
	{
		return func_1527(uParam0);
	}
	else if (func_33(uParam0) == iLocal_20)
	{
		return func_1528(uParam0);
	}
	else if (func_33(uParam0) == iLocal_23)
	{
		return func_1529(uParam0);
	}
	else if (func_33(uParam0) == iLocal_25)
	{
		return func_1530(uParam0);
	}
	else if (func_33(uParam0) == iLocal_27)
	{
		return func_1531(uParam0);
	}
	return 1;
}

void func_958(var uParam0, int iParam1)
{
	uParam0->f_8266 = iParam1;
	func_103(uParam0, 1024);
}

int func_959(var uParam0)
{
	if (func_33(uParam0) == iLocal_16)
	{
		return func_1532(uParam0);
	}
	else if (func_33(uParam0) == iLocal_20)
	{
		return func_1533(uParam0);
	}
	else if (func_33(uParam0) == iLocal_23)
	{
		return func_1534(uParam0);
	}
	else if (func_33(uParam0) == iLocal_25)
	{
		return func_1535(uParam0);
	}
	else if (func_33(uParam0) == iLocal_27)
	{
	}
	return 1;
}

void func_960(var uParam0, int iParam1)
{
	uParam0->f_8267 = iParam1;
	func_103(uParam0, 131072);
}

void func_961(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = func_33(uParam0);
	switch (iLocal_356)
	{
		case 0:
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			func_1536();
			if (iVar0 == iLocal_16)
			{
				func_1537(1);
			}
			else if ((iVar0 == iLocal_17 || iVar0 == iLocal_18) || iVar0 == iLocal_19)
			{
				MISC::_0x59174F1AFE095B5A(821931868, true, true, false, 0f, false);
				func_1537(4);
			}
			else if (iVar0 == iLocal_20)
			{
				MISC::_0x59174F1AFE095B5A(433385945, true, true, false, 0f, false);
				func_1537(5);
			}
			else if ((((iVar0 == iLocal_21 || iVar0 == iLocal_22) || iVar0 == iLocal_23) || iVar0 == iLocal_24) || iVar0 == iLocal_25)
			{
				MISC::_0x59174F1AFE095B5A(1420204096, true, true, false, 0f, false);
				func_1537(6);
			}
			else if (iVar0 == iLocal_26)
			{
				MISC::_0x59174F1AFE095B5A(-416908843, true, true, false, 0f, false);
				func_511(&uLocal_258, 30f);
				func_1537(7);
			}
			else if (iVar0 == iLocal_27)
			{
				MISC::_SET_WEATHER_TYPE_TRANSITION(-416908843, -1233681761, 0.7f, 1);
				func_1537(8);
			}
			break;
		
		case 1:
			if (func_984(uParam0))
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				MISC::_0x59174F1AFE095B5A(1632247697, false, true, true, 30f, false);
				func_1537(2);
			}
			break;
		
		case 2:
			if (iVar0 == iLocal_16 && func_162(uParam0, iVar0) == 5)
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				MISC::_0x59174F1AFE095B5A(821931868, false, true, true, 60f, false);
				func_1537(3);
			}
			break;
		
		case 3:
			if (iLocal_280 >= 8)
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				MISC::_0x59174F1AFE095B5A(821931868, true, true, false, 0f, false);
				func_1537(4);
			}
			break;
		
		case 4:
			if (func_984(uParam0))
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				MISC::_0x59174F1AFE095B5A(433385945, false, true, true, 60f, false);
				func_1537(5);
			}
			break;
		
		case 5:
			if (iVar0 == iLocal_20 && func_162(uParam0, iVar0) == 5)
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				MISC::_0x59174F1AFE095B5A(1420204096, false, true, true, 105f, false);
				func_1537(6);
			}
			break;
		
		case 6:
			if (iVar0 == iLocal_25 && func_162(uParam0, iVar0) == 5)
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				MISC::_0x59174F1AFE095B5A(-416908843, false, true, true, 30f, false);
				func_225(&uLocal_258);
				func_1537(7);
			}
			break;
		
		case 7:
			fVar1 = func_928(&uLocal_258);
			if (fVar1 >= 30f)
			{
				fVar2 = func_1538(((fVar1 - 30f) / 35f), 0f, 1f);
				fVar3 = func_1539(0f, 0.7f, fVar2);
				MISC::_SET_WEATHER_TYPE_TRANSITION(-416908843, -1233681761, fVar3, 1);
				if (fVar2 == 1f)
				{
					func_1537(8);
				}
			}
			break;
		
		case 8:
			break;
	}
}

void func_962(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::_0xFD6943B6DF77E449(iParam0, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
}

void func_963(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!func_253(iParam0))
	{
		return;
	}
	if (func_1540(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_5))
	{
		iVar0 = ((*Global_1888801)[iParam0 /*35*/])->f_5;
	}
	else
	{
		iVar0 = func_1541(iParam0);
	}
	bVar1 = func_257(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_1542(iParam0);
		if (iParam2 > iVar2 || !func_717(func_1543(iParam0)))
		{
			func_1544(iParam0, func_291());
			func_1545(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_293(iParam0, 33554432);
			if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_294(iParam0, 33554432);
		func_1544(iParam0, -15);
		if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_1546(iParam0);
}

void func_964(var uParam0)
{
	int iVar0;
	
	iVar0 = func_33(uParam0);
	func_1547(uParam0);
	if (iVar0 >= iLocal_18 && iVar0 <= iLocal_24)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (iVar0 >= iLocal_22 && iVar0 <= iLocal_24)
	{
		PED::_0xAB0D553FE20A6E25(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		POPULATION::_0xF45E46DEECF7DF6E(10240, 0, 0, -1, -1);
	}
	if (!iLocal_187)
	{
		iLocal_187 = 1;
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_93[5])))
		{
			func_951(&(iLocal_93[5]), 0, 0, 0, 0, 0);
		}
	}
	if (iVar0 >= iLocal_22 && iVar0 <= iLocal_23)
	{
		if (&iLocal_185[0])
		{
			if (PED::GET_VEHICLE_PED_IS_ENTERING(Global_35) == iLocal_72 || PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, true))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -17122892, false);
			}
		}
	}
	func_1548(uParam0);
	func_1549(1);
	func_961(uParam0);
	func_1550(uParam0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), 1171995096, 1, 0, -1);
	func_1551(uParam0);
	if (iVar0 == iLocal_24 || iVar0 == iLocal_25)
	{
		func_1552(uParam0);
	}
	if ((iVar0 == iLocal_16 || iVar0 == iLocal_17) || iVar0 == iLocal_26)
	{
		if (func_1553())
		{
			func_1554(uParam0, "MAR2_FKIRA", "", 1, 0);
		}
	}
}

void func_965(var uParam0)
{
	if (!func_23(&(uParam0->f_8269)))
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 268435456))
	{
		return;
	}
	func_1555(uParam0);
}

void func_966(var uParam0)
{
	if (!func_8(uParam0, 8388608))
	{
		if (func_162(uParam0, func_33(uParam0)) == 5 || func_162(uParam0, func_33(uParam0)) == 6)
		{
			if (!func_218())
			{
				if (func_928(&(uParam0->f_13112)) < 5f)
				{
					PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 0);
				}
			}
			else
			{
				func_225(&(uParam0->f_13112));
			}
		}
	}
	else
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	}
}

void func_967(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 8388608))
	{
		if (func_1556(uParam0))
		{
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			func_1557();
		}
		else
		{
			HUD::_0x8BC7C1F929D07BF3(-1679307491);
			func_1558(uParam0, func_33(uParam0), 8388608);
		}
	}
}

void func_968(var uParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_8(uParam0, 256))
	{
		return;
	}
	if (!func_8(uParam0, 1048576))
	{
		if (func_244() || func_54())
		{
			func_99(uParam0, 1048576);
		}
	}
	else if (!func_244() && !func_54())
	{
		func_924(uParam0, 1048576);
	}
	if (!func_8(uParam0, 134217728))
	{
		if ((func_8(uParam0, 1048576) && !func_121(uParam0, func_33(uParam0), 524288)) && !func_121(uParam0, func_33(uParam0), 1))
		{
			if (!Global_1935630->f_12)
			{
				WEAPON::_0xB832F1A686B9B810(Global_35, 1, 0);
				func_99(uParam0, 134217728);
			}
		}
	}
	else if ((!func_8(uParam0, 1048576) || func_121(uParam0, func_33(uParam0), 524288)) || func_121(uParam0, func_33(uParam0), 1))
	{
		if (!Global_1935630->f_12)
		{
			WEAPON::_0xB832F1A686B9B810(Global_35, 0, 0);
			func_924(uParam0, 134217728);
		}
	}
}

void func_969(var uParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_121(uParam0, func_33(uParam0), 1) && !func_121(uParam0, func_33(uParam0), 1048576))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, true);
	}
}

void func_970(var uParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 2097152))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	}
}

void func_971(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ITEMSET::IS_ITEMSET_VALID(iLocal_14))
	{
		return;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(iLocal_14);
	if (uParam0->f_13179 == -1 || uParam0->f_13179 > (iVar0 - 1))
	{
		uParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = uParam0->f_13179;
	while (iVar1 >= 0)
	{
		iVar3 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_14));
		if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			ITEMSET::REMOVE_FROM_ITEMSET(iVar3, iLocal_14);
		}
		iVar2++;
		if (iVar2 > 5)
		{
		}
		else
		{
			iVar1 = (iVar1 + -1);
		}
	}
	uParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		uParam0->f_13179 = (ITEMSET::GET_ITEMSET_SIZE(iLocal_14) - 1);
	}
}

int func_972(var uParam0)
{
	int iVar0;
	
	if ((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_260(uParam0->f_5423[iVar0 /*65*/]))
		{
			func_1014(uParam0->f_5423[iVar0 /*65*/]);
		}
		iVar0++;
	}
	return 0;
}

int func_973(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_132(iParam1);
	if (!func_1559(iVar0))
	{
		return 0;
	}
	iVar1 = func_1560(iParam2);
	if (!func_1561(iVar1))
	{
		return 0;
	}
	if (!func_1562(uParam0, iParam1, iParam2))
	{
		return 1;
	}
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_1[iVar0 /*22*/][iVar1]);
	if (StackVal)
	{
		return 1;
	}
	return 0;
}

int func_974(var uParam0, int iParam1)
{
	return (uParam0->f_1[func_132(iParam1) /*22*/])->f_21;
}

int func_975(var uParam0, int iParam1)
{
	return 1;
}

void func_976(var uParam0)
{
	if (!func_20() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_225(&(uParam0->f_603));
	}
}

void func_977(var uParam0, int iParam1, int iParam2)
{
	(uParam0->f_1[func_132(iParam1) /*22*/])->f_10 = iParam2;
	BUILTIN::SETTIMERA(0);
}

int func_978(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (!func_26(&(uParam0->f_13109)))
	{
		func_27(&(uParam0->f_13109), 0);
	}
	else if (func_928(&(uParam0->f_13109)) >= 10f)
	{
		return 1;
	}
	iVar0 = 1;
	if (func_261(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_262(uParam0->f_5421))
		{
			iVar2 = func_263(uParam0->f_5421, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar3 = func_1563(uParam0->f_5421, iVar1);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3) && !PED::_0xA0BC8FAED8CFEB3C(iVar3))
					{
						iVar0 = 0;
					}
				}
				else if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2)) && VEHICLE::_0xEA44E97849E9F3DD(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2)))
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar5 = VEHICLE::_0xA8BA0BAE0173457B(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2), iVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar5))
						{
							if (!PED::_0xA0BC8FAED8CFEB3C(iVar5))
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
				}
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iLocal_14))
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_14);
		iVar7 = MISC::_0xEE04C0AFD4EFAF0E(iVar6);
		if (ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar7))
			{
				iVar8 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar8) && !PED::_0xA0BC8FAED8CFEB3C(iVar8))
				{
					iVar0 = 0;
				}
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(iVar7) && ENTITY::IS_ENTITY_A_VEHICLE(iVar7)) && VEHICLE::_0xEA44E97849E9F3DD(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7)))
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 6)
				{
					iVar10 = VEHICLE::_0xA8BA0BAE0173457B(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7), iVar9);
					if (!ENTITY::IS_ENTITY_DEAD(iVar10))
					{
						if (!PED::_0xA0BC8FAED8CFEB3C(iVar10))
						{
							iVar0 = 0;
						}
					}
					iVar9++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_979(var uParam0)
{
	return func_928(&(uParam0->f_603));
}

int func_980(var uParam0)
{
	if ((func_120(uParam0, 4) || func_120(uParam0, 128)) && !func_102())
	{
		return 0;
	}
	return 1;
}

int func_981(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_8(uParam0, -2147483648))
	{
		return 1;
	}
	if (func_973(uParam0, iParam1, 4))
	{
		if (func_33(uParam0) != 25 && func_33(uParam0) != 26)
		{
			if (!func_8(uParam0, 512) && !func_120(uParam0, 4))
			{
				func_36(uParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				*Global_1347394 = { Var0 };
				Global_1347394->f_3 = Var0.f_3;
				Global_1572864->f_10 = func_132(iParam2);
			}
		}
		func_1564(uParam0);
		if (func_1565(uParam0))
		{
			func_1566(uParam0);
		}
		if (func_121(uParam0, func_33(uParam0), 33554432) && func_8(uParam0, 524288))
		{
			UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
		}
		func_924(uParam0, 524288);
		func_1567(&(uParam0->f_7375), 4);
		if (func_1556(uParam0))
		{
			func_140(uParam0, func_33(uParam0), 8388608);
			HUD::_0x4CC5F2FC1332577F(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			func_1557();
		}
		return 1;
	}
	return 0;
}

void func_982(var uParam0)
{
	func_1568(uParam0);
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
}

int func_983(var uParam0, int iParam1)
{
	struct<4> Var0;
	
	if (func_120(uParam0, 16384))
	{
		if (func_923(uParam0))
		{
			func_51(&(uParam0->f_10792));
			func_924(uParam0, 2097152);
			func_271(uParam0, 16384);
			func_103(uParam0, 128);
			return 1;
		}
		return 0;
	}
	if (!func_8(uParam0, 4))
	{
		func_975(uParam0, iParam1);
		func_99(uParam0, 4);
	}
	Var0 = { func_1484(uParam0, iParam1) };
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		if (func_8(uParam0, 2097152))
		{
			if (func_923(uParam0))
			{
				func_924(uParam0, 2097152);
				func_925(uParam0, Var0);
			}
			return 0;
		}
		else
		{
			return func_925(uParam0, Var0);
		}
	}
	else if (func_8(uParam0, 2097152))
	{
		if (func_923(uParam0))
		{
			func_924(uParam0, 2097152);
			func_1491(uParam0);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		return func_925(uParam0, Var0);
	}
	return 1;
}

bool func_984(var uParam0)
{
	return func_1569(&(uParam0->f_7375));
}

void func_985(var uParam0)
{
	char cVar0[64];
	
	if (((!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12) || PED::IS_PED_FATALLY_INJURED(Global_35)) || ENTITY::GET_ENTITY_HEALTH(Global_35) <= 0)
	{
		if (func_1570(uParam0))
		{
			func_447(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1571(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

int func_986(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(uParam0, func_33(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (func_260(uParam0->f_5423[iVar1 /*65*/]))
		{
			if (func_1572((uParam0->f_5423[iVar1 /*65*/])->f_7, iParam1))
			{
				func_1573(uParam0, uParam0->f_5423[iVar1 /*65*/], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_987(var uParam0)
{
	char cVar0[64];
	
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		if (func_1574(uParam0))
		{
			func_447(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1571(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

void func_988(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	
	switch (func_1575(&iVar0))
	{
		case 1:
			func_1576(uParam0, Var1, 1, 0);
			break;
		
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_13178))
			{
				uParam0->f_13178 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (func_195(iVar0) && iVar0 == func_12(uParam0->f_607))
			{
				iVar9 = 1;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13178, iVar9);
			break;
	}
}

int func_989(var uParam0, int iParam1)
{
	if (func_8(uParam0, 4194304))
	{
		return 0;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return 0;
	}
	return 1;
}

int func_990(var uParam0, int iParam1)
{
	char cVar0[32];
	
	if (func_8(uParam0, 16777216))
	{
		func_1490(uParam0);
		func_924(uParam0, 65536);
		return 0;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return 0;
	}
	cVar0 = { func_1484(uParam0, iParam1) };
	if (func_1577(uParam0, &cVar0))
	{
		if (!func_8(uParam0, 65536))
		{
			func_99(uParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_991(var uParam0, int iParam1)
{
	func_1578(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, func_231(uParam0, iParam1));
}

void func_992(var uParam0, int iParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 67108864))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_5303))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_5303));
		}
		uParam0->f_7374 = 0;
		func_977(uParam0, iParam1, 2);
		func_134(uParam0, 0);
		func_135(uParam0, 0);
		func_99(uParam0, 8);
		func_924(uParam0, -2147483648);
		func_140(uParam0, func_33(uParam0), 67108864);
		func_924(uParam0, 4);
		func_924(uParam0, 8192);
		func_924(uParam0, 536870912);
		func_271(uParam0, 4);
		func_65(0);
		func_64(0);
		func_924(uParam0, 2);
		func_45();
		uParam0->f_5302 = 0;
		func_1579(uParam0);
		if ((func_35(uParam0) == 25 || func_35(uParam0) == 26) && func_82(32768))
		{
			func_386(uParam0, 524288);
		}
		if (func_20() == 0)
		{
			if (PED::_0xB655DB7582AEC805(Global_35))
			{
				func_21(0);
				PED::_0xF6262491C7704A63(Global_35, 0);
			}
			else if (Global_1935630->f_12)
			{
				func_1580(1, 1);
			}
		}
	}
}

void func_993(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (!func_202(0, 0, 1) || iParam0)
	{
		iVar0 = func_1096();
		iVar1 = func_1099(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_1581(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_1581(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 1, fVar3);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 2, fVar2);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}
}

int func_994(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_1582(bParam1, iParam2, iParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((iParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (iParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (iParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_995(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;
	
	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1583(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1584(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_1583(sVar0, iParam1, 0, 0, 1, 1);
}

int func_996(var uParam0)
{
	return 1;
}

int func_997(var uParam0)
{
	return 1;
}

int func_998(var uParam0)
{
	return 1;
}

int func_999(int iParam0)
{
	float fVar0;
	
	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_1000(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 0:
			return 0;
		
		case 2:
			return 2;
		
		default:
			break;
	}
	return 0;
}

int func_1001(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		default:
			break;
	}
	return 0;
}

void func_1002(int iParam0, float fParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = func_1585(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), iParam2);
}

float func_1003(int iParam0)
{
	float fVar0;
	
	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_1004(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		
		case 1:
			return 85;
		
		case 2:
			return 86;
		
		default:
			break;
	}
	return -1;
}

char* func_1005(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		
		case 1:
			return "StaminaCoreValue";
		
		case 2:
			return "DeadEyeCoreValue";
		
		default:
			break;
	}
	return "";
}

void func_1006(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 || iParam1);
}

int func_1007(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_20() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1008(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	if (!func_1007(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1009(var uParam0, int iParam1)
{
	var uVar0;
	
	return func_1013(uParam0, iParam1, &uVar0);
}

void func_1010(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_462(&iVar0);
}

void func_1011(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!func_1013(uParam0, iParam1, &iVar0))
	{
		return;
	}
	func_1586(uParam0->f_5423[iVar0 /*65*/], iParam2);
}

void func_1012(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!func_1013(uParam0, iParam1, &iVar0))
	{
		return;
	}
	func_1587(uParam0->f_5423[iVar0 /*65*/], iParam2);
}

int func_1013(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_260(uParam0->f_5423[iVar0 /*65*/]))
		{
			if (&uParam0->f_5423[iVar0 /*65*/] == iParam1)
			{
				*uParam2 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1014(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (func_528(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_528(uParam0, 1024);
	if (func_528(uParam0, 128) || bVar0)
	{
		if (func_528(uParam0, 4096))
		{
			if (!func_528(uParam0, 2048))
			{
				iVar1 = MAP::GET_BLIP_FROM_ENTITY(*uParam0);
				if (MAP::DOES_BLIP_EXIST(iVar1))
				{
					MAP::_0x662D364ABF16DE2F(iVar1, -1186550032);
				}
				func_1587(uParam0, 2048);
				return;
			}
		}
		else if (func_528(uParam0, 2048))
		{
			iVar2 = MAP::GET_BLIP_FROM_ENTITY(*uParam0);
			if (MAP::DOES_BLIP_EXIST(iVar2))
			{
				MAP::_0xB059D7BD3D78C16F(iVar2, -1186550032);
			}
			func_1586(uParam0, 2048);
		}
		if (func_528(uParam0, 512))
		{
			if (func_529(uParam0->f_10))
			{
				if (func_914(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1588(uParam0->f_10))
					{
						func_534(uParam0->f_10, 1);
						func_1589(uParam0->f_10, 0);
					}
				}
				else if ((func_1588(uParam0->f_10) && !bVar0) && !func_528(uParam0, 16384))
				{
					func_534(uParam0->f_10, 0);
					func_1589(uParam0->f_10, 1);
				}
			}
		}
		else if (!MAP::DOES_BLIP_EXIST(uParam0->f_8))
		{
			if (!MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(*uParam0)))
			{
				if (func_914(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = MAP::_0x23F74C2FDA6E7C61(422991367, *uParam0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
					{
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(*uParam0)) && uParam0->f_8 != MAP::GET_BLIP_FROM_ENTITY(*uParam0)) || !func_914(Global_35, *uParam0, 150f, 1))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_8));
		}
	}
	else if (func_528(uParam0, 512))
	{
		if (func_529(uParam0->f_10))
		{
			if (func_1588(uParam0->f_10))
			{
				func_534(uParam0->f_10, 0);
				func_1589(uParam0->f_10, 1);
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(uParam0->f_8))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_8));
	}
}

void func_1015(int iParam0)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_12 != ((*Global_1360165)[iParam0 /*1157*/])->f_13 || func_1059(iParam0, 36, 1))
	{
		func_1057(iParam0, 36, 1);
		((*Global_1360165)[iParam0 /*1157*/])->f_12 = ((*Global_1360165)[iParam0 /*1157*/])->f_13;
		func_1590(iParam0, &(((*Global_1360165)[iParam0 /*1157*/])->f_2));
	}
}

void func_1016(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_75[iParam0])))
	{
		OBJECT::DELETE_OBJECT(iLocal_75[iParam0]);
	}
}

void func_1017(int* iParam0)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0, 0))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar12))
			{
				iVar1[iVar0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar12);
				if (!ENTITY::IS_ENTITY_DEAD(&(iVar1[iVar0])))
				{
					PED::_0xF9ACF4A08098EA25(&(iVar1[iVar0]), true);
					func_919(&(iVar1[iVar0]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 3f, 3f, 0f), ENTITY::GET_ENTITY_HEADING(*iParam0), 2, 1073741824);
				}
			}
		}
		iVar0++;
	}
}

int func_1018(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_456(iParam0))
	{
		return 0;
	}
	if (!func_1591(iParam0) && iParam1)
	{
		return 0;
	}
	return func_1592(iParam0, 1);
}

void func_1019(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!func_456(iParam0))
	{
		return;
	}
	if (!func_1592(iParam0, 1))
	{
		return;
	}
	if (!func_1592(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_1591(iParam0)) && func_1593(iParam0))
	{
		return;
	}
	func_171(iParam0, 1);
	func_1594(iParam0);
	if (func_458(func_457(iParam0)))
	{
		iVar0 = func_459(iParam0);
		if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		_NAMESPACE48::_0xBB68908CD11AEBDC(iVar0);
		_NAMESPACE48::_0xB65E7F733956CF25(iVar0);
		if (iParam2 && !_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
		{
			_NAMESPACE48::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			_NAMESPACE48::_0x7B204F88F6C3D287(iVar0);
		}
		func_171(iParam0, 16);
	}
	if (func_1592(iParam0, 128) && !bParam3)
	{
		func_1595(iParam0, 0);
	}
}

void func_1020(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_1021(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_1032(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_1022(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_1023(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_1024(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_1025(int iParam0, int iParam1)
{
	if (!func_1024(iParam0))
	{
		return false;
	}
	return ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1) != 0;
}

void func_1026(int iParam0, int iParam1)
{
	if (!func_1024(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 || iParam1);
}

void func_1027(int iParam0, int iParam1)
{
	if (!func_1024(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 - ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1));
}

int func_1028(int iParam0)
{
	if (func_1596())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1029(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

int func_1030()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	iVar1 = -1;
	if (Global_1934765->f_337 <= 0)
	{
		return -1;
	}
	iVar2 = (Global_1934765->f_337 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = func_1597((Global_1934765->f_318[iVar2 /*3*/])->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

int func_1031(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!MISC::IS_BIT_SET(Global_1934765->f_301, 0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1934765->f_301, 1))
	{
		return 0;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		MISC::_0x243CEDE8F916B994();
		return 0;
	}
	iVar0 = func_1598(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_1599(iVar1, 1);
		if (iVar2 == 0 || iVar2 == -1439599467)
		{
		}
		else if (MISC::IS_BIT_SET(&(Global_1934765->f_302[iVar0]), iVar1))
		{
			MISC::_0xD3F943B88F55376A(iVar2);
		}
		else
		{
			MISC::_0x2916B30DC6C41179(iVar2);
		}
		iVar1++;
	}
	return func_1600(iParam0, bParam1, fParam2);
}

bool func_1032(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_1033(int iParam0)
{
	int iVar0;
	
	iVar0 = func_490(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1601(iVar0);
}

int func_1034(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_1602(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_1035()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1036(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		
		case -2106214197:
			return 104;
		
		case -2101264851:
			return 195;
		
		case -2073072369:
			return 59;
		
		case -2069570138:
			return 25;
		
		case -2066272360:
			return 357;
		
		case -2058120606:
			return 197;
		
		case -2038424081:
			return 49;
		
		case -2034257789:
			return 92;
		
		case -2022369555:
			return 265;
		
		case -2021582629:
			return 112;
		
		case -2020023971:
			return 278;
		
		case -1957523409:
			return 208;
		
		case -1952856164:
			return 165;
		
		case -1949204933:
			return 276;
		
		case -1925798111:
			return 41;
		
		case -1861414976:
			return 353;
		
		case -1852605133:
			return 10;
		
		case -1847672446:
			return 376;
		
		case -1840704908:
			return 289;
		
		case -1838712533:
			return 26;
		
		case -1838352012:
			return 57;
		
		case -1835851517:
			return 56;
		
		case -1831552326:
			return 123;
		
		case -1825294305:
			return 266;
		
		case -1824738758:
			return 277;
		
		case -1818850842:
			return 253;
		
		case -1799960545:
			return 257;
		
		case -1764522338:
			return 372;
		
		case -1763509974:
			return 141;
		
		case -1741667789:
			return 64;
		
		case -1738165526:
			return 3;
		
		case -1718674470:
			return 23;
		
		case -1717960576:
			return 61;
		
		case -1711895055:
			return 13;
		
		case -1706438978:
			return 233;
		
		case -1700452710:
			return 53;
		
		case -1674179981:
			return 55;
		
		case -1666278201:
			return 33;
		
		case -1612662716:
			return 201;
		
		case -1610966108:
			return 322;
		
		case -1582926490:
			return 146;
		
		case -1579419919:
			return 147;
		
		case -1558439474:
			return 301;
		
		case -1556423728:
			return 218;
		
		case -1532284567:
			return 116;
		
		case -1530132748:
			return 311;
		
		case -1524512402:
			return 209;
		
		case -1523910291:
			return 155;
		
		case -1455998786:
			return 338;
		
		case -1447311849:
			return 215;
		
		case -1436021162:
			return 172;
		
		case -1433686245:
			return 12;
		
		case -1425209566:
			return 32;
		
		case -1419919497:
			return 22;
		
		case -1414537028:
			return 73;
		
		case -1405998267:
			return 105;
		
		case -1344601768:
			return 314;
		
		case -1340339190:
			return 331;
		
		case -1329135070:
			return 140;
		
		case -1318987693:
			return 222;
		
		case -1311865656:
			return 37;
		
		case -1296807958:
			return 320;
		
		case -1283202000:
			return 321;
		
		case -1282804314:
			return 270;
		
		case -1278074582:
			return 171;
		
		case -1271608261:
			return 98;
		
		case -1257057567:
			return 21;
		
		case -1241340344:
			return 300;
		
		case -1236261996:
			return 235;
		
		case -1232809834:
			return 113;
		
		case -1230112817:
			return 170;
		
		case -1223121209:
			return 126;
		
		case -1215445344:
			return 131;
		
		case -1209597203:
			return 333;
		
		case -1206122982:
			return 156;
		
		case -1187950766:
			return 45;
		
		case -1179948750:
			return 136;
		
		case -1170496998:
			return 46;
		
		case -1164215952:
			return 234;
		
		case -1151084372:
			return 124;
		
		case -1145519186:
			return 100;
		
		case -1124061431:
			return 242;
		
		case -1123615607:
			return 29;
		
		case -1080627546:
			return 378;
		
		case -1077783786:
			return 194;
		
		case -1063147448:
			return 151;
		
		case -1062490780:
			return 79;
		
		case -1060078174:
			return 239;
		
		case -1056767524:
			return 176;
		
		case -1053549743:
			return 58;
		
		case -1029225159:
			return 106;
		
		case -1014145132:
			return 288;
		
		case -978957786:
			return 251;
		
		case -959357075:
			return 36;
		
		case -950054349:
			return 152;
		
		case -939420910:
			return 44;
		
		case -939114198:
			return 221;
		
		case -919512195:
			return 40;
		
		case -911126844:
			return 336;
		
		case -897750037:
			return 334;
		
		case -895073533:
			return 356;
		
		case -879507474:
			return 236;
		
		case -868076593:
			return 84;
		
		case -857964358:
			return 83;
		
		case -853383233:
			return 65;
		
		case -851626677:
			return 339;
		
		case -828139293:
			return 260;
		
		case -811637947:
			return 245;
		
		case -796902762:
			return 88;
		
		case -792853067:
			return 254;
		
		case -789397228:
			return 262;
		
		case -785605431:
			return 250;
		
		case -781631220:
			return 345;
		
		case -764163380:
			return 228;
		
		case -748969569:
			return 78;
		
		case -741351766:
			return 60;
		
		case -736853952:
			return 366;
		
		case -734416508:
			return 340;
		
		case -699277634:
			return 4;
		
		case -693828600:
			return 323;
		
		case -683458244:
			return 80;
		
		case -666014935:
			return 157;
		
		case -664512648:
			return 67;
		
		case -664252410:
			return 191;
		
		case -644722288:
			return 261;
		
		case -640663440:
			return 214;
		
		case -639037538:
			return 185;
		
		case -628542779:
			return 71;
		
		case -622554983:
			return 370;
		
		case -618620429:
			return 187;
		
		case -545450213:
			return 377;
		
		case -538889627:
			return 175;
		
		case -538880323:
			return 174;
		
		case -534215902:
			return 130;
		
		case -524787708:
			return 352;
		
		case -524145696:
			return 117;
		
		case -523522517:
			return 364;
		
		case -515561750:
			return 238;
		
		case -503955743:
			return 249;
		
		case -502473159:
			return 343;
		
		case -502324015:
			return 8;
		
		case -491981251:
			return 186;
		
		case -468693731:
			return 111;
		
		case -464836488:
			return 268;
		
		case -460024530:
			return 316;
		
		case -434590080:
			return 225;
		
		case -404698347:
			return 205;
		
		case -397760715:
			return 143;
		
		case -389056691:
			return 272;
		
		case -360036154:
			return 368;
		
		case -356975260:
			return 103;
		
		case -355531636:
			return 337;
		
		case -351362068:
			return 220;
		
		case -350863510:
			return 162;
		
		case -349064220:
			return 362;
		
		case -334729750:
			return 69;
		
		case -333135263:
			return 361;
		
		case -330120947:
			return 360;
		
		case -306246697:
			return 375;
		
		case -299522880:
			return 213;
		
		case -270094635:
			return 267;
		
		case -261141318:
			return 30;
		
		case -259123672:
			return 244;
		
		case -254562075:
			return 132;
		
		case -238080464:
			return 121;
		
		case -233743613:
			return 273;
		
		case -223469678:
			return 204;
		
		case -220282381:
			return 139;
		
		case -191424539:
			return 149;
		
		case -182889087:
			return 177;
		
		case -154581735:
			return 309;
		
		case -150493654:
			return 97;
		
		case -144653976:
			return 219;
		
		case -129643890:
			return 11;
		
		case -108780030:
			return 317;
		
		case -108307814:
			return 28;
		
		case -99303535:
			return 167;
		
		case -86199844:
			return 145;
		
		case -80522843:
			return 154;
		
		case -76237062:
			return 373;
		
		case -75024673:
			return 258;
		
		case -63926460:
			return 89;
		
		case -61411516:
			return 325;
		
		case -35658630:
			return 24;
		
		case -25901845:
			return 290;
		
		case -9438024:
			return 129;
		
		case -1:
			return 0;
		
		case 0:
			return 1;
		
		case 2639906:
			return 153;
		
		case 8924991:
			return 297;
		
		case 26054262:
			return 248;
		
		case 26245360:
			return 237;
		
		case 38162571:
			return 74;
		
		case 52706132:
			return 243;
		
		case 54073871:
			return 76;
		
		case 74872959:
			return 348;
		
		case 93964309:
			return 358;
		
		case 94263042:
			return 291;
		
		case 106479759:
			return 101;
		
		case 141950038:
			return 114;
		
		case 153152452:
			return 86;
		
		case 168171957:
			return 183;
		
		case 171107021:
			return 381;
		
		case 171499483:
			return 283;
		
		case 187862543:
			return 16;
		
		case 192515737:
			return 14;
		
		case 198200492:
			return 241;
		
		case 210001842:
			return 62;
		
		case 224551212:
			return 142;
		
		case 227918160:
			return 182;
		
		case 229371495:
			return 344;
		
		case 235928616:
			return 286;
		
		case 249726958:
			return 164;
		
		case 269047710:
			return 54;
		
		case 273461605:
			return 81;
		
		case 280705402:
			return 95;
		
		case 282809459:
			return 119;
		
		case 299694527:
			return 275;
		
		case 300221584:
			return 138;
		
		case 302205488:
			return 216;
		
		case 311708813:
			return 198;
		
		case 320943355:
			return 133;
		
		case 330026330:
			return 66;
		
		case 345808947:
			return 287;
		
		case 356365161:
			return 47;
		
		case 371850993:
			return 281;
		
		case 373691918:
			return 188;
		
		case 374115931:
			return 90;
		
		case 405586984:
			return 34;
		
		case 407136781:
			return 173;
		
		case 409602249:
			return 293;
		
		case 417081698:
			return 17;
		
		case 417525590:
			return 303;
		
		case 420709909:
			return 42;
		
		case 426191476:
			return 15;
		
		case 434558613:
			return 199;
		
		case 439465264:
			return 108;
		
		case 440043364:
			return 31;
		
		case 442317566:
			return 302;
		
		case 449774763:
			return 227;
		
		case 459290420:
			return 52;
		
		case 469053995:
			return 231;
		
		case 473295046:
			return 2;
		
		case 476714362:
			return 232;
		
		case 478884033:
			return 148;
		
		case 479419429:
			return 305;
		
		case 509781469:
			return 350;
		
		case 514932331:
			return 246;
		
		case 522677506:
			return 279;
		
		case 526003171:
			return 355;
		
		case 527226204:
			return 159;
		
		case 544152906:
			return 115;
		
		case 559573222:
			return 252;
		
		case 582380806:
			return 326;
		
		case 588987611:
			return 179;
		
		case 618699440:
			return 77;
		
		case 630808005:
			return 128;
		
		case 651395116:
			return 294;
		
		case 657241756:
			return 189;
		
		case 664571177:
			return 312;
		
		case 665676602:
			return 296;
		
		case 682839815:
			return 327;
		
		case 689024866:
			return 134;
		
		case 689930684:
			return 207;
		
		case 704802028:
			return 178;
		
		case 723021499:
			return 264;
		
		case 747514327:
			return 354;
		
		case 753127042:
			return 48;
		
		case 757752139:
			return 109;
		
		case 784360470:
			return 330;
		
		case 791041526:
			return 18;
		
		case 817925178:
			return 240;
		
		case 868326136:
			return 285;
		
		case 885203519:
			return 379;
		
		case 885378256:
			return 351;
		
		case 929582877:
			return 335;
		
		case 931649776:
			return 224;
		
		case 932909855:
			return 298;
		
		case 945612176:
			return 247;
		
		case 965986934:
			return 19;
		
		case 976539083:
			return 310;
		
		case 1010885152:
			return 7;
		
		case 1015669983:
			return 122;
		
		case 1050128548:
			return 284;
		
		case 1064154891:
			return 110;
		
		case 1067254646:
			return 319;
		
		case 1074873669:
			return 144;
		
		case 1140218954:
			return 27;
		
		case 1151197909:
			return 256;
		
		case 1159471771:
			return 329;
		
		case 1160698568:
			return 135;
		
		case 1164928979:
			return 158;
		
		case 1166612791:
			return 347;
		
		case 1167397384:
			return 307;
		
		case 1177464213:
			return 38;
		
		case 1186594126:
			return 230;
		
		case 1193080109:
			return 184;
		
		case 1203043430:
			return 274;
		
		case 1205826474:
			return 85;
		
		case 1207048789:
			return 169;
		
		case 1213993593:
			return 160;
		
		case 1216784232:
			return 269;
		
		case 1221801385:
			return 374;
		
		case 1238086793:
			return 313;
		
		case 1250636944:
			return 259;
		
		case 1302228510:
			return 315;
		
		case 1306158345:
			return 202;
		
		case 1321892118:
			return 324;
		
		case 1350371763:
			return 20;
		
		case 1350391819:
			return 75;
		
		case 1352699670:
			return 271;
		
		case 1358491857:
			return 263;
		
		case 1360745816:
			return 82;
		
		case 1376646519:
			return 223;
		
		case 1399676951:
			return 210;
		
		case 1410198831:
			return 217;
		
		case 1433244935:
			return 166;
		
		case 1441416901:
			return 211;
		
		case 1446719356:
			return 380;
		
		case 1453909576:
			return 125;
		
		case 1466547629:
			return 120;
		
		case 1478132521:
			return 367;
		
		case 1485195808:
			return 50;
		
		case 1485494263:
			return 102;
		
		case 1488286867:
			return 295;
		
		case 1488453464:
			return 212;
		
		case 1497516462:
			return 5;
		
		case 1500064347:
			return 72;
		
		case 1509509592:
			return 35;
		
		case 1512816328:
			return 168;
		
		case 1517904467:
			return 206;
		
		case 1522511407:
			return 280;
		
		case 1549124796:
			return 342;
		
		case 1557082963:
			return 163;
		
		case 1582370975:
			return 359;
		
		case 1583012985:
			return 304;
		
		case 1591451572:
			return 365;
		
		case 1607768502:
			return 9;
		
		case 1609506757:
			return 107;
		
		case 1626481264:
			return 118;
		
		case 1643531967:
			return 127;
		
		case 1649996811:
			return 181;
		
		case 1660024373:
			return 150;
		
		case 1665756137:
			return 93;
		
		case 1672143046:
			return 383;
		
		case 1691618738:
			return 68;
		
		case 1698972798:
			return 318;
		
		case 1703398561:
			return 332;
		
		case 1703426636:
			return 43;
		
		case 1708045337:
			return 346;
		
		case 1713221411:
			return 137;
		
		case 1743048395:
			return 226;
		
		case 1744443559:
			return 349;
		
		case 1766284049:
			return 94;
		
		case 1776302352:
			return 363;
		
		case 1804403874:
			return 382;
		
		case 1822001510:
			return 200;
		
		case 1846061697:
			return 99;
		
		case 1850082804:
			return 196;
		
		case 1867912207:
			return 70;
		
		case 1884271742:
			return 51;
		
		case 1926308480:
			return 96;
		
		case 1932172605:
			return 328;
		
		case 1944170089:
			return 161;
		
		case 1947931439:
			return 229;
		
		case 1952610440:
			return 203;
		
		case 1954026328:
			return 371;
		
		case 1982676972:
			return 91;
		
		case 2008888900:
			return 180;
		
		case 2016141805:
			return 6;
		
		case 2019386373:
			return 190;
		
		case 2024121624:
			return 193;
		
		case 2024383613:
			return 369;
		
		case 2024769126:
			return 308;
		
		case 2037589949:
			return 63;
		
		case 2051822093:
			return 299;
		
		case 2077022393:
			return 306;
		
		case 2080210939:
			return 282;
		
		case 2091701359:
			return 39;
		
		case 2109952320:
			return 192;
		
		case 2113625508:
			return 341;
		
		case 2127577956:
			return 255;
		
		case 2136753624:
			return 87;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1037(bool bParam0)
{
	if (func_20() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_1038(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		
		case -1719060085:
			return 16;
		
		case -999503751:
			return 1;
		
		case -525676072:
			return 4;
		
		case 81053684:
			return 8;
		
		case -413129408:
			return 32;
		
		default:
			break;
	}
	return 0;
}

void func_1039(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_1040(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

void func_1041(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1603((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1603(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_195(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_207(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

void func_1042(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_508(iParam0))
	{
		return;
	}
	func_1604(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		MISC::SET_BIT((*Global_1935183->f_73[iParam0 /*7*/])[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT((*Global_1935183->f_73[iParam0 /*7*/])[iVar0], iVar1);
	}
}

void func_1043(var uParam0)
{
	struct<5> Var0;
	
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1044(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1045(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1046()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1047(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			func_1605(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_1048(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -2586.746f, 455.989f, 145.1865f;
				
				case 1:
					return -2588.783f, 455.7817f, 145.3602f;
				
				case 2:
					return -2589.046f, 456.7274f, 145.3536f;
				
				case 3:
					return -2590.393f, 457.2662f, 146.9661f;
				
				case 4:
					return -2590.188f, 465.3483f, 145.1389f;
				
				case 5:
					return -2584.782f, 458.5872f, 145.9429f;
				
				case 6:
					return -2595.036f, 458.8084f, 146.8021f;
				
				case 7:
					return -2595.052f, 458.498f, 146.856f;
				
				case 8:
					return -2594.097f, 461.8778f, 147.1982f;
				
				case 9:
					return -2594.515f, 456.2865f, 146.7582f;
				
				case 10:
					return -2595.036f, 458.7538f, 146.7694f;
				
				case 11:
					return -2594.247f, 456.5854f, 146.7954f;
				
				case 12:
					return -2596.503f, 455.4873f, 146.5358f;
				
				case 13:
					return -2594.388f, 456.6125f, 146.7351f;
				
				case 14:
					return -2590.954f, 457.4777f, 146.0147f;
				
				case 15:
					return -2585.316f, 453.7336f, 146.1715f;
				
				case 16:
					return -2593.741f, 460.9864f, 146.0973f;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return -2647.668f, 299.2318f, 145.2499f;
				
				case 1:
					return -2604.679f, 552.1307f, 142.1814f;
				
				case 2:
					return -2647.013f, 300.843f, 145.2535f;
				
				case 3:
					return -2605.465f, 550.9451f, 142.1916f;
				
				case 4:
					return -2592.134f, 459.7199f, 145.9973f;
				
				case 5:
					return -2644.872f, 300.0393f, 144.9326f;
				
				case 6:
					return -2607.054f, 552.817f, 142.1526f;
				
				case 7:
					return -2309.915f, -321.1098f, 155.2797f;
				
				case 8:
					return -2388.951f, 532.7006f, 123.1557f;
				
				case 9:
					return -2289.114f, -383.5995f, 155.6583f;
				
				case 10:
					return -2188.866f, 489.7421f, 117.6383f;
				
				case 11:
					return -1919.906f, -344.1326f, 185.7074f;
				
				case 12:
					return -1787.491f, -247.7803f, 178.5887f;
				
				case 13:
					return -1892.819f, -389.917f, 175.0166f;
				
				case 14:
					return -1723.412f, -420.7011f, 151.708f;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1902.554f, -371.5399f, 179.6923f;
				
				case 1:
					return -1901.859f, -369.9359f, 179.7262f;
				
				case 2:
					return -1897.032f, -369.5795f, 179.1797f;
				
				case 3:
					return -1808.469f, -302.4285f, 169.2919f;
				
				case 4:
					return -1809.183f, -301.217f, 169.5941f;
				
				case 5:
					return -1810.922f, -302.8901f, 169.4813f;
				
				case 6:
					return -1723.384f, -422.6013f, 151.6136f;
				
				case 7:
					return -1722.192f, -423.3843f, 151.3282f;
				
				case 8:
					return -1720.812f, -421.3965f, 151.4349f;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1772.359f, -390.8267f, 155.8394f;
				
				case 1:
					return -1773.077f, -384.4674f, 156.1619f;
				
				case 2:
					return -1765.179f, -380.6753f, 156.7404f;
				
				case 3:
					return -1765.397f, -383.6883f, 156.7404f;
				
				case 4:
					return -1766.233f, -380.8104f, 157.8358f;
				
				case 5:
					return -1766.54f, -380.5857f, 157.8381f;
				
				case 6:
					return -1763.391f, -380.4604f, 158.1181f;
				
				case 7:
					return -1764.437f, -384.5692f, 158.1416f;
				
				case 8:
					return -1763.43f, -380.2439f, 157.0715f;
				
				case 9:
					return -1761.347f, -381.8299f, 157.5802f;
				
				case 10:
					return -1766.61f, -380.5329f, 157.8568f;
				
				case 11:
					return -1763.767f, -382.906f, 156.744f;
				
				case 12:
					return -1763.377f, -382.4361f, 156.7087f;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1772.729f, -385.5931f, 156.202f;
				
				case 1:
					return -1773.117f, -384.7082f, 156.2646f;
				
				case 2:
					return -1769.702f, -390.9376f, 155.7195f;
				
				case 3:
					return -1769.702f, -390.9376f, 155.7195f;
				
				case 4:
					return -1778.406f, -433.606f, 154.1022f;
				
				case 5:
					return -1777.946f, -437.416f, 154.1129f;
				
				case 6:
					return -1775.025f, -437.8545f, 154.0295f;
				
				case 7:
					return -1776.067f, -440.774f, 153.9408f;
				
				case 8:
					return -1776.855f, -443.4073f, 153.9866f;
				
				case 9:
					return -1776.759f, -445.002f, 153.9408f;
				
				case 10:
					return -1761.259f, -241.1607f, 181.7539f;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1797.824f, -330.1971f, 165.6205f;
				
				case 1:
					return -1732.542f, -417.1653f, 153.0966f;
				
				case 2:
					return -1797.402f, -332.1769f, 165.2754f;
				
				case 3:
					return -1734.663f, -415.9405f, 153.5341f;
				
				case 4:
					return -1799.45f, -332.9374f, 165.0418f;
				
				case 5:
					return -1730.493f, -414.8712f, 153.3663f;
				
				case 6:
					return -1660.14f, -218f, 165.08f;
				
				case 7:
					return -1764.039f, 154.5435f, 150.8086f;
				
				case 8:
					return -1765.176f, 154.1076f, 150.7286f;
				
				case 9:
					return -1660.729f, -217.0848f, 164.2941f;
				
				case 10:
					return -1765.922f, 151.8433f, 150.572f;
				
				case 11:
					return -1767.667f, 153.5475f, 150.6169f;
				
				case 12:
					return -1731.229f, -85.7608f, 180.5966f;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return -1719.385f, 6.2737f, 159.9617f;
				
				case 1:
					return -1719.16f, 7.4723f, 159.8044f;
				
				case 2:
					return -1721.93f, 5.1201f, 159.8568f;
				
				case 3:
					return -1728.253f, -49.7882f, 174.0451f;
				
				case 4:
					return -1764.087f, 154.5057f, 150.8037f;
				
				case 5:
					return -1765.212f, 154.0348f, 150.7225f;
				
				case 6:
					return -1724.693f, -37.8461f, 171.2594f;
				
				case 7:
					return -1766.017f, 151.7574f, 150.5643f;
				
				case 8:
					return -1767.667f, 153.5475f, 150.6169f;
				
				case 9:
					return -1707.51f, -88.6062f, 178.52f;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1750.46f, 313.08f, 110.22f;
				
				case 1:
					return -1747.839f, 310.8168f, 110.9212f;
				
				case 2:
					return -1749.151f, 310.3823f, 110.1554f;
				
				case 3:
					return -1763.767f, 248.5189f, 122.2664f;
				
				case 4:
					return -1762.556f, 246.6229f, 122.5323f;
				
				case 5:
					return -1762.649f, 243.953f, 123.068f;
				
				case 6:
					return -1763.279f, 272.532f, 117.7904f;
				
				case 7:
					return -1761.276f, 260.238f, 120.3268f;
				
				case 8:
					return -1762.893f, 253.0325f, 121.4577f;
				
				case 9:
					return -1758.699f, 307.7193f, 112.2589f;
				
				case 10:
					return -1757.394f, 306.3994f, 112.3088f;
				
				case 11:
					return -1760.43f, 307.0315f, 112.3984f;
				
				case 12:
					return -1758.63f, 307.5981f, 111.7563f;
				
				case 13:
					return -1757.467f, 306.2219f, 111.7616f;
				
				case 14:
					return -1760.48f, 306.8952f, 111.8295f;
				
				case 15:
					return -1748.718f, 316.371f, 109.8117f;
				
				case 16:
					return -1747.922f, 319.106f, 109.0645f;
				
				case 17:
					return -1745.539f, 312.628f, 109.5133f;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return -1752.642f, 314.2381f, 109.5252f;
				
				case 1:
					return -1747.29f, 319.0689f, 108.8794f;
				
				case 2:
					return -1745.539f, 312.628f, 109.5133f;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return -1750.776f, 319.6809f, 110.1063f;
				
				case 1:
					return -1747.404f, 319.0871f, 109.0105f;
				
				case 2:
					return -1750.457f, 313.0556f, 110.22f;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return -2555.292f, 609.3011f, 137.2927f;
				
				case 1:
					return -2557.781f, 614.58f, 137.2892f;
				
				case 2:
					return -2592.286f, 459.7406f, 145.9973f;
				
				case 3:
					return -2438.281f, 564.7357f, 126.4823f;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return -2582.657f, 455.2193f, 145.958f;
				
				case 1:
					return -2584.2f, 455.5765f, 145.7735f;
				
				case 2:
					return -2591.894f, 456.6479f, 146.8756f;
				
				case 3:
					return -2587.813f, 453.6208f, 146.4031f;
				
				case 4:
					return -2587.483f, 456.9401f, 146.2099f;
				
				case 5:
					return -2592.815f, 453.6928f, 146.604f;
				
				case 6:
					return -2593.222f, 453.6687f, 146.6618f;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1769.775f, -392.4876f, 155.5262f;
				
				case 1:
					return -1768.753f, -383.8689f, 156.7198f;
				
				case 2:
					return -1818.745f, -283.5671f, 174.1316f;
				
				case 3:
					return -1705.884f, -421.5991f, 153.0098f;
				
				case 4:
					return -1757.637f, 312.1573f, 109.9134f;
				
				case 5:
					return -2583.078f, 458.8982f, 144.815f;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1746.445f, 302.0625f, 109.5717f;
				
				case 1:
					return -1754.848f, 304.1891f, 111.1282f;
				
				case 2:
					return -1760.421f, 303.4391f, 111.1307f;
				
				case 3:
					return -1753.785f, 293.9836f, 112.7393f;
				
				case 4:
					return -1756.532f, 293.0149f, 112.753f;
				
				case 5:
					return -1754.972f, 306.609f, 110.8856f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_1049(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 88f;
				
				case 1:
					return -76f;
				
				case 2:
					return -115.5f;
				
				case 3:
					return -153.93f;
				
				case 4:
					return 75f;
				
				case 5:
					return -17.73f;
				
				case 6:
					return -75.12f;
				
				case 7:
					return 143.89f;
				
				case 8:
					return -8.88f;
				
				case 9:
					return -83.75f;
				
				case 10:
					return -75.12f;
				
				case 11:
					return 136.95f;
				
				case 12:
					return -112.49f;
				
				case 13:
					return -112.03f;
				
				case 14:
					return -100.1f;
				
				case 15:
					return -80.2f;
				
				case 16:
					return -12.1f;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return -202f;
				
				case 1:
					return -400f;
				
				case 2:
					return -200f;
				
				case 3:
					return -34f;
				
				case 4:
					return -100f;
				
				case 5:
					return 158f;
				
				case 6:
					return -44f;
				
				case 7:
					return 256.0074f;
				
				case 8:
					return 245.3069f;
				
				case 9:
					return 174.8596f;
				
				case 10:
					return 251.1407f;
				
				case 11:
					return 262.5069f;
				
				case 12:
					return 89.7518f;
				
				case 13:
					return -166f;
				
				case 14:
					return 48f;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 202f;
				
				case 1:
					return 192f;
				
				case 2:
					return -168f;
				
				case 3:
					return 212f;
				
				case 4:
					return 210.5f;
				
				case 5:
					return -144f;
				
				case 6:
					return 62f;
				
				case 7:
					return 58f;
				
				case 8:
					return -302.5f;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return -435f;
				
				case 1:
					return 146f;
				
				case 2:
					return 136f;
				
				case 3:
					return 52f;
				
				case 4:
					return 143.48f;
				
				case 5:
					return 147.66f;
				
				case 6:
					return -123.47f;
				
				case 7:
					return 142.09f;
				
				case 8:
					return 155.34f;
				
				case 9:
					return 132.34f;
				
				case 10:
					return 13f;
				
				case 11:
					return -36.38f;
				
				case 12:
					return -94.52f;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 184f;
				
				case 1:
					return 54f;
				
				case 2:
					return 56f;
				
				case 3:
					return 236f;
				
				case 4:
					return -160f;
				
				case 5:
					return 34f;
				
				case 6:
					return 24f;
				
				case 7:
					return 74f;
				
				case 8:
					return 82f;
				
				case 9:
					return 70f;
				
				case 10:
					return -5.76f;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 18f;
				
				case 1:
					return -124f;
				
				case 2:
					return 14f;
				
				case 3:
					return -124f;
				
				case 4:
					return 12f;
				
				case 5:
					return -121f;
				
				case 6:
					return 6.4f;
				
				case 7:
					return 170f;
				
				case 8:
					return 170f;
				
				case 9:
					return -97.5f;
				
				case 10:
					return 168f;
				
				case 11:
					return 174f;
				
				case 12:
					return 184.32f;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 18.5f;
				
				case 1:
					return 20f;
				
				case 2:
					return 19f;
				
				case 3:
					return -15f;
				
				case 4:
					return -187f;
				
				case 5:
					return -189f;
				
				case 6:
					return 5f;
				
				case 7:
					return -191f;
				
				case 8:
					return 175.5f;
				
				case 9:
					return 163.44f;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0f;
				
				case 1:
					return -65.96f;
				
				case 2:
					return -55.21f;
				
				case 3:
					return 10f;
				
				case 4:
					return 12f;
				
				case 5:
					return 12f;
				
				case 6:
					return -10f;
				
				case 7:
					return 6f;
				
				case 8:
					return 8f;
				
				case 9:
					return -36.12f;
				
				case 10:
					return -37.29f;
				
				case 11:
					return 2.66f;
				
				case 12:
					return -17f;
				
				case 13:
					return -37.48f;
				
				case 14:
					return -12f;
				
				case 15:
					return 138f;
				
				case 16:
					return -108.62f;
				
				case 17:
					return -62.64f;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return -36f;
				
				case 1:
					return -82.69f;
				
				case 2:
					return -62.64f;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return -109.33f;
				
				case 1:
					return -103.391f;
				
				case 2:
					return 0f;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 108f;
				
				case 1:
					return 104f;
				
				case 2:
					return -99.5f;
				
				case 3:
					return 58.32f;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 70.26f;
				
				case 1:
					return 74.21f;
				
				case 2:
					return -82.05f;
				
				case 3:
					return 160.88f;
				
				case 4:
					return -98.33f;
				
				case 5:
					return -16.41f;
				
				case 6:
					return -13.2f;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 74f;
				
				case 1:
					return -34f;
				
				case 2:
					return 22f;
				
				case 3:
					return -64f;
				
				case 4:
					return -14f;
				
				case 5:
					return 80f;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 16f;
				
				case 1:
					return -12.5f;
				
				case 2:
					return -15f;
				
				case 3:
					return -18f;
				
				case 4:
					return -16f;
				
				case 5:
					return -5f;
			}
			break;
	}
	return 0f;
}

void func_1050(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	
	if (func_20() == -1)
	{
		func_1606();
	}
	else
	{
		return;
	}
	func_1607();
	Global_40.f_9.f_14 = func_291();
	Global_40.f_9.f_20 = LAW::_0x54310AAB97B92816(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = _NAMESPACE59::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1608())
		{
			func_377(Global_1310720->f_1);
		}
		else if (func_1609() == func_378(Global_36, 1) && func_1610() != 2)
		{
			func_377(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_377(Global_36);
		}
		func_1611(Global_36, &vVar0, &uVar4);
		if (!func_1608())
		{
			if (func_1612(vVar0, Global_36) < func_1612(Global_40.f_9.f_7, Global_36))
			{
				func_377(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_378(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1611(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_235(Global_1935630, 8192);
	}
	func_1613();
}

int func_1051(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (((func_260(uParam0->f_5423[iVar0 /*65*/]) && ENTITY::IS_ENTITY_AN_OBJECT(&(uParam0->f_5423[iVar0 /*65*/]))) && ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_5423[iVar0 /*65*/])) != iParam1) && ENTITY::GET_ENTITY_MODEL(&(uParam0->f_5423[iVar0 /*65*/])) == ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_1052(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	func_1614(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

bool func_1053(int iParam0)
{
	return iParam0 > -1;
}

bool func_1054(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1055(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_1053(iParam0))
		{
			return;
		}
	}
	func_1615(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_1056(int iParam0)
{
	func_1055(iParam0, 36, 1);
}

void func_1057(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_1053(iParam0))
		{
			return;
		}
	}
	func_1615(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_1058(int iParam0, bool bParam1)
{
	if (!func_529(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_1616(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_1059(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_1053(iParam0))
		{
			return false;
		}
	}
	func_1615(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_1060(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_529(iParam0))
	{
		iVar1 = func_566(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_1617(iParam0);
		}
	}
	if (func_1059(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_566(iParam0), 137, true);
	}
}

void func_1061(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1057(iParam0, 50, 1);
		func_1057(iParam0, 48, 1);
		func_1057(iParam0, 49, 1);
		func_1057(iParam0, 51, 1);
		func_1057(iParam0, 52, 1);
		func_1057(iParam0, 54, 1);
		func_1057(iParam0, 55, 1);
	}
	else
	{
		func_1055(iParam0, 50, 1);
		func_1055(iParam0, 48, 1);
		func_1055(iParam0, 49, 1);
		func_1055(iParam0, 51, 1);
		if (bParam3)
		{
			func_1055(iParam0, 54, 1);
		}
		else
		{
			func_1057(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1055(iParam0, 52, 1);
			if (bParam3)
			{
				func_1055(iParam0, 55, 1);
			}
		}
		else
		{
			func_1057(iParam0, 52, 1);
			if (!bParam3)
			{
				func_1057(iParam0, 55, 1);
			}
		}
	}
}

void func_1062(int iParam0, bool bParam1)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_566(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_566(iParam0), 204, false);
	}
}

void func_1063(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_529(iParam0))
	{
		return;
	}
	if (func_530(iParam0))
	{
		if (!func_264(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1059(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_1058(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_566(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_1618(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_1055(iParam0, 2, 1);
	}
	else
	{
		func_1619(iParam0);
		func_1055(iParam0, 1, 1);
	}
}

void func_1064(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_529(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_1065(int iParam0)
{
	if (!func_529(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_1066(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_1053(iParam1))
	{
		return;
	}
	iVar0 = func_1065(iParam1);
	if (func_1620(iParam1))
	{
		if (!func_1621(iParam1))
		{
			return;
		}
	}
	func_1057(iParam1, 39, 1);
	func_1622(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_1622(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_1622(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_1055(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1623(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_1067(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return 1;
	}
	return 0;
}

void func_1068(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_220(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1624(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_0x88AD6CC10D8D35B2(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_0x0D0DB2B6AF19A987(&iVar7);
			}
		}
		iVar6++;
	}
}

void func_1069(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0 /*45*/] = iParam1;
}

bool func_1070(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1) != 0;
}

void func_1071(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1626(func_1625(255), 109029619));
	}
	else if (func_310())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1098();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1072(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

void func_1073(var uParam0, bool bParam1)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1626(func_1625(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_310())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1098())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_1074(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_37;
}

float func_1075(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_1076(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;
	
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1461(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1072(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1072(iParam0) + 1;
	fVar6 = func_1627(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_1539(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_1077(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, -401963276);
	MAP::_0xB059D7BD3D78C16F(iParam0, 231194138);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1012863186);
	MAP::_0xB059D7BD3D78C16F(iParam0, -272772079);
	MAP::_0xB059D7BD3D78C16F(iParam0, 1313031610);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1814032670);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1380599892);
	MAP::_0xB059D7BD3D78C16F(iParam0, 430539302);
	MAP::_0xB059D7BD3D78C16F(iParam0, -995247980);
	MAP::_0xB059D7BD3D78C16F(iParam0, -25056193);
	MAP::_0xB059D7BD3D78C16F(iParam0, -264630352);
}

void func_1078(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

int func_1079()
{
	if (func_344())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1080(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1628((Global_40.f_4283.f_325 + iParam0));
}

void func_1081(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1079())
	{
		func_721(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_721(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1082(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		
		case 1:
			return "REGION_BAY_MACOMBS_END";
		
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		
		case 3:
			return "REGION_BAY_LAGRAS";
		
		case 4:
			return "REGION_BAY_LAKAY";
		
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		
		case 8:
			return "REGION_BAY_SERENDIPITY";
		
		case 9:
			return "REGION_BAY_SHADYBELLE";
		
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		
		case 15:
			return "REGION_BGV_FORTRIGGS";
		
		case 16:
			return "REGION_BGV_HANGINGDOG";
		
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		
		case 19:
			return "REGION_BGV_MONTO_REST";
		
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		
		case 22:
			return "REGION_BGV_PRONGHORN";
		
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		
		case 24:
			return "REGION_BGV_SHACK";
		
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		
		case 26:
			return "REGION_BGV_STRAWBERRY";
		
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		
		case 31:
			return "REGION_BLU_COPPERHEAD";
		
		case 32:
			return "REGION_BLU_SISIKA";
		
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		
		case 34:
			return "REGION_CML_DINO_LADY";
		
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		
		case 37:
			return "REGION_GRT_BEECHERS";
		
		case 38:
			return "REGION_GRT_BLACKWATER";
		
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		
		case 52:
			return "REGION_GRZ_COHUTTA";
		
		case 43:
			return "REGION_GRZ_COLTER";
		
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		
		case 54:
			return "REGION_GRZ_THELOFT";
		
		case 55:
			return "REGION_GRE_VETERAN";
		
		case 56:
			return "REGION_GRZ_WAPITI";
		
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		
		case 57:
			return "REGION_GUA_AGUASDULCES";
		
		case 58:
			return "REGION_GUA_CAMP";
		
		case 59:
			return "REGION_GUA_CINCOTORRES";
		
		case 60:
			return "REGION_GUA_LACAPILLA";
		
		case 61:
			return "REGION_GUA_MANICATO";
		
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		
		case 64:
			return "REGION_HRT_CARMODYDELL";
		
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		
		case 66:
			return "REGION_HRT_CROP_FARM";
		
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		
		case 72:
			return "REGION_HRT_LARNEDSOD";
		
		case 73:
			return "REGION_HRT_LOONY_CULT";
		
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		
		case 76:
			return "REGION_HRT_VALENTINE";
		
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		
		case 78:
			return "REGION_ROA_ANNESBURG";
		
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		
		case 63:
			return "REGION_ROA_BEECHERS_C";
		
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		
		case 83:
			return "REGION_ROA_DOVERHILL";
		
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		
		case 90:
			return "REGION_ROA_TRAPPER";
		
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		
		case 92:
			return "REGION_ROA_VANHORNPOST";
		
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		
		case 94:
			return "REGION_SCM_BULGERGLADE";
		
		case 95:
			return "REGION_SCM_CALIGAHALL";
		
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		
		case 105:
			return "REGION_SCM_RHODES";
		
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		
		case 109:
			return "REGION_TAL_COCHINAY";
		
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		
		case 112:
			return "REGION_TAL_TANNERSREACH";
		
		case 113:
			return "REGION_TAL_TRAPPER";
		
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		
		case 120:
			return "REGION_CHO_ARMADILLO";
		
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		
		case 118:
			return "REGION_RIO_FORT_MERCER";
		
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		
		case 128:
			return "REGION_CENTRALUNIONRR";
		
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_1083(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_1084(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

bool func_1085(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_1093(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1086(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_1087(1);
	}
}

void func_1087(bool bParam0)
{
	if (bParam0)
	{
		func_1629(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_1630(&(Global_40.f_12018.f_42), 1);
	}
}

int func_1088(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -15;
	}
	return func_1631(iParam0);
}

bool func_1089(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_717(iParam1) || !func_717(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_1090(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	var uVar0;
	
	vParam0.f_2 = iParam5;
	uVar0 = *uParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*uParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1091(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		
		case 1784174017:
			return 8;
		
		case 1763160914:
			return 10;
		
		case 2051438686:
			return 11;
		
		case 1155669136:
			return 1;
		
		case 1871598:
			return 9;
		
		case -1379218218:
			return 6;
		
		case 1059981727:
			return 2;
		
		case -1216736853:
			return 4;
		
		case 1191674135:
			return 3;
		
		case -112322057:
			return 12;
		
		case -823778732:
			return 25;
		
		case 1338623152:
			return 16;
		
		case 1401247110:
			return 20;
		
		case 1007627076:
			return 13;
		
		case 864606355:
			return 31;
		
		case 1338525796:
			return 18;
		
		case -2076625074:
			return 26;
		
		case -288774278:
			return 15;
		
		case 1934998953:
			return 14;
		
		case -1148482643:
			return 32;
		
		case 603776282:
			return 22;
		
		case 1339344423:
			return 27;
		
		case 1562395675:
			return 19;
		
		case 1316832864:
			return 28;
		
		case -1619448191:
			return 29;
		
		case -520130198:
			return 24;
		
		case 1418253584:
			return 30;
		
		case -348149883:
			return 33;
		
		case 814591385:
			return 34;
		
		case 981348373:
			return 17;
		
		case -1100417366:
			return 35;
		
		case 1438856241:
			return 23;
		
		case -1989143022:
			return 21;
		
		default:
			break;
	}
	return 0;
}

int func_1092(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1093(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_1632(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_1094(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1095(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

int func_1096()
{
	int iVar0;
	
	iVar0 = func_571();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_1097(int iParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_20() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_1581(MISC::ABSF(fVar1) < 1f, func_1581(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_1098()
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_1099(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case -40:
		case 40:
			return 1;
		
		case -80:
		case 80:
			return 2;
		
		case -120:
		case 120:
			return 3;
		
		case -160:
		case 160:
			return 4;
		
		case -200:
		case 200:
			return 5;
		
		case -240:
		case 240:
			return 6;
		
		case -280:
		case 280:
			return 7;
		
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_1100()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_1101(int iParam0, bool bParam1, int iParam2)
{
	func_1633((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1634(iParam0);
}

void func_1102(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1635(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_1103(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	bVar3 = false;
	if (func_1636(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1637(iVar5, &iVar2, &iVar0))
			{
				if (!func_591(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1638(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_610(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1096() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1096() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1639();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

char* func_1104(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		
		case 530833824:
			return "HONOR_EVENT_THEFT";
		
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		
		default:
			break;
	}
	return "";
}

bool func_1105(int iParam0)
{
	return func_610(iParam0) == -427144552;
}

int func_1106(int iParam0)
{
	var uVar0;
	
	if (func_20() != -1)
	{
		return 0;
	}
	if (func_612(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_1111(iParam0, &uVar0, 1, 0, 0);
	}
	return func_353(iParam0, 1, 0);
}

void func_1107(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	
	if (func_610(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_617(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (iParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_618(iVar0);
		}
		if (iParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_595(iParam0, 0, 0) == 0))
		{
			if (!*uParam3 && !iParam4 == 1248274121)
			{
				func_671(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}
}

void func_1108(int iParam0, var uParam1)
{
	int iVar0;
	
	if (func_611(iParam0, 58855631))
	{
		func_1259(iParam0, -915411861, &iVar0, 1);
		*uParam1 = (*uParam1 * iVar0);
	}
}

int func_1109(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (!func_619(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_1037(bParam3), iParam0);
}

int func_1110(int iParam0, bool bParam1)
{
	if (func_623(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_1037(bParam1), iParam0, 0);
}

int func_1111(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	
	func_1640(&iParam0);
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (!func_619(0))
	{
		bParam3 = true;
	}
	if (func_1105(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_1242(0) };
			Var4.f_9 = -1591664384;
			if (!func_1134(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_1135(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_1243(iParam0, 1))
			{
				if (!func_1134(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_1135(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_1641(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_1109(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_1642(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_1037(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_1112(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_610(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_611(iParam0, 1399091007))
	{
		func_1176(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1113(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1643(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1644(&Var0, func_1242(0));
	}
	if (!func_1645(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1186(iVar14);
	return uVar15;
}

int func_1114()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_1115(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_1116(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1646(iParam0);
	fVar1 = func_1647(iParam0);
	if ((Global_1347477->f_117 || !func_613(31)) || !func_1648(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1649(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_1650(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_721(MISC::_CREATE_VAR_STRING(6, func_1651(iParam0), fVar1), "itemtype_textures", func_1652(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		
		case 1:
			return -1021394391;
		
		case 2:
			return -987306668;
		
		case 3:
			return -1028735103;
		
		case 4:
			return 515229791;
		
		case 5:
			return -1230863414;
		
		case 6:
			return 232875659;
		
		case 7:
			return 1423129537;
		
		case 8:
			return -435742319;
		
		case 9:
			return -1854702679;
		
		case 10:
			return 1265323898;
		
		case 11:
			return -479775696;
		
		default:
			break;
	}
	return 0;
}

int func_1118(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_1274(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_1119(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_606() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1653(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1654(), 12);
			}
			break;
		
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_1158() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1655(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_1158(), 30);
			}
			break;
		
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1656(), 13);
			}
			break;
		
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_1159() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1657(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_1159(), 10);
			}
			break;
		
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1118(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_1120(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_1121(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_1122(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_1123(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1658(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_353(iVar2, 1, 0) || func_1660(func_1659(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1127(func_1658(iVar0))), func_1127(func_1658(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1158() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1661(iVar0)), func_1661(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1655() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1661(iVar0)), func_1661(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1661(iVar0)), func_1661(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1169(iParam3, func_1662(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1165(iVar2) - iParam7) >= func_1118(iParam3, func_1663(iVar0));
				}
				else
				{
					bVar1 = func_1165(iVar2) >= func_1118(iParam3, func_1663(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1165(iVar2) + iParam7) >= func_1118(iParam3, func_1663(iVar0));
			}
			else
			{
				bVar1 = func_1165(iVar2) >= func_1118(iParam3, func_1663(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1664(iVar2)), func_1664(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1665(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1666(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1666(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1159() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1667(iVar0)), func_1667(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1657() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1667(iVar0)), func_1667(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1667(iVar0)), func_1667(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1169(iParam3, func_1662(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1165(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1668(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1668(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1669(iVar2)), func_1669(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_1124(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1656() >= 13)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", iVar0, 1, 0);
	}
	return 1;
}

int func_1125(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_195(func_208(0)) && ((func_1670(0) == 1 || func_1670(0) == 8) || func_1670(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

var func_1126(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_1127(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		
		case -1021394391:
			return "COL_CC_ART_SET";
		
		case -987306668:
			return "COL_CC_LND_SET";
		
		case -1028735103:
			return "COL_CC_GRL_SET";
		
		case 515229791:
			return "COL_CC_PLT_SET";
		
		case -1230863414:
			return "COL_CC_ACT_SET";
		
		case 232875659:
			return "COL_CC_AML_SET";
		
		case 1423129537:
			return "COL_CC_VEH_SET";
		
		case -435742319:
			return "COL_CC_SPT_SET";
		
		case -1854702679:
			return "COL_CC_INV_SET";
		
		case 1265323898:
			return "COL_CC_HOR_SET";
		
		case -479775696:
			return "COL_CC_PAM_SET";
		
		default:
			break;
	}
	return "";
}

int func_1128(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1129(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1130(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1131(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			break;
		
		case 11:
			func_1671(1);
			break;
		
		case 14:
			break;
		
		case 15:
			break;
		
		case 16:
			break;
		
		case 17:
			break;
		
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1672(1);
			break;
		
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1672(2);
			break;
		
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1672(3);
			break;
		
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		
		case 31:
			break;
		
		case 10:
			break;
		
		case 12:
			break;
		
		case 13:
			break;
		
		case 32:
			break;
		
		case 33:
			func_1673(1);
			break;
		
		case 34:
			func_1674(1);
			break;
		
		case 35:
			func_1675(1);
			break;
		
		case 36:
			break;
		
		case 37:
			func_1676(0);
			break;
		
		case 38:
			func_1677(0);
			break;
		
		case 39:
			func_1678(0);
			break;
		
		case 40:
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			break;
		
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		
		case 2:
			if ((!&Global_1879534 && func_405()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_728("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_331(586, 0);
			break;
		
		case 3:
			if ((!&Global_1879534 && func_405()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_728("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_331(587, 0);
			break;
		
		case 4:
			if ((!&Global_1879534 && func_405()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_728("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_331(588, 0);
			break;
		
		case 5:
			if ((!&Global_1879534 && func_405()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_728("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_331(589, 0);
			break;
		
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_20() == -1)
			{
				if (!func_1199(99217379) || func_1679(99217379) == 2110595215)
				{
					if (func_1098())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_353(iVar0, 1, 0))
					{
						func_664(iVar0, 1, 752097756);
					}
					func_643(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		
		case 48:
			if (func_20() == -1)
			{
				if (!func_353(1013902307, 1, 0))
				{
					func_664(1013902307, 1, 752097756);
				}
			}
			break;
		
		case 50:
			if (func_20() == -1)
			{
				if (!func_353(1013902307, 1, 0))
				{
					func_664(1013902307, 1, 752097756);
				}
				if (!func_353(142640135, 1, 0))
				{
					func_664(142640135, 1, 752097756);
				}
			}
			break;
		
		case 49:
			if (func_20() == -1)
			{
				if (!func_353(786809402, 1, 0))
				{
					func_664(786809402, 1, 752097756);
				}
			}
			break;
		
		case 51:
			if (func_20() == -1)
			{
				if (!func_353(786809402, 1, 0))
				{
					func_664(786809402, 1, 752097756);
				}
				if (!func_353(-518019409, 1, 0))
				{
					func_664(-518019409, 1, 752097756);
				}
			}
			break;
		
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		
		case 25:
			break;
		
		case 26:
			break;
		
		case 27:
			break;
		
		case 28:
			break;
		
		case 29:
			break;
		
		case 30:
			break;
		
		case 44:
			break;
		
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		
		case 46:
			func_1680();
			break;
		
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_1132(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1133(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		
		case 1:
			return 1704602624;
		
		case 2:
			return 1214181762;
		
		case 3:
			return -430578371;
		
		case 4:
			return -730381952;
		
		case 5:
			return -253503777;
		
		case 6:
			return 1352275534;
		
		case 7:
			return 1666399168;
		
		case 8:
			return -1911121386;
		
		case 9:
			return 1756656691;
		
		case 10:
			return -1774867076;
		
		case 11:
			return -421952220;
		
		case 12:
			return -1087003323;
		
		case 13:
			return 1231618917;
		
		case 14:
			return -1183777174;
		
		case 15:
			return -841767082;
		
		case 16:
			return 1043717005;
		
		case 17:
			return 142663787;
		
		case 18:
			return 1718143051;
		
		case 19:
			return -6605744;
		
		case 20:
			return 953047564;
		
		case 21:
			return 769706682;
		
		case 22:
			return 1635590003;
		
		case 23:
			return -2047978619;
		
		case 24:
			return -586319254;
		
		case 25:
			return 249896112;
		
		case 26:
			return -1060513333;
		
		case 27:
			return 1317351007;
		
		case 28:
			return -500478573;
		
		case 29:
			return -806573802;
		
		case 30:
			return -1109949204;
		
		case 31:
			return -740156546;
		
		case 32:
			return -684532710;
		
		case 33:
			return 1158805436;
		
		case 34:
			return -559473670;
		
		case 35:
			return -797147251;
		
		case 36:
			return -382216265;
		
		case 37:
			return 1419177114;
		
		case 38:
			return 1704297235;
		
		case 39:
			return -1139016418;
		
		case 40:
			return 897705377;
		
		case 41:
			return 17961769;
		
		case 42:
			return 205582207;
		
		case 43:
			return 900740963;
		
		case 44:
			return -1369589344;
		
		case 45:
			return -1695823795;
		
		case 46:
			return -41453074;
		
		case 47:
			return 539767227;
		
		case 48:
			return 1210490314;
		
		case 49:
			return -399684751;
		
		case 50:
			return 2138893455;
		
		case 51:
			return -1617010487;
		
		case 52:
			return -832377028;
		
		case 53:
			return -428040245;
		
		case 54:
			return 1279288897;
		
		case 55:
			return -594897905;
		
		case 56:
			return -1360459240;
		
		case 57:
			return 1838428396;
		
		case 58:
			return -1467846997;
		
		case 59:
			return -490610263;
		
		case 60:
			return -1885413079;
		
		case 61:
			return 708884155;
		
		case 62:
			return -134459952;
		
		case 63:
			return -1912136700;
		
		case 64:
			return -1268031552;
		
		case 65:
			return 1177953227;
		
		case 66:
			return 2130805296;
		
		case 67:
			return 38093490;
		
		case 68:
			return -269153218;
		
		case 69:
			return -1995068011;
		
		case 70:
			return -164284834;
		
		case 71:
			return 1446463345;
		
		case 72:
			return 1501315823;
		
		case 73:
			return -750379482;
		
		case 74:
			return -929560937;
		
		case 75:
			return 608323241;
		
		case 76:
			return 1030796013;
		
		case 77:
			return 1915057434;
		
		case 78:
			return -1582276476;
		
		case 79:
			return 692059311;
		
		case 80:
			return 2062839241;
		
		case 81:
			return -1884531872;
		
		case 82:
			return -866434534;
		
		case 83:
			return -1252192421;
		
		case 84:
			return 1243288963;
		
		case 85:
			return -1953772189;
		
		case 86:
			return 754411745;
		
		case 87:
			return 545309006;
		
		case 88:
			return -1089810811;
		
		case 89:
			return 1957869400;
		
		case 90:
			return -241412332;
		
		case 91:
			return -1548010959;
		
		case 92:
			return 550150488;
		
		case 93:
			return 946565453;
		
		case 94:
			return 434443248;
		
		case 95:
			return -1709914938;
		
		case 96:
			return 366686112;
		
		case 97:
			return -1370063350;
		
		case 98:
			return 2126829550;
		
		case 99:
			return 226552910;
		
		case 100:
			return 721193431;
		
		case 101:
			return -315672460;
		
		case 102:
			return 623544501;
		
		case 103:
			return 259556714;
		
		case 104:
			return -2125361825;
		
		case 105:
			return 1078230356;
		
		case 106:
			return 1885364811;
		
		case 107:
			return 1630382737;
		
		case 108:
			return 1738245512;
		
		case 109:
			return 1540262216;
		
		case 110:
			return 1016871472;
		
		case 111:
			return 13829069;
		
		case 112:
			return 737051352;
		
		case 113:
			return 1734614610;
		
		case 114:
			return -208715295;
		
		case 115:
			return 1435062936;
		
		case 116:
			return 1483055553;
		
		case 117:
			return 380335002;
		
		case 118:
			return -1079385677;
		
		case 119:
			return 676610411;
		
		case 120:
			return 2145419552;
		
		case 121:
			return 657238733;
		
		case 122:
			return 1850579281;
		
		case 123:
			return -1923957384;
		
		case 124:
			return -1142828108;
		
		case 125:
			return -1400618531;
		
		case 126:
			return -1433857135;
		
		case 127:
			return 209987206;
		
		case 128:
			return 1686943047;
		
		case 129:
			return -59178517;
		
		case 130:
			return 2134884601;
		
		case 131:
			return 651707517;
		
		case 132:
			return -633788535;
		
		case 133:
			return 116394463;
		
		case 134:
			return -1196973875;
		
		case 135:
			return 801752086;
		
		case 136:
			return 184475332;
		
		case 137:
			return -1880922659;
		
		case 138:
			return -898138634;
		
		case 139:
			return -2107418444;
		
		case 140:
			return -679970099;
		
		case 141:
			return -1531392549;
		
		case 142:
			return 1612483376;
		
		case 143:
			return 463930900;
		
		case 144:
			return -632148238;
		
		case 145:
			return 55303249;
		
		case 146:
			return 2108322089;
		
		case 147:
			return -1358896714;
		
		case 148:
			return 74475632;
		
		case 149:
			return -28710953;
		
		case 150:
			return -1791599168;
		
		case 151:
			return 1605938169;
		
		case 152:
			return 1255242276;
		
		case 153:
			return 636467727;
		
		case 154:
			return -1567688525;
		
		case 155:
			return -77886679;
		
		case 156:
			return -1057900679;
		
		case 157:
			return -1960888134;
		
		case 158:
			return -1719717295;
		
		case 159:
			return -1779244911;
		
		case 160:
			return -670540863;
		
		case 161:
			return 223362311;
		
		case 162:
			return 1150824567;
		
		case 163:
			return 974471191;
		
		case 164:
			return 1989683968;
		
		case 165:
			return 254804477;
		
		case 166:
			return 192057609;
		
		case 167:
			return 1553957817;
		
		case 168:
			return 2099829015;
		
		case 169:
			return -840300007;
		
		case 170:
			return -1948423372;
		
		case 171:
			return 981083654;
		
		case 172:
			return 1283289876;
		
		case 173:
			return -606884489;
		
		case 174:
			return -100418572;
		
		case 175:
			return 663645231;
		
		case 176:
			return 1442217033;
		
		case 177:
			return 1410986244;
		
		case 178:
			return 847409839;
		
		case 179:
			return 923926911;
		
		case 180:
			return 109995826;
		
		case 181:
			return -747412737;
		
		case 182:
			return 1114341727;
		
		case 183:
			return -539456939;
		
		case 184:
			return 45887121;
		
		case 185:
			return 913271624;
		
		case 186:
			return -1652812715;
		
		case 187:
			return -1791365775;
		
		case 188:
			return -979299941;
		
		case 189:
			return 713062001;
		
		case 190:
			return -575045963;
		
		case 191:
			return 1852965262;
		
		case 192:
			return -1398836354;
		
		case 193:
			return -1829885298;
		
		case 194:
			return -1773850357;
		
		case 195:
			return -564258009;
		
		case 196:
			return 2016532685;
		
		case 197:
			return -1070563798;
		
		case 198:
			return -1619221343;
		
		case 199:
			return -345571691;
		
		case 200:
			return 544288390;
		
		case 201:
			return 159578294;
		
		case 202:
			return -76852849;
		
		case 203:
			return 1110295244;
		
		case 204:
			return 2104563477;
		
		case 205:
			return 1947827651;
		
		case 206:
			return -933072766;
		
		case 207:
			return 2104388648;
		
		case 208:
			return -1677140601;
		
		case 209:
			return -2133097881;
		
		case 210:
			return -826678792;
		
		case 211:
			return -513522325;
		
		case 212:
			return 1970588249;
		
		case 213:
			return -2080032591;
		
		case 214:
			return 1758847745;
		
		case 215:
			return 895010282;
		
		case 216:
			return 1786352060;
		
		case 217:
			return -833319691;
		
		case 218:
			return 1591329969;
		
		case 219:
			return 2123222014;
		
		case 220:
			return -1578397674;
		
		case 221:
			return 1473261684;
		
		case 222:
			return -241855024;
		
		case 223:
			return 12999093;
		
		case 224:
			return -6796437;
		
		case 225:
			return -268116367;
		
		case 226:
			return -636470867;
		
		case 227:
			return 1737668280;
		
		case 228:
			return 892807236;
		
		case 229:
			return -733247890;
		
		case 230:
			return 24047176;
		
		case 231:
			return -1561999014;
		
		case 232:
			return -2052774042;
		
		case 233:
			return -997150586;
		
		case 234:
			return -1189569496;
		
		case 235:
			return 46488141;
		
		case 236:
			return 1046566686;
		
		case 237:
			return 325139909;
		
		case 238:
			return -1585141069;
		
		case 239:
			return 802754820;
		
		case 240:
			return 1415981582;
		
		case 241:
			return -1886147520;
		
		case 242:
			return 654877947;
		
		case 243:
			return -415648720;
		
		case 244:
			return 1221327846;
		
		case 245:
			return 923162715;
		
		case 246:
			return 625423581;
		
		case 247:
			return 326668608;
		
		case 248:
			return 669530755;
		
		case 249:
			return 429759982;
		
		case 250:
			return -2111934838;
		
		case 251:
			return 1886178087;
		
		case 252:
			return 1587783573;
		
		case 253:
			return -279722001;
		
		case 254:
			return 1310070322;
		
		case 255:
			return 724026534;
		
		case 256:
			return 137387616;
		
		case 257:
			return -653439684;
		
		case 258:
			return 1376835592;
		
		case 259:
			return -1824203570;
		
		case 260:
			return -1654197998;
		
		case 261:
			return 798987653;
		
		case 262:
			return 976923323;
		
		case 263:
			return 1167442289;
		
		case 264:
			return 986998820;
		
		case 265:
			return -2119169513;
		
		case 266:
			return -2015960939;
		
		case 267:
			return -1287636759;
		
		case 268:
			return -706917073;
		
		case 269:
			return -2166805;
		
		case 270:
			return -1391602433;
		
		case 271:
			return 1782075221;
		
		case 272:
			return 1282544585;
		
		case 273:
			return 1732594027;
		
		case 274:
			return -1058817012;
		
		case 275:
			return 1090546265;
		
		case 276:
			return -1783120823;
		
		case 277:
			return -1535745896;
		
		case 278:
			return -2086922122;
		
		case 279:
			return -1675198649;
		
		case 280:
			return 1189497682;
		
		case 281:
			return -1565675519;
		
		case 282:
			return -268973591;
		
		case 283:
			return 1039159916;
		
		case 284:
			return 1111816631;
		
		case 285:
			return 405591388;
		
		case 286:
			return 897456793;
		
		case 287:
			return 104187473;
		
		case 288:
			return 773808542;
		
		case 289:
			return -1120669954;
		
		case 290:
			return -1389278274;
		
		case 291:
			return 552979403;
		
		case 292:
			return -1571578784;
		
		case 293:
			return -708312114;
		
		case 294:
			return 688823508;
		
		case 295:
			return -1622147240;
		
		case 296:
			return 830292162;
		
		case 297:
			return 226276782;
		
		case 298:
			return -678416628;
		
		case 299:
			return -1098528034;
		
		case 300:
			return 316207340;
		
		case 301:
			return -1909200748;
		
		case 302:
			return -939652363;
		
		case 303:
			return -1990194462;
		
		case 304:
			return -375447933;
		
		case 305:
			return 537014919;
		
		case 306:
			return 1784584921;
		
		case 307:
			return 1084182731;
		
		case 308:
			return -1045471300;
		
		case 309:
			return 1617414719;
		
		case 310:
			return -787761753;
		
		case 311:
			return -490616606;
		
		case 312:
			return 1491346514;
		
		case 313:
			return -1311702610;
		
		case 314:
			return -904250715;
		
		case 315:
			return 1034665895;
		
		case 316:
			return -101524555;
		
		case 317:
			return 1419152594;
		
		case 318:
			return -451359317;
		
		case 319:
			return -1915385310;
		
		case 320:
			return 1315162488;
		
		case 321:
			return -361152079;
		
		case 322:
			return -2041626192;
		
		case 323:
			return -2077812539;
		
		case 324:
			return -1371514637;
		
		case 325:
			return 1730017037;
		
		case 326:
			return 892816668;
		
		case 327:
			return -1994943603;
		
		case 328:
			return 603133554;
		
		case 329:
			return -30160144;
		
		case 330:
			return -1248299493;
		
		case 331:
			return 727393558;
		
		case 332:
			return 755611221;
		
		case 333:
			return -170255458;
		
		case 334:
			return 1011151573;
		
		case 335:
			return 1122339631;
		
		case 336:
			return 454815308;
		
		case 337:
			return 990701735;
		
		case 338:
			return -246340825;
		
		case 339:
			return -1410671073;
		
		case 340:
			return 1547608292;
		
		case 341:
			return -714132970;
		
		case 342:
			return 732290690;
		
		case 343:
			return 971340545;
		
		case 344:
			return -234132662;
		
		case 345:
			return -2143057988;
		
		case 346:
			return -993947465;
		
		case 347:
			return -486552269;
		
		case 348:
			return -1156317860;
		
		case 349:
			return 1229625803;
		
		case 350:
			return -388596167;
		
		case 351:
			return -1204639465;
		
		case 352:
			return -1384685096;
		
		case 353:
			return -2026728113;
		
		case 354:
			return -1228057307;
		
		case 355:
			return 1835126290;
		
		case 356:
			return 1890833594;
		
		case 357:
			return -751549960;
		
		case 358:
			return -1682270750;
		
		case 359:
			return -1839865333;
		
		case 360:
			return -1990383629;
		
		case 361:
			return 1712094016;
		
		case 362:
			return 1532953697;
		
		case 363:
			return 1620318083;
		
		case 364:
			return -307230331;
		
		case 365:
			return -1034549620;
		
		case 366:
			return -1293064293;
		
		case 367:
			return -1540142553;
		
		case 368:
			return -1769886012;
		
		case 369:
			return -1983081126;
		
		case 370:
			return -1106117124;
		
		case 371:
			return -1873108338;
		
		case 372:
			return -2097543219;
		
		case 373:
			return 155413195;
		
		case 374:
			return -1162387149;
		
		case 375:
			return 1728382685;
		
		case 376:
			return -649335959;
		
		case 377:
			return -1876502240;
		
		case 378:
			return -2107032155;
		
		case 379:
			return 619103418;
		
		case 380:
			return 1355448197;
		
		case 381:
			return 1681762005;
		
		case 382:
			return 1026887814;
		
		case 383:
			return 354352628;
		
		case 384:
			return 1519366642;
		
		case 385:
			return -82757515;
		
		case 386:
			return 386306655;
		
		case 387:
			return 1243962119;
		
		case 388:
			return 756214903;
		
		case 389:
			return -718417579;
		
		case 390:
			return -1445516411;
		
		case 391:
			return -672392892;
		
		case 392:
			return 1465341584;
		
		case 393:
			return -427758369;
		
		case 394:
			return -735647142;
		
		case 395:
			return 1535838048;
		
		case 396:
			return -602272282;
		
		case 397:
			return 2051264661;
		
		case 398:
			return 487172188;
		
		case 399:
			return 282270687;
		
		case 400:
			return 1607708943;
		
		case 401:
			return 1686264939;
		
		case 402:
			return 314786149;
		
		case 403:
			return 1402841185;
		
		case 404:
			return 1099170772;
		
		case 405:
			return 2125676786;
		
		case 406:
			return -363896735;
		
		case 407:
			return -468790222;
		
		case 408:
			return -1779133048;
		
		case 409:
			return 1732537631;
		
		case 410:
			return 1755095401;
		
		case 411:
			return 835771095;
		
		case 412:
			return 1963317232;
		
		case 413:
			return 259627919;
		
		case 414:
			return 1299075397;
		
		case 415:
			return -1509094230;
		
		case 416:
			return 61132362;
		
		case 417:
			return 1549741908;
		
		case 418:
			return 288484254;
		
		case 419:
			return -1877032947;
		
		case 420:
			return -1395676456;
		
		case 421:
			return 1136146715;
		
		case 422:
			return 468034421;
		
		case 423:
			return 1079459546;
		
		case 424:
			return -140369351;
		
		case 425:
			return 1822341990;
		
		case 426:
			return 1219701681;
		
		case 427:
			return 1601295268;
		
		case 428:
			return -1692460667;
		
		case 429:
			return 1471419228;
		
		case 430:
			return 907446160;
		
		case 431:
			return -1126482585;
		
		case 432:
			return 1911050315;
		
		case 433:
			return -1343525599;
		
		case 434:
			return 1261891225;
		
		case 435:
			return 763162704;
		
		case 436:
			return 1335861197;
		
		case 437:
			return 526744654;
		
		case 438:
			return -1177461517;
		
		case 439:
			return -241638635;
		
		case 440:
			return 1024262875;
		
		case 441:
			return 853355463;
		
		case 442:
			return -337288221;
		
		case 443:
			return 361381308;
		
		case 444:
			return -1264898804;
		
		case 445:
			return -585289073;
		
		case 446:
			return 1423542233;
		
		case 447:
			return -948489286;
		
		case 448:
			return 2063859257;
		
		case 449:
			return -1652627327;
		
		case 450:
			return -1959697839;
		
		case 451:
			return -1532267859;
		
		case 452:
			return -1410062763;
		
		case 453:
			return -901428716;
		
		case 454:
			return -1628873469;
		
		case 455:
			return 144855571;
		
		case 456:
			return -617589883;
		
		case 457:
			return -1306457086;
		
		case 458:
			return 1713542477;
		
		case 459:
			return -305542365;
		
		case 460:
			return 1985390213;
		
		case 461:
			return -2145069367;
		
		case 462:
			return -1674390752;
		
		case 463:
			return -2117214398;
		
		case 464:
			return 1880805647;
		
		case 465:
			return -62390436;
		
		case 466:
			return 1815288415;
		
		case 467:
			return 196214097;
		
		case 468:
			return -201958220;
		
		case 469:
			return 1400281261;
		
		case 470:
			return 1601515402;
		
		case 471:
			return -940704970;
		
		case 472:
			return -548371721;
		
		case 473:
			return -1022384613;
		
		case 474:
			return -357406394;
		
		case 475:
			return 1077068189;
		
		case 476:
			return -782241404;
		
		case 477:
			return 1669853467;
		
		case 478:
			return 1592019450;
		
		case 479:
			return 635273153;
		
		case 480:
			return -1559225678;
		
		case 481:
			return -266425508;
		
		case 482:
			return 1117400455;
		
		case 483:
			return 454332195;
		
		case 484:
			return -1328061889;
		
		case 485:
			return 561650932;
		
		case 486:
			return 256105670;
		
		case 487:
			return 1976779618;
		
		case 488:
			return -269095126;
		
		case 489:
			return 2145617267;
		
		case 490:
			return 1150213537;
		
		case 491:
			return 1598825281;
		
		case 492:
			return -712527121;
		
		case 493:
			return 1308553072;
		
		case 494:
			return 852866398;
		
		case 495:
			return -1794417972;
		
		case 496:
			return 293062146;
		
		case 497:
			return 95360094;
		
		case 498:
			return 807631773;
		
		case 499:
			return 1603958275;
		
		case 500:
			return 860052020;
		
		case 501:
			return -1885979781;
		
		case 502:
			return 746147970;
		
		case 503:
			return 666663006;
		
		case 504:
			return -2096186453;
		
		case 505:
			return 859409444;
		
		case 506:
			return -671427187;
		
		case 507:
			return 100192478;
		
		case 508:
			return 307812616;
		
		case 509:
			return 1670843243;
		
		case 510:
			return 899615863;
		
		case 511:
			return -298901850;
		
		case 512:
			return 1379186917;
		
		case 513:
			return -817206030;
		
		case 514:
			return -1150323212;
		
		case 515:
			return -247466821;
		
		case 516:
			return 427124242;
		
		case 517:
			return 855418120;
		
		case 518:
			return -777015093;
		
		case 519:
			return -722462870;
		
		case 520:
			return -937454324;
		
		case 521:
			return -339438116;
		
		case 522:
			return 2135639035;
		
		case 523:
			return 1254273765;
		
		case 524:
			return -792172668;
		
		case 525:
			return 1905987493;
		
		case 526:
			return 495693044;
		
		case 527:
			return -1693422950;
		
		case 528:
			return -205873076;
		
		case 529:
			return -2143114654;
		
		case 530:
			return -1420574021;
		
		case 531:
			return -1959250381;
		
		case 532:
			return -1088328663;
		
		case 533:
			return 513602003;
		
		case 534:
			return 359221401;
		
		case 535:
			return 1005272;
		
		case 536:
			return 1583044470;
		
		case 537:
			return 348853959;
		
		case 538:
			return 1045621973;
		
		case 539:
			return 1084576580;
		
		case 540:
			return 1651573695;
		
		case 541:
			return 1463321587;
		
		case 542:
			return -997505963;
		
		case 543:
			return -1649851713;
		
		case 544:
			return -386012962;
		
		case 545:
			return 1386101789;
		
		case 546:
			return 1227915917;
		
		case 547:
			return -218846335;
		
		case 548:
			return -352578118;
		
		case 549:
			return 1426626782;
		
		case 550:
			return -714081520;
		
		case 551:
			return 74547781;
		
		case 552:
			return 1271463052;
		
		case 553:
			return 1983140194;
		
		case 554:
			return 677262775;
		
		case 555:
			return -832337898;
		
		case 556:
			return -319249747;
		
		case 557:
			return -16955722;
		
		case 558:
			return -1360128126;
		
		case 559:
			return -1535425646;
		
		case 560:
			return -1063641743;
		
		case 561:
			return -1041133401;
		
		case 562:
			return 1380479304;
		
		case 563:
			return 600890828;
		
		case 564:
			return 733333190;
		
		case 565:
			return 1843035435;
		
		case 566:
			return -304127320;
		
		case 567:
			return 122470371;
		
		case 568:
			return 0;
		
		case 569:
			return -1591664384;
		
		case 570:
			return -673000374;
		
		case 571:
			return -1150938404;
		
		case 572:
			return -1756997214;
		
		case 573:
			return -813824107;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_1134(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1642(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_1135(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	if (func_1681(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_1136(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!func_591(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_1037(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_1137(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1682(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1246(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_619(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_1037(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_1138(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_1683(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_1139(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_291();
	func_340(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_1140(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_1684(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_1141(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_1142(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1143(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_613(50))
			{
				if (!func_613(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_613(51))
			{
				if (!func_613(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

int func_1144(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!func_591(iParam1, 0))
	{
		return 0;
	}
	if (func_610(iParam1) != -1037537535)
	{
		return 0;
	}
	bVar1 = func_20() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_615(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_689(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_611(iParam1, 866047851))
	{
		iVar5 = func_690(iVar4, 1);
		if (func_1685(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256;
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_615(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return 0;
			}
			break;
		
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_611(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return 0;
			}
			break;
		
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return 0;
			}
			break;
		
		case -1505978566:
			if (func_1686(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return 0;
			}
		
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_1687(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1687(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_615(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_611(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012;
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_1145()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1146()
{
	float fVar0;
	float fVar1;
	
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_1147()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_353(func_1688(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1148(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		
		case 1566949660:
			return -121629511;
	}
	return 0;
}

int func_1149(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_353(iVar0, 1, 0) && func_353(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_1150(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		
		case -649219937:
			return 1289585739;
		
		case -858567048:
			return -269048282;
		
		case -718162726:
			return 1441506783;
		
		case -1284282080:
			return 780305678;
		
		case -725003445:
			return 1811977508;
		
		case -1445630104:
			return -935153695;
		
		case 580970876:
			return 1299744282;
		
		case 967601061:
			return 1631240196;
		
		case 1946030891:
			return 517396587;
		
		case -1511404982:
			return 1620353486;
		
		case -944465290:
			return 1816443627;
		
		case -1701098855:
			return -127011478;
		
		default:
			break;
	}
	return 0;
}

int func_1151(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1689(iParam0);
	if (iVar0 != -15)
	{
		func_340(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_718(iVar0, 1);
	}
	return 0;
}

void func_1152(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1153(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1154(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1155(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1156(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_1165(iVar9);
	iVar2 = func_1165(iVar10);
	iVar3 = func_1165(iVar11);
	iVar5 = func_1166(iVar9);
	iVar6 = func_1166(iVar10);
	iVar7 = func_1166(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1165(iVar12);
		iVar8 = func_1166(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_1157(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1158()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1690(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1159()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_1160(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1668(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1668(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1668(iVar0))
		{
			*iParam2++;
		}
		if (func_1668(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1668(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1668(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1668(iVar0))
		{
			*iParam2++;
		}
		if (func_1668(iVar1))
		{
			*iParam2++;
		}
		if (func_1668(iVar0) && func_1668(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1668(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1668(iParam1))
			{
			}
		}
		{
		}
	}