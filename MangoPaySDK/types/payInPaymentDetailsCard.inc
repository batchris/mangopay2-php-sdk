<?php
namespace MangoPay;

/**
 * Class represents Card type for mean of payment in PayIn entity
 */
class PayInPaymentDetailsCard extends Dto implements PayInPaymentDetails {

    /**
     * CardType { CB_VISA_MASTERCARD, AMEX }
     * @var string 
     */
    public $CardType;
    
    /**
     * URL format expected
     * @var string
     */
    protected $RedirectURL;
    
    /**
     * URL format expected
     * @var string
     */
    public $ReturnURL;
}